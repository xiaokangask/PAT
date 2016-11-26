#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int list[150];
	char ch;
	memset(list,0,sizeof(list));
	while((ch=getchar())!='\n'){
		list[ch]=1;
		if(isalpha(ch)) list[tolower(ch)]=1;
	}
	if(list['+']==1)
		memset((list+'A'),1,sizeof(int)*26);
	while((ch=getchar())!='\n')
		if(list[ch]==0) printf("%c",ch);
}