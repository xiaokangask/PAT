#include <stdio.h>
#include <string.h>
#define maxn 200

int a[maxn],b[maxn];

int main(int argc, char const *argv[])
{
	char ch;
	int sum1=0,sum2=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while((ch=getchar())!='\n')
		a[ch]++;
	while((ch=getchar())!='\n')
		b[ch]++;
	for(int i=0;i<130;i++){
		if(b[i]!=0&&b[i]>a[i]) sum1+=(b[i]-a[i]);
		if((a[i]!=0)||(b[i]!=0)) sum2+=(a[i]-b[i]);
	}
	if(sum1>0) printf("No %d\n",sum1); 
	else printf("Yes %d\n",sum2);
	return 0;
}