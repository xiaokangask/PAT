#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[55],b[55],c[55];
	int k;
	scanf("%d",&k);
	for(int i=1;i<=54;i++){
		scanf("%d",&a[i]);
		b[i]=i;
	}
	int flag=k%2?1:0;
	while(1){
		for(int i=1;i<=54;i++)
			c[a[i]]=b[i];
		k--;
		if(k==0) break;
		for(int i=1;i<=54;i++)
			b[a[i]]=c[i];
		k--;
		if(k==0) break;
	}
	int flag2=0;
	if(flag){
		for(int i=1;i<=54;i++){
			if(flag2) printf(" ");
			flag2=1;
			if(c[i]>=1&&c[i]<=13) printf("S%d",c[i]%14);
			else if(c[i]<=26) printf("H%d",(c[i]+1)%14);
			else if(c[i]<=39) printf("C%d",(c[i]+2)%14);
			else if(c[i]<=52) printf("D%d",(c[i]+3)%14);
			else printf("J%d",(c[i])%52);
		}
	}else{
		for(int i=1;i<=54;i++){
			if(flag2) printf(" ");
			flag2=1;
			if(b[i]>=1&&b[i]<=13) printf("S%d",b[i]%14);
			else if(b[i]<=26) printf("H%d",(b[i]+1)%14);
			else if(b[i]<=39) printf("C%d",(b[i]+2)%14);
			else if(b[i]<=52) printf("D%d",(b[i]+3)%14);
			else printf("J%d",(b[i])%52);
		}
	}
	return 0;
}

