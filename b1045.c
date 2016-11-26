#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double a[100005],b[100005];
int c[100005];

int compare(const void *a,const void *b)
{
	if(*(double*)a<*(double*)b) return -1;
	else return 1;
}

int main(int argc, char const *argv[])
{
	int n,i;
	double max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	memset(c,0,sizeof(c));
	max=a[0];
	for(i=0;i<n;i++){
		if(max>a[i]) c[i]=1;
		else max=a[i];
	}
	min=a[n-1];
	for(i=n-1;i>=0;i--){
		if(min<a[i]) c[i]=1;
		else min=a[i];
	}
	int cnt=0;
	for(i=0;i<n;i++)
		if(!c[i]) b[cnt++]=a[i];
	qsort(b,cnt,sizeof(double),compare);
	printf("%d\n",cnt);
	int flag=0;
	for(i=0;i<cnt;i++){
		if(flag) printf(" ");
		flag=1;
		printf("%.0f",b[i]);
	}
	if(!cnt) printf("\n");
	return 0;
}