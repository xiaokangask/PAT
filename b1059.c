#include <stdio.h>
#include <string.h>

int a[10000];

int is_prime(int n)
{
	if(n==2) return 1;
	for(int i=2;i*i<=n;i++)	
		if(n%i==0) return 0;
	return 1;
}

int main(int argc, char const *argv[])
{
	int n,k,ID;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		scanf("%d",&ID);
		a[ID]=i;
	}
	scanf("%d",&k);
	while(k--){
		scanf("%d",&ID);
		printf("%04d: ",ID);
		if(a[ID]==10005) printf("Checked\n");
		else if(a[ID]==1) printf("Mystery Award\n");
		else if(a[ID]==0) printf("Are you kidding?\n");
		else if(is_prime(a[ID])) printf("Minion\n");
		else printf("Chocolate\n");
		if(a[ID]) a[ID]=10005;
	}
	return 0;
}