#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[150],s2[150],s[150];
	scanf("%s %s",s1,s2);
	int len1=strlen(s1),len2=strlen(s2),i1=len1-1,i2=len2-1,len3=1,i=1,n=(len1>len2?len1:len2)-1;
	s[n+1]='\0';
	for(;n>=0;n--,i++){
		if(i1>=0){
			int m,x;
			if(i2>=0) x=s2[i2]-'0';
			else x=0;
			if(i%2){
				m=(s1[i1]-'0'+x)%13;
			}else{
				m=(x-s1[i1]+'0'+10)%10;
			}
			if(m<10) s[n]=m+'0';
			else if(m==10) s[n]='J';
			else if(m==11) s[n]='Q';
			else s[n]='K';
			i1--;i2--;
		}else {s[n]=s2[i2];i2--;}
	}
	printf("%s\n",s);
	return 0;
}