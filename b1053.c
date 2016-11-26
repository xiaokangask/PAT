#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,n1=0,n2=0,D;
	double e;
	scanf("%d%lf%d",&n,&e,&D);
	for(int i=0;i<n;i++){
		int day,nd=0;
		double ele;
		scanf("%d",&day);
		for(int j=0;j<day;j++){
			scanf("%lf",&ele);
			if(ele<e) nd++;
		}
		if(nd>day/2){
			n1++;
			//printf("%d\n",i);
			if(day>D) {n2++;n1--;}
		}
	}
	printf("%.1f%% %.1f%%\n",(n1*100.0)/n,(n2*100.0)/n);
	return 0;
}