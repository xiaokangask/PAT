#include <stdio.h>

char getmax(int a[])
{
	int max=0,maxi=0;
	for(int i=0;i<3;i++)
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
	if(maxi==0) return 'B';
	if(maxi==1) return 'C';
	return 'J';
}

int main(int argc, char const *argv[])
{
	char c1,c2,ch;
	int a[]={0,0,0},b[]={0,0,0},c[]={0,0,0},n;
	scanf("%d",&n);
	while(n--){
		ch=getchar();
		c1=getchar();
		ch=getchar();
		c2=getchar();
		if(c1==c2) c[1]++;
		else{
			if(c1=='C'&&c2=='J'){c[0]++;a[1]++;}
			if(c1=='C'&&c2=='B'){c[2]++;b[0]++;}
			if(c1=='J'&&c2=='B'){c[0]++;a[2]++;}
			if(c1=='J'&&c2=='C'){c[2]++;b[1]++;}
			if(c1=='B'&&c2=='C'){c[0]++;a[0]++;}
			if(c1=='B'&&c2=='J'){c[2]++;b[2]++;}
		}
	}
	c1=getmax(a);
	c2=getmax(b);
	printf("%d %d %d\n%d %d %d\n%c %c\n",c[0],c[1],c[2],c[2],c[1],c[0],c1,c2);
	return 0;
}