#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a,const void* b)
{
	if(*(char*)a>*(char*)b) return 1;
	else return -1;
}

int main(int argc, char const *argv[])
{
	char a[30],b[30],c[30];
	scanf("%s",a);
	memset(b,'0',sizeof(b));
	int i,j;
	for(i=strlen(a)-1,j=0;i>=0;i--,j++){
		b[j+1]=((a[i]-'0')*2+(b[j]-'0'))/10+'0';
		b[j]=((a[i]-'0')*2+(b[j]-'0'))%10+'0';
		c[j+1]=b[j+1];
		c[j]=b[j];
	}
	if(b[j]=='0') c[j]=b[j]='\n';
	else {j++;c[j]=b[j]='\n';};
	if(strlen(a)==j){
		qsort(a,j,sizeof(char),compare);
		qsort(b,j,sizeof(char),compare);
		for(i=0;i<j;i++)
			if(a[i]!=b[i]) break;
		if(i<j) printf("No\n");
		else printf("Yes\n");
	}else printf("No\n");
	for(i=j-1;i>=0;i--){
		printf("%c",c[i]);
	}
	printf("\n");
	return 0;
}