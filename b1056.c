#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,a[10],s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j) s+=a[i]*10+a[j];
	printf("%d\n",s);
	return 0;
}