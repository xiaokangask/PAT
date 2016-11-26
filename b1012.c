#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,x,s1=0,s2=0,i2=1,cnt2=0,cnt3=0,s4=0,cnt4=0,max5=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		switch(x%5){
			case 0:if(x%2==0) s1+=x; break;
			case 1:s2+=i2*x; i2*=-1;cnt2++; break;
			case 2:cnt3++;break;
			case 3:s4+=x;cnt4++;break;
			case 4:if(x>max5) max5=x;break;
		}
	}
	if(s1) printf("%d ",s1);
	else printf("N ");
	if(cnt2) printf("%d ",s2);
	else printf("N ");
	if(cnt3) printf("%d ",cnt3);
	else printf("N ");
	if(cnt4) printf("%.1f ",(double)s4/cnt4);
	else printf("N ");
	if(max5) printf("%d",max5);
	else printf("N");
	return 0;
}