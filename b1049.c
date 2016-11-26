#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	double sum=0,x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf",&x);
		sum+=x*i*(n-i+1.0);
	}
	printf("%.2f\n",sum);
	return 0;
}