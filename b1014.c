#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	const char* s[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char s1[100],s2[100],s3[100],s4[100];
	scanf("%s\n%s\n%s\n%s",s1,s2,s3,s4);
	int flag1=0,day=0,hour,min,i=0;
	while(s1[i]!='\0'&&s2[i]!='\0'){
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'&&flag1==0){
			day=s1[i]-'A';
			flag1=1;
		}
		else if(s1[i]==s2[i]&&flag1==1){
			if(s1[i]>='A'&&s1[i]<='N') {hour=10+s1[i]-'A';break;}
			if(isdigit(s1[i])) {hour=s1[i]-'0';break;}
		}
		i++;
	}
	i=0;
	while(s3[i]!='\0'&&s4[i]!='\0'){
		if(s3[i]==s4[i]&&isalpha(s3[i])){
			min=i;
			break;
		}
		i++;
	}
	printf("%s %02d:%02d",s[day],hour,min);
	return 0;
}
