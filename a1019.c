#include <stdio.h>

long a[50];

int main(int argc, char const *argv[])
{
	long n,b,rn=0;
	int len=0;
	scanf("%ld%ld",&n,&b);
	long n0=n;
	while(n>0){
		a[len++]=n%b;
		rn=rn*b+n%b;
		n/=b;
	}
	if(rn==n0) printf("Yes\n");
	else printf("No\n");
	int flag=0;
	for(int i=len-1;i>=0;i--){
		if(flag) printf(" ");
		flag=1;
		printf("%ld",a[i]);
	}
	if(n0==0) printf("0");
	return 0;
}