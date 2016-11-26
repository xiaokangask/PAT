#include <stdio.h>

int a[5];

void swap(int n,int m)
{
	int tmp;
	tmp=a[n];
	a[n]=a[m];
	a[m]=tmp;
}

void sort()
{
	if(a[0]>a[2]) swap(0,2);
	if(a[1]>a[3]) swap(1,3);
	if(a[2]>a[3]) swap(2,3);
	if(a[0]>a[1]) swap(0,1);
	if(a[1]>a[2]) swap(1,2);
}

void digit(int n)
{
	a[0]=n/1000;
	a[1]=n%1000/100;
	a[2]=n%100/10;
	a[3]=n%10;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	digit(n);
	do{
		sort();
		printf("%d%d%d%d - %d%d%d%d = ",a[3],a[2],a[1],a[0],a[0],a[1],a[2],a[3]);
		n=999*(a[3]-a[0])+90*(a[2]-a[1]);
		digit(n);
		printf("%d%d%d%d\n",a[0],a[1],a[2],a[3]);
	}while(n!=0&&n!=6174);
	return 0;
}