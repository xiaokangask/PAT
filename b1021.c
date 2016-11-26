#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,cnt[10];
	char num[1001];
	scanf("%s",num);
	for(i=0;i<10;i++)
		cnt[i]=0;
	i=0;
	while(num[i]!='\0'){
		cnt[num[i]-'0']++;
		i++;
	}
	for(i=0;i<10;i++)
		if(cnt[i]!=0)
			printf("%d:%d\n",i,cnt[i]);
	return 0;
}
