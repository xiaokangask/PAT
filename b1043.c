#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	const char b[]={'P','A','T','e','s','t'};
	int a[6];
	char ch;
	memset(a,0,sizeof(a));
	while((ch=getchar())!='\n'&&ch!=EOF){
		switch(ch){
			case 'P':a[0]++;break;
			case 'A':a[1]++;break;
			case 'T':a[2]++;break;
			case 'e':a[3]++;break;
			case 's':a[4]++;break;
			case 't':a[5]++;break;
		}
	}
	for(;;){
		int sum=0;
		for(int i=0;i<6;i++){
			if(a[i]){putchar(b[i]);a[i]--;sum+=a[i];}
		}
		if(!sum) break;
	}
	return 0;
}