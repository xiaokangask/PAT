#include <stdio.h>
#include <string.h>

char s[100];
int p;

void putmotion(char a[])
{
	char ch;
	int i=0;
	while((ch=getchar())!='\n')
		a[i++]=ch;
	a[i]='\0';
}

int putfinal(char a[],int x)
{
	int i=0,cnt=0;
	while(a[i]!='\0'){
		if(a[i]=='['){
			cnt++;
			if(cnt==x){
				i++;
				while(a[i]!=']'){
					if(a[i]=='\0') return 0;
					s[p++]=a[i];
					i++;
				}
				return 1;
			}
		}
		i++;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	char hand[200],eye[200],mouse[100];
	putmotion(hand);putmotion(eye);putmotion(mouse);
	int k;
	scanf("%d",&k);
	while(k--){
		p=0;
		memset(s,' ',sizeof(s));
		int lh,le,m,re,rh;
		scanf("%d%d%d%d%d",&lh,&le,&m,&re,&rh);
		if(!putfinal(hand,lh)) {printf("Are you kidding me? @\\/@\n");continue;}
		s[p++]='(';
		if(!putfinal(eye,le)) {printf("Are you kidding me? @\\/@\n");continue;}
		if(!putfinal(mouse,m)) {printf("Are you kidding me? @\\/@\n");continue;}
		if(!putfinal(eye,re)) {printf("Are you kidding me? @\\/@\n");continue;}
		s[p++]=')';
		if(!putfinal(hand,rh)) {printf("Are you kidding me? @\\/@\n");continue;}
		s[p]='\0';
		printf("%s\n",s);
		
	}
	return 0;
}
