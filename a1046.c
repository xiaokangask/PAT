#include <stdio.h>

long a[100005];

int main(int argc, char const *argv[])
{
	int n,m;
	long sum=0;
	long b;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		a[i]=sum;
		scanf("%ld",&b);
		sum+=b;
	}
	scanf("%ld%d",&b,&m);
	a[n]=sum;
	while(m--){
		int x,y;
		scanf("%d%d",&x,&y);
		if(x>y) {x+=y;y=x-y;x=x-y;}
		long c;
		if(a[y]-a[x]>a[x]+a[n]-a[y]+b) c=a[n]+b+a[x]-a[y];
		else c=a[y]-a[x];
		printf("%ld\n",c);
	}
	return 0;
}