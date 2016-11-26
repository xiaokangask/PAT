#include <stdio.h>
#include <math.h>

int isprime(int n)
{
	int flag=0;
	if(n%2==0) return 0;
	else{
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0){
				flag=1;
				break;
			}
		if(flag) return 0;
		else return 1;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int p=2,cnt=0;
	for(int i=3;i<=n;i++)
		if(isprime(i)){
			if(i-p==2) cnt++;
			p=i;
		}
	printf("%d\n",cnt);
	return 0;
}