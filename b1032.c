#include <stdio.h>
#include <string.h>
#define maxn 100005

int a[maxn];

int main(int argc, char const *argv[])
{
	int n,m,score,maxi=1,max=0;
	scanf("%d",&n);
	memset(a,0,sizeof(int)*n);
	while(n--){
		scanf("%d %d",&m,&score);
		a[m]+=score;
		if(a[m]>max){
			maxi=m;
			max=a[m];
		}
	}
	printf("%d %d\n",maxi,max);
	return 0;
}