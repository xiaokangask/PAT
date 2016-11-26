#include <stdio.h>
#include <string.h>
#define mod 1000000007

char s[100005];

int main(int argc, char const *argv[])
{
	scanf("%s",s);
	long total=0,m=0,n=0;
	int len=strlen(s),i;
	for(i=0;i<len;i++)
		if(s[i]=='T') n++;
	for(i=0;i<len;i++){
		if(s[i]=='A'){
			total=(total+(m*n)%mod)%mod;
		}else if(s[i]=='P') m++;
		else if(s[i]=='T') n--;
	}
	printf("%ld\n",total);
	return 0;
}