#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[105],b[105],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	int p=-1,i,tmp,flag,j;
	for(int i=0;i<n-1;i++)
		if(b[i+1]<b[i]){p=i+1;break;}
	for(i=p;i<n;i++)
		if(a[i]!=b[i]) break;
	if(i!=n){
		printf("Insertion Sort\n");
		tmp=b[p];
		for(i=p;i>0&&b[i-1]>tmp;i++)
			b[i]=b[i-1];
		b[i]=tmp;
	}
	else {
		printf("Merge Sort\n");
		p=(p/2)*2;
		for(;p>1;p/=2){
			flag=0;
			for(i=1;i<n;i++){
				for(j=1;j<p&&i<n;j++,i++)
					if(b[i]<b[i-1]&&flag==0) flag=1;
			}
			if(flag==0) break;
		}
		int len=p;
		int left,right,leftend,rightend;
		for(i=0;i+len<n;i+=2*len){
			p=i,left=i;right=i+len;leftend=right-1;rightend=((i+2*len-1)<(n-1)?(i+2*len-1):(n-1));
			while(left<=leftend&&right<=rightend){
				if(b[left]>b[right]) a[p++]=b[right++];
				else a[p++]=b[left++];
			}
			while(left<=leftend) a[p++]=b[left++];
			while(right<=rightend) a[p++]=b[right++];
		}
		for(i=0;i<p;i++)
			b[i]=a[i];
	}
	flag=0;
	for(i=0;i<n;i++){
		if(flag) printf(" ");
		flag=1;
		printf("%d",b[i]);
	}
	return 0;
}