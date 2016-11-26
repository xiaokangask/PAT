#include <stdio.h>
#include <string.h>

char s1[100005],s2[100005];

int main(int argc, char const *argv[])
{
	gets(s1);
	gets(s2);
	int a[256];
	int len=strlen(s2);
	memset(a,0,sizeof(a));
	for(int i=0;i<len;i++){
		a[s2[i]]=1;
	}
	len=strlen(s1);
	for(int i=0;i<len;i++)
		if(!a[s1[i]]) putchar(s1[i]);
	return 0;
}