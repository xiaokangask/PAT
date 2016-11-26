#include <stdio.h>

struct node{
	int data;
	int next;
}a[100005];

int main(int argc, char const *argv[])
{
	int first,n,k,i,next,data,tmp,p,j,pn,cnt,x,n1=0;
	scanf("%d%d%d",&first,&n,&k);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&tmp,&data,&next);
		a[tmp].data=data;
		a[tmp].next=next;
	}
	tmp=p=first;
	while(tmp!=-1){
		tmp=a[tmp].next;
		n1++;
	}
	tmp=first;
	for(i=1;i<k;i++){
		tmp=a[tmp].next;
	}
	first=tmp;
	n1/=k;
	for(i=0;i<n1;i++){
		tmp=p;
		for(j=0;j<k;j++)
			tmp=a[tmp].next;
		pn=tmp;
		for(j=k-2;j>=0;j--){
			tmp=p;
			for(cnt=0;cnt<j;cnt++){
				tmp=a[tmp].next;
			}
			x=tmp;
			tmp=a[tmp].next;
			a[tmp].next=x;
		}
		tmp=pn;
		for(j=1;j<k&&tmp!=-1;j++){
			tmp=a[tmp].next;
		}
		if(tmp!=-1) a[p].next=tmp;
		else a[p].next=pn;
		p=pn;	
	}
	tmp=first;
	while(tmp!=-1){
		printf("%05d %d ",tmp,a[tmp].data);
		if(a[tmp].next!=-1)
			printf("%05d\n",a[tmp].next);
		else printf("-1\n");
		tmp=a[tmp].next;
	}
	return 0;
}