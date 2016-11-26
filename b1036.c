#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,m;
	char ch;
	scanf("%d %c",&n,&ch);
	m=(n+1)/2;
	for(int i=0;i<n;i++)
		printf("%c",ch);
	printf("\n");
	for(int i=0;i<m-2;i++){
		printf("%c",ch);
		for(int i=0;i<n-2;i++)
			printf(" ");
		printf("%c\n",ch);
	}
	if(n>2){
		for(int i=0;i<n;i++)
			printf("%c",ch);
	}
	return 0;
}