#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int c1,c2,h,m,s;
	scanf("%d %d",&c1,&c2);
	s=floor((c2-c1)/100.0+0.5);
	h=s/3600;
	s%=3600;
	m=s/60;
	s%=60;
	printf("%d%d:%d%d:%d%d\n",h/10,h%10,m/10,m%10,s/10,s%10);
	return 0;
}
