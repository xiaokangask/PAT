#include <stdio.h>
#include <string.h>

int a[10005],b[100005];

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	memset(a,0,10001);
	int u=0;
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		a[b[i]]++;
	}
	for(int i=0;i<n;i++){
		if(a[b[i]]==1) {u=b[i];break;}
	}
	if(u) printf("%d\n",u);
	else printf("None\n");
	return 0;
}