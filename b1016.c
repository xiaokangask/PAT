#include <stdio.h>

int getp(char x[],int d)
{
	int i=0,cnt=0,p=0;
	d+='0';
	while(x[i]!='\0'){
		if(x[i]==d) cnt++;
		i++;
	}
	d=d-'0';
	for(i=0;i<cnt;i++){
		p=p*10+d;
	}
	return p;
}

int main(int argc, char const *argv[])
{
	char a[11],b[11];
	int da,db,pa,pb;
	scanf("%s %d %s %d",a,&da,b,&db);
	pa=getp(a,da);
	pb=getp(b,db);
	printf("%d", pa+pb);
	return 0;
}