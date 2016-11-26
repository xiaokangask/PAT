#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int compare(const void* a,const void* b)
{
	return *(int*)b-*(int*)a;
}

int main(int argc, char const *argv[])
{
	int N,m,n;
	scanf("%d",&N);
	int i=sqrt(N),j;
	for(;;i++){
		if(N%i==0&&N/i<=i) break;
	}
	m=i;n=N/m;
	int a[N],b[m][n];
	for(i=0;i<=N;i++)
		scanf("%d",&a[i]);
	qsort(a,N,sizeof(int),compare);
	memset(b,0,sizeof(b));
	int pm=0,pn=0;
	b[0][0]=a[0];
	i=1;
	while(i<N){
		while(pn+1<n&&b[pm][pn+1]==0) b[pm][++pn]=a[i++];
		while(pm+1<m&&b[pm+1][pn]==0) b[++pm][pn]=a[i++];
		while(pm-1>=0&&b[pm-1][pn]==0) b[--pm][pn]=a[i++];
		while(pn-1>=0&&b[pm][pn-1]==0) b[pm][--pn]=a[i++];
	}
	for(i=0;i<m;i++){
		int flag=0;
		for(j=0;j<n;j++){
			if(flag) printf(" ");
			flag=1;
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}