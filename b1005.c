#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[105],b[10000];

int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

int main(int argc, char const *argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmp);
	memset(b,0,sizeof(b));
	for(i=n-1;i>=0;i--){
		int x=a[i];
		while(x!=1){
			if(x%2==0) x/=2;
			else x=(3*x+1)/2;
			if(b[x]) break;
			else b[x]=1;
		}	
	}
	int flag=0;
	for(i=n-1;i>=0;i--)
		if(b[a[i]]==0){
			if(flag) printf(" ");
			flag=1;
			printf("%d",a[i]);
		}
	return 0;
}