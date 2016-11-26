#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s1[100],s2[100],s[100];
	int n1=0,n2=0,n=0;
	s[0]='\0';
	scanf("%s\n%s",s1,s2);
	while(s1[n1]!='\0'){
		if(s1[n1]!=s2[n2]){
			if(s1[n1]>='a'&&s1[n1]<='z') s1[n1]=s1[n1]-'a'+'A';
			int i=0;
			for(;i<n;i++){
				if(s[i]==s1[n1]) break;
			}
			if(i==n){
				s[n]=s1[n1];
				s[++n]='\0';
			}
			n1++;
		}else{
			n1++;
			n2++;
		}
	}
	printf("%s\n",s);
	return 0;
}