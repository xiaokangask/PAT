#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,sum=0,tmp=0;
	scanf("%d",&n);
	sum+=n*5;
	while(n--){
		int tmp2;
		scanf("%d",&tmp2);
		if(tmp2>tmp){
			sum+=(tmp2-tmp)*6;
		}else sum+=(tmp-tmp2)*4;
		tmp=tmp2;
	}
	printf("%d\n",sum);
	return 0;
}