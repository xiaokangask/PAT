#include <stdio.h>
#define maxsize 1000

struct information{
	char id[15];
	int t;
}q[maxsize+1],tmp;

int main(int argc, char const *argv[])
{
	int m,n,x,a[maxsize+1];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d",tmp.id,&x,&tmp.t);
		q[x]=tmp;
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		printf("%s %d\n",q[a[i]].id,q[a[i]].t);
	}
	return 0;
}