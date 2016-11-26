#include <stdio.h>
#include <string.h>

char a[1000][15],b[1000][15];
int c[1000];

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	memset(c,0,sizeof(c));
	int flag=0;
	for(int i=0;i<n;i++){
		scanf("%s %s\n",a[i],b[i]);
		for(int j=0;j<strlen(b[i]);j++)
			if(b[i][j]=='1'){b[i][j]='@';c[i]=1;}
			else if(b[i][j]=='0'){b[i][j]='%';c[i]=1;}
			else if(b[i][j]=='l'){b[i][j]='L';c[i]=1;}
			else if(b[i][j]=='O'){b[i][j]='o';c[i]=1;}
		if(c[i]) flag++;
	}
	if(flag){
		printf("%d\n",flag);
		for(int i=0;i<n;i++)
			if(c[i]) printf("%s %s\n",a[i],b[i]);
	}else{
		if(n>1) printf("There are");
		else printf("There is");
		printf(" %d account",n);
		if(n>1) printf("s");
		printf(" and no account is modified\n");
	}
	return 0;
}