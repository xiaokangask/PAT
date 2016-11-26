#include <stdio.h>
#include <string.h>
#define maxn 1100

int main(int argc, char const *argv[])
{
	char a[maxn],q[maxn];
	int b,r;
	scanf("%s",a);
	scanf("%d",&b);
	int m=0,n=0,x=a[0]-'0';
	while(1){
		q[n++]=x/b+'0';
		r=x%b;
		m++;
		if(a[m]!='\0')
			x=r*10+a[m]-'0';
		else break;
	}
	q[n]='\0';
	if(q[0]=='0'&&strlen(q)>1) printf("%s %d\n",q+1,r);
	else printf("%s %d\n",q,r);
	return 0;
}