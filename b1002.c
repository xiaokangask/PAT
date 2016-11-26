#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int s=0;
	int i;
	while((ch=getchar())!='\n'){
		s+=ch-'0';
	}
	char *num[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(s>99){
		i=s/100;
		s=s%100;
		printf("%s ",num[i]);
		i=s/10;
		s=s%10;
		printf("%s ",num[i]);
		printf("%s",num[s]);
	}else if(s>9){
		i=s/10;
		s=s%10;
		printf("%s ",num[i]);
		printf("%s",num[s]);	
	}else{
		printf("%s",num[s]);
	}
	return 0;
} 