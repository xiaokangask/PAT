#include <stdio.h>
#include <stdlib.h>

double a[100005];

int compare(const void *a,const void *b)
{
	if(*(double *)a<*(double *)b) return -1;
	else return 1;
}

int main(int argc, char const *argv[])
{
	int n,i,k=0,j;
	double p;
	scanf("%d%lf",&n,&p);
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	qsort(a,n,sizeof(double),compare);
	for(i=0;i<n;i++){
		for(j=i+k;j<n;j++){
			if(a[j]>a[i]*p) break;
			else k=j-i+1;
		}
	}
	printf("%d\n",k);
	return 0;
}