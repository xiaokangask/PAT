#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,m,flag=0;
	scanf("%d %d",&n,&m);
	int a[n];
	m%=n;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1||m==n||m==0){
		for(int i=0;i<n;i++){
			if(flag) printf(" ");
			printf("%d",a[i]);
			flag=1;
		}
	}else {
		for(int i=n-m;i<n;i++){
			if(flag) printf(" ");
			printf("%d",a[i]);
			flag=1;
		}
		for(int i=0;i<n-m;i++){
			if(flag) printf(" ");
			printf("%d",a[i]);
			flag=1;
		}
	}
	return 0;
}