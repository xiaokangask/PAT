#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[100],w[100];
	gets(s);
	int i,cnt=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' ') cnt++;
	}
	for(;cnt>0;cnt--){
		while(s[i]!=' ') i--;
		strcpy(w,s+i+1);
		printf("%s ",w);
		s[i]='\0';
	}
	printf("%s\n",s);
	return 0;
}