#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char ch;
	int a[26],max=0,maxi=0;
	memset(a,0,sizeof(a));
	while((ch=getchar())!='\n'){
		if(isalpha(ch)) a[toupper(ch)-'A']++;
	}
	for(int i=0;i<26;i++)
		if(a[i]>max){
			max=a[i];maxi=i;
		}
	printf("%c %d\n",maxi+'a',max);
	return 0;
}