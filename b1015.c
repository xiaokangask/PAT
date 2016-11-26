#include <stdio.h>
#include <stdlib.h>

struct node{
	long num;
	int de;
	int cai;
	int tot;
}c[100005];

int d[100005],h,l;

int compare(const void *a,const void *b)
{
	if(c[*(int *)a].de>=h&&c[*(int *)a].cai>=h){
		if(!(c[*(int *)b].de>=h&&c[*(int *)b].cai>=h)) return -1;
		else if(c[*(int *)a].tot>c[*(int *)b].tot) return -1;
		else if(c[*(int *)a].tot==c[*(int *)b].tot){
			if(c[*(int *)a].de>c[*(int *)b].de) return -1;
			else if(c[*(int *)a].de==c[*(int *)b].de) return (c[*(int *)a].num-c[*(int *)b].num);
		}
	}else if(c[*(int *)a].de>=h&&c[*(int *)a].cai<h){
		if(c[*(int *)b].de<h) return -1;
		else if(c[*(int *)b].de>=h&&c[*(int *)b].cai<h){
			if(c[*(int *)a].tot>c[*(int *)b].tot) return -1;
			else if(c[*(int *)a].tot==c[*(int *)b].tot){
				if(c[*(int *)a].de>c[*(int *)b].de) return -1;
				else if(c[*(int *)a].de==c[*(int *)b].de) return (c[*(int *)a].num-c[*(int *)b].num);
			}
		}
	}else if(c[*(int *)a].de<h&&c[*(int *)a].de>=c[*(int *)a].cai){
		if(c[*(int *)b].de<h&&c[*(int *)b].de<c[*(int *)b].cai) return -1;
		else if(c[*(int *)b].de<h&&c[*(int *)b].de>=c[*(int *)b].cai){
			if(c[*(int *)a].tot>c[*(int *)b].tot) return -1;
			else if(c[*(int *)a].tot==c[*(int *)b].tot){
				if(c[*(int *)a].de>c[*(int *)b].de) return -1;
				else if(c[*(int *)a].de==c[*(int *)b].de) return (c[*(int *)a].num-c[*(int *)b].num);
			}
		}
	}else {
		if(c[*(int *)b].de<h&&c[*(int *)b].de<c[*(int *)b].cai){
			if(c[*(int *)a].tot>c[*(int *)b].tot) return -1;
			else if(c[*(int *)a].tot==c[*(int *)b].tot){
				if(c[*(int *)a].de>c[*(int *)b].de) return -1;
				else if(c[*(int *)a].de==c[*(int *)b].de) return (c[*(int *)a].num-c[*(int *)b].num);
			}
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int n,m=0,i,de,cai;
	long num;
	scanf("%d%d%d",&n,&l,&h);
	for(i=0;i<n;i++){
		scanf("%ld%d%d",&num,&de,&cai);
		if(de>=l&&cai>=l){
			c[m].num=num;c[m].de=de;c[m].cai=cai;c[m++].tot=de+cai;
		}
	}
	for(i=0;i<m;i++) d[i]=i;
	qsort(d,m,sizeof(int),compare);
	printf("%d\n",m);
	for(i=0;i<m;i++)
		printf("%08ld %d %d\n",c[d[i]].num,c[d[i]].de,c[d[i]].cai);
	return 0;
}