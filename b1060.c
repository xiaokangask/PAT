#include <stdio.h>
#include <stdlib.h>

int a[100005];

int compare(const void*a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main(int argc, char const *argv[])
{
	int n,e=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),compare);
	for(int i=0;i<n;i++){
		if((a[i]>n-i)) {e=n-i;break;} 
	}
	printf("%d\n",e);
	return 0;
}