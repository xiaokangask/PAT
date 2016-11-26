#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,d,i=0,f[100],s;
	scanf("%d %d %d",&a,&b,&d);
	s=a+b;
	do{
		f[i]=s%d;
		s/=d;
		i++;
	}while(s>0);
	while(i--)
		printf("%d",f[i]);
	return 0;
}