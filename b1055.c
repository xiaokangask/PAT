#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[10005],b[10005];
char s[10005][10];

void print(int left,int right)
{
	if(right==left){
		printf("%s",s[b[left]]);
	}
	else if((right+left)%2==0){
		printf("%s",s[b[left+1]]);
		for(int i=left+3;i<=right-1;i+=2)
			printf(" %s",s[b[i]]);
		printf(" %s",s[b[right]]);
		for(int i=right-2;i>=left;i-=2)
			printf(" %s",s[b[i]]);
	}else {
		printf("%s",s[b[left]]);
		for(int i=left+2;i<=right-1;i+=2)
			printf(" %s",s[b[i]]);
		printf(" %s",s[b[right]]);
		for(int i=right-2;i>=left+1;i-=2)
			printf(" %s",s[b[i]]);
	}
	printf("\n");
}

int compare(const void* c,const void* d)
{
	if(a[*(int*)c]<a[*(int*)d]) return -1;
	else if(a[*(int*)c]==a[*(int*)d]) return (-1)*strcmp(s[*(int*)c],s[*(int*)d]) ;
	return 1;
}

int main(int argc, char const *argv[])
{
	int n,k,i;
	scanf("%d%d",&n,&k);
	if(k>0){
	for(i=0;i<n;i++){
		scanf("%s%d",s[i],&a[i]);
		b[i]=i;
	}
	qsort(b,n,sizeof(int),compare);
	int flag=0;
	print((n/k)*(k-1),n-1);
	for(int i=k-1;i>=1;i--){
		print((n/k)*(i-1),(n/k)*(i-1)+n/k-1);
	}
	}	
	return 0;
}