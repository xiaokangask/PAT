#include <stdio.h>
#include <string.h>
#define maxn 1000000

char s[maxn];

int main(int argc, char const *argv[])
{
	scanf("%s",s);
	int a1,a2,a3,n=0;
	a2=a3=strlen(s);
	for(int i=1;i<a3;i++){
		if(s[i]=='E') a1=i;
		if(s[i]=='+'||s[i]=='-') a2=i;
	}
	if(s[0]=='-')
		printf("-");
	for(int i=a2+1;i<a3;i++)
		n=n*10+s[i]-'0';
	if(a2==a3||n==0){
		for(int i=1;i<a1;i++)
			printf("%c",s[i]);
	}else{
		if(s[a2]=='-'){
			printf("0.");
			for(int i=1;i<n;i++)
				printf("0");
			for(int i=1;i<a1;i++)
				if(i!=2) printf("%c",s[i]);
		}
		if(s[a2]=='+'){
			if(n>=a1-3){
				for(int i=1;i<a1;i++)
					if(i!=2) printf("%c",s[i]);
				for(int i=0;i<n-a1+3;i++)
					printf("0");
			}else{
				printf("%c",s[1]);
				int i;
				for(i=3;i<=n+2;i++)
					printf("%c",s[i]);
				printf(".");
				for(;i<a1;i++)
					printf("%c",s[i]);
			}
		}
	}
		return 0;
}