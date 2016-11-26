#include <stdio.h>

int isrealPAT(char ch[])
{
	int i,m,n;
	for(m=0;;m++)
		if(ch[m]=='P') break;
	for(n=0;;n++)
		if(ch[n]=='T') break;
	for(i=0;ch[i]!='\0';i++);
	if(n<m+2||i-1-n<m) return 0;
	if(n>m+2){
		char ch1[100];
		int n1,n2;
		for(n1=0,n2=0;n1<=n-2;n1++,n2++)
			ch1[n2]=ch[n1];
		ch1[n2++]='T';
		n1=n+1;
		for(;n1<=i-m-1;n1++,n2++)
			ch1[n2]=ch[n1];
		ch1[n2]='\0';
		return isrealPAT(ch1);
	}else {
		if(m==i-1-n) return 1;
		else return 0;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		char ch[101];
		int f[]={0,0,0};
		scanf("%s",ch);
		int i=0;
		while(ch[i]!='\0'){
			if(ch[i]=='P') f[0]++;
			if(ch[i]=='A') f[1]++;
			if(ch[i]=='T') f[2]++;
			i++;
		}
		if(f[0]==1&&f[2]==1&&f[1]>=1&&f[0]+f[1]+f[2]==i){
			if(isrealPAT(ch)) printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
	return 0;
}