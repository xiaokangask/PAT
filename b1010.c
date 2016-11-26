#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,n,flag=0,cnt=0;
	while(scanf("%d%d",&a,&n)==2){
		if(n!=0){
			if(flag) printf(" ");
			flag=1;
			printf("%d %d",n*a,n-1);
			cnt++;
		}
	}
	if(!cnt) printf("0 0");
	return 0;
}