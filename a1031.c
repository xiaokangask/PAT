#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[100];
	scanf("%s",s);
	int N=strlen(s);
	int n=N<7?(N-1)/2:(N+2)/3;
	int n2=N+2-2*n;
	int p1=0,p2=strlen(s)-1;
	while(--n){
		printf("%c",s[p1++]);
		for(int i=0;i<n2-2;i++)
			printf(" ");
		printf("%c\n",s[p2--]);
	}
	for(;p1<=p2;p1++)
		printf("%c",s[p1]);
	printf("\n");
	return 0;
}