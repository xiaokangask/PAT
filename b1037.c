#include <stdio.h>

int main(int argc, char const *argv[])
{
	long g1,s1,k1,g2,s2,k2,n1,n2,g3,s3,k3;
	scanf("%ld.%ld.%ld %ld.%ld.%ld",&g1,&s1,&k1,&g2,&s2,&k2);
	n2=17*29+s2*29+k2;
	n1=s1*29+k1;
	n1=n2-n1;
	g3=n1/(17*29)+g2-g1-1;
	s3=n1%(17*29)/29;
	k3=n1%29;
	if(g3<0){g3=(g3+1)*(-1);s3=16-s3;k3=29-k3;printf("-");}
	printf("%ld.%ld.%ld\n", g3,s3,k3);
	return 0;
}