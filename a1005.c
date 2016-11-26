#include <stdio.h>
#include <string.h>

const char number[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int main(int argc, char const *argv[])
{
	char num[105];
	scanf("%s",num);
	int sum=0;
	for(int i=0;i<strlen(num);i++)
		sum+=(num[i]-'0');
	int c1=sum/100,c2=sum%100/10,c3=sum%10;
	if(c1) printf("%s %s %s\n",number[c1],number[c2],number[c3]);
	else if(c2) printf("%s %s\n",number[c2],number[c3]);
	else printf("%s\n",number[c3]);
	return 0;
}