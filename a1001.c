#include <stdio.h>

int main(int argc, char const *argv[])
{
	long a,b;
	scanf("%ld%ld",&a,&b);
	long c=a+b;
	int flag=c>=0?1:0;
	if(!flag) {printf("-");c=c*(-1);}
	long c1=c/1000000;
	long c2=c%1000000/1000;
	long c3=c%1000;
	if(c1) printf("%ld,%03ld,%03ld\n",c1,c2,c3);
	else if(c2) printf("%ld,%03ld\n",c2,c3);
	else printf("%ld\n",c3);
	return 0;
}