#include <stdio.h>
#include <string.h>

int a[1005];

int main(int argc, char const *argv[])
{
	int max=0,maxi=0,n;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	while(n--){
		int num1,num2,score;
		scanf("%d-%d %d",&num1,&num2,&score);
		a[num1]+=score;
		if(a[num1]>max){max=a[num1],maxi=num1;}
	}
	printf("%d %d\n",maxi,max);
	return 0;
}