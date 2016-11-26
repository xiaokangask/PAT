#include <stdio.h>

int main(int argc, char const *argv[])
{
	int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char m[]={'1','0','X','9','8','7','6','5','4','3','2'};
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=0;i<n;i++){
		char id[20];
		int s=0,flag=0;
		scanf("%s",id);
		for(int i=0;i<17;i++){
			if(id[i]>='0'&&id[i]<='9')
				s+=(id[i]-'0')*weight[i];
			else {
				flag=1;
				break;
			}
		}
		if(!flag) 
			if(id[17]!=m[s%11])
				flag=1;
		if(flag) {
			printf("%s\n",id);
			cnt++;
		}
	}
	if(!cnt) printf("All passed\n"); 
	return 0;
}