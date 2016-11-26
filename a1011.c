#include <stdio.h>

int main(int argc, char const *argv[])
{
	double w,t,l,p=1.0,p2[3];
	int a[3];
	for(int i=0;i<3;i++){
		scanf("%lf%lf%lf",&w,&t,&l);
		if(w>t&&w>l) {p2[i]=w;a[i]=0;}
		else if(t>l) {p2[i]=t;a[i]=1;}
		else {p2[i]=l;a[i]=2;}
	}
	for(int i=0;i<3;i++)
		if(a[i]==0) printf("W ");
		else if(a[i]==1) printf("T ");
		else if(a[i]==2) printf("L ");
	printf("%.2lf\n",(p2[0]*p2[1]*p2[2]*0.65-1)*2.0);
	return 0;
}