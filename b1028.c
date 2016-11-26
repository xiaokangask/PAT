#include <stdio.h>
#include <string.h>
#define maxn 100005

const char min[]="1814/09/06";
const char max[]="2014/09/06";

struct node{
	char s[10];
	char d[20];
}a[maxn];

int isreal(int i)
{
	if(strcmp(a[i].d,min)>=0&&strcmp(a[i].d,max)<=0)
		return 1;
	return 0;
}

int compare(int n,int m)
{
	if(strcmp(a[n].d,a[m].d)<0) return 1;
	else if(strcmp(a[n].d,a[m].d)>0) return -1;
	else return 0;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s %s",a[i].s,a[i].d);
	int maxi=0,mini=0,cnt=0,flag=0;
	for(int i=0;i<n;i++)
		if(isreal(i)){
			cnt++;
			if(!flag){
				maxi=mini=i;
				flag=1;
			}else{
				if(compare(i,maxi)==1) maxi=i;
				if(compare(i,mini)==-1) mini=i;
			}
		}
	if(cnt==0) printf("0\n");
	else printf("%d %s %s\n",cnt,a[maxi].s,a[mini].s);
	return 0;
}