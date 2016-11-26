#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n,cnt=0;
	char ch,s[100];
	double sum=0;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		int point=0,sign=0,dig=0,si=0,ppoint=-1,psign=-1;
		while((ch=getchar())!=' '&&ch!='\n')
			s[si++]=ch;
		s[si]='\0';
		for(int j=0;j<si;j++){
			if(isdigit(s[j])) dig++;
			if(s[j]=='-') {sign++;psign=j;}
			if(s[j]=='.') {point++;ppoint=j;}
		}
		if(!(sign+dig+point==si&&sign<2&&point<2)) {printf("ERROR: %s is not a legal number\n",s);continue;}
		if((sign==1&&psign!=0)||(point==1&&si-1-ppoint>2)) {printf("ERROR: %s is not a legal number\n",s);continue;}
		double x=atof(s);
		if(atof(s)<-1000.0||atof(s)>1000.0) {printf("ERROR: %s is not a legal number\n",s);continue;}
		sum+=x;
		cnt++;
	}
	printf("The average of %d number",cnt);
	if(cnt>=2) printf("s is %.2f\n",sum/cnt);
	else if(cnt==0) printf("s is Undefined\n");
	else printf(" is %.2f\n",sum);
	return 0;
}