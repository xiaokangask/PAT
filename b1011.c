#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i,t;
	scanf("%d", &t);
	long a1,a2,a3;
	for(i=1;i<=t;i++){
		scanf("%ld %ld %ld",&a1,&a2,&a3);
		if(a1+a2>a3) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
	}
	return 0;
}