#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long a[500000];

int compare(const void* a,const void* b)
{
	return *(long*)a-*(long*)b;
}

int main(int argc, char const *argv[])
{
	int m,n;
	scanf("%d%d",&m,&n);
	int cnt=0,num=1;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			scanf("%ld",&a[cnt++]);
		}
	qsort(a,cnt,sizeof(long),compare);
	for(int i=1;i<cnt;i++){
		if(a[i]==a[i-1]) num++;
		else num=1;
		if(num>cnt/2) {printf("%ld\n",a[i]);break;}
	}
	if(cnt==1) printf("%ld\n",a[0]);
	return 0;
}