#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=0,b=0,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int n1,m1,n2,m2;
		scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
		int m=n1+n2;
		if((m==m1)&&(m!=m2)) b++;
		if((m!=m1)&&(m==m2)) a++;
	}
	printf("%d %d\n",a,b);
	return 0;
}