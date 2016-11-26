#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char s1[13][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
const char s2[13][5]={" ","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d\n",&n);
	while(n--){
		int i=0,len;
		char s[10],ch;
		while((ch=getchar())!='\n')
			s[i++]=ch;
		s[i]='\0';
		len=i;
		if(isdigit(s[0])){
			int m=0;
			for(i=0;i<len;i++)
				m=m*10+s[i]-'0';
			if(!m) printf("tret\n");
			else{
				if(m/13&&m%13) printf("%s %s\n",s2[m/13],s1[m%13]);
				else if(m/13) printf("%s\n",s2[m/13]);
				else printf("%s\n",s1[m%13]);
			}
		}else{
			if(len==4) printf("0\n");
			else {
				if(len==7) {
					char a1[5],a2[5];
					int b1,b2;
					a1[0]=s[4];a1[1]=s[5];a1[2]=s[6];a1[3]='\0';
					a2[0]=s[0];a2[1]=s[1];a2[2]=s[2];a2[3]='\0';
					for(i=1;i<13;i++)
						if(strcmp(a1,s1[i])==0) {b1=i;break;}
					for(i=1;i<13;i++)
						if(strcmp(a2,s2[i])==0) {b2=i;break;}
					printf("%d\n", 13*b2+b1);
				}else {
					char a2[5];
					int b1=20,b2=20;
					a2[0]=s[0];a2[1]=s[1];a2[2]=s[2];a2[3]='\0';
					for(i=1;i<13;i++)
						if(strcmp(a2,s1[i])==0) {b1=i;break;}
					for(i=1;i<13;i++)
						if(strcmp(a2,s2[i])==0) {b2=i;break;}
					if(b1==20) printf("%d\n",b2*13); 
					else printf("%d\n",b1);
				}
			}
		}
	}
	return 0;
}