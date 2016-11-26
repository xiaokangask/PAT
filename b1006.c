#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[3];
	int i,x;
	for(i=0;i<3;i++)
		a[i]=0;
	scanf("%d",&x);
	for(i=0;x>0;i++){
		a[i]=x%10;
		x/=10;
	}
	for(i=0;i<a[2];i++)
		printf("B");
	for(i=0;i<a[1];i++)
		printf("S");
	for(i=1;i<=a[0];i++)
		printf("%d", i);
	return 0;
}