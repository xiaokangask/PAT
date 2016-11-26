#include <stdio.h>
#include <stdlib.h>

struct node{
	char name[11];
	char num[11];
	int grade;
};

int main(int argc, char const *argv[])
{
	int n,max=0,min=0;
	scanf("%d",&n);
	struct node a[n];
	for(int i=0;i<n;i++)
		scanf("%s %s %d",a[i].name,a[i].num,&a[i].grade);
	for(int i=1;i<n;i++){
		if(a[i].grade>a[max].grade) max=i;
		if(a[i].grade<a[min].grade) min=i;
	}
	printf("%s %s\n",a[max].name,a[max].num);
	printf("%s %s\n",a[min].name,a[min].num);
	return 0;
}