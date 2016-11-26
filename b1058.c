#include <stdio.h>
#include <string.h>

int stu[1000],a[100][5],ascore[100],wrong[100];

int main(int argc, char const *argv[])
{
	int n,m,max=0;
	memset(stu,0,sizeof(stu));
	memset(a,0,sizeof(a));
	memset(ascore,0,sizeof(ascore));
	memset(wrong,0,sizeof(wrong));
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		int nc,ncc;
		scanf("%d%d%d",&ascore[i],&nc,&ncc);
		char ch;
		for(int j=0;j<ncc;j++){
			scanf(" %c",&ch);
			a[i][ch-'a']++;
		}
	}
	for(int i=0;i<n;i++){
		char ch;
		int ns;
		for(int k=0;k<m;k++){
			int b[5],nn;
			memset(b,0,sizeof(b));
			while((ch=getchar())!='(');
			scanf("%d",&ns);
			for(int j=0;j<ns;j++){
				scanf(" %c",&ch);
				b[ch-'a']++;
			}
			for(nn=0;nn<5;nn++) 
				if(a[k][nn]!=b[nn]) break;
			if(nn==5) stu[i]+=ascore[k];
			else {
				wrong[k]++;
				if(wrong[k]>max) max=wrong[k];
			}
		}
	}
	for(int i=0;i<n;i++) printf("%d\n",stu[i]);
	if(max==0) printf("Too simple\n");
	else {
		printf("%d",max);
		for(int i=0;i<m;i++){
			if(wrong[i]==max) printf(" %d",i+1);
		}
		printf("\n");
	}
	return 0;
}
