#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	char ch;
	scanf("%d %c",&n,&ch);
	int i=0;
	while(2*(i+1)*(i+1)-1<=n){
		i++;
	}
	for(int m=0;m<i;m++){
		for(int j=0;j<m;j++)
			printf(" ");
		for(int j=0;j<2*i-2*m-1;j++)
			printf("%c",ch);
		printf("\n");
	}
	for(int m=i-2;m>=0;m--){
		for(int j=0;j<m;j++)
			printf(" ");
		for(int j=0;j<2*i-2*m-1;j++)
			printf("%c",ch);
		printf("\n");
	}
	printf("%d",n-2*i*i+1);
	return 0;
}
