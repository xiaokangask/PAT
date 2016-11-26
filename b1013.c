#include <stdio.h>
#include <math.h>

int isprime(int n)
{
	if(n==2) return 1;
	if(n%2==0) return 0;
	int flag=0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			flag=1;
			break;
		}
	if(flag) return 0;
	else return 1;
}

int main(int argc, char const *argv[])
{
	int n,m,cnt=0;
	scanf("%d %d",&n,&m);
	int i=2;
	while(cnt!=m){
		if(isprime(i)){
			cnt++;
			if(cnt>=n){
				if((cnt-n+1)%10&&cnt<m) printf("%d ",i);
				else printf("%d\n",i);
			}
		}
		i++;
	}
	return 0;
}