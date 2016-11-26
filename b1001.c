#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	int i= 0;
	scanf("%d", &n);
	while(n!=1){
		if(n%2==0){
			n/=2;
			i++;
		}else{
			n=(3*n+1)/2;
			i++;
		}
	}
	printf("%d", i);
	return 0;
}