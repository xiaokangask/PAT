#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double r,p,r1,p1,r2,p2,a,b;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	r=r1*r2;
	p=p1+p2;
	a=r*cos(p);
	b=r*sin(p);
	if(a>-0.005&&a<0) printf("0.00");
	else printf("%.2f",a);
	if(b>=0) printf("+%.2fi\n",b);
	else if(b>-0.005) printf("+0.00i\n");
	else printf("%.2fi\n",b);
	return 0;
}