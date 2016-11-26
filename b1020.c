#include <stdio.h>
#include <stdlib.h>

double left[1005],price[1005];
int c[1005];

int compare(const void *a,const void *b)
{
	if((price[*(int *)a]/left[*(int *)a])>(price[*(int *)b]/left[*(int *)b]))
		return -1;
	return 1;
}

int main(int argc, char const *argv[])
{
	int n,d,i;
	scanf("%d%d",&n,&d);
	for(i=0;i<n;i++){
		scanf("%lf",&left[i]);
		c[i]=i;
	}
	for(i=0;i<n;i++)
		scanf("%lf",&price[i]);
	qsort(c,n,sizeof(int),compare);
	double tot=0;
	for(i=0;i<n;i++){
		if(d>left[c[i]]){
			tot+=price[c[i]];
			d-=left[c[i]];
		}else{
			tot+=d*(price[c[i]]/left[c[i]]);
			break;
		}
	}
	printf("%.2f\n",tot);
	return 0;
}