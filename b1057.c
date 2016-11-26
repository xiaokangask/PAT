#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch;
	int sum=0,n0=0,n1=0;
	while((ch=getchar())!='\n'){
		if(isalpha(ch)) sum+=(toupper(ch)-'A'+1);
	}
	while(sum){
		if(sum%2) n1++;
		else n0++;
		sum/=2; 
	}
	printf("%d %d\n",n0,n1);
	return 0;
}