#include <stdio.h>
#include <string.h>

int a[105];

int main(int argc, char const *argv[])
{
	int n,x,m;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	while(n--){
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&m);
	for(int i=1;i<m;i++){
		scanf("%d",&x);
		printf("%d ",a[x]);
	}
	scanf("%d",&x);
	printf("%d\n",a[x]);
	return 0;
}