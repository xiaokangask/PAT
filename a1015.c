#include <stdio.h>
#include <math.h>

int isprime(int n)
{
	if(n<=1) return 0;
	if(n==2) return 1;
	int flag=0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) {flag=1;break;}
	if(flag) return 0;
	return 1;
}

int main(int argc, char const *argv[])
{
	int n,d;
	while(scanf("%d%d",&n,&d)==2&&n>=0){
		int flag=0;
		if(isprime(n)){
			int rn=0;
			while(n>0){
				rn=rn*d+n%d;
				n/=d;
			}
			if(isprime(rn)) flag=1;
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}