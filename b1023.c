#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10],flag=0,first;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(i!=0&&flag==0&&a[i]!=0){
			first=i;
			flag=1;
		}
	}
	printf("%d",first);
	a[first]--;
	for(int i=0;i<10;i++)
		for(int m=0;m<a[i];m++)
			printf("%d",i);
	printf("\n");
	return 0;
}