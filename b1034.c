#include <stdio.h>
#include <stdlib.h>

void change(long *p1,long *p2,long *p3)
{
	 if((*p2)!=0){
		*p3=(*p1)/(*p2);
		if((*p3)!=0){
			*p1=((*p1)>=((*p3)*(*p2)))?((*p1)-((*p3)*(*p2))):(((*p3)*(*p2))-(*p1));
		}
		long a=*p1,b=*p2;
		if(a<0) a*=(-1);
		long c=a%b;
		while(c!=0){
			a=b;
			b=c;
			c=a%b;
		}
		*p1=(*p1)/b;
		*p2=(*p2)/b;
	}
}

void print(long a,long b,long k)
{
	if(k==0&&a==0) printf("0");
	else if(k==0&&a!=0){
		if(a<0) printf("(%ld/%ld)",a,b);
		else printf("%ld/%ld",a,b);
	}else if(k!=0&&a==0){
		if(k<0) printf("(%ld)",k);
		else printf("%ld",k);
	}else {
		if(k<0) printf("(%ld %ld/%ld)",k,a,b);
		else printf("%ld %ld/%ld",k,a,b);
	}
}

int main(int argc, char const *argv[])
{
	long a1,b1,a2,b2,a3,b3,k3,k4,k5,a4,b4,a5,b5;
	scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
	a4=a1;
	b4=b1;
	a5=a2;
	b5=b2;
	change(&a4,&b4,&k4);
	change(&a5,&b5,&k5);
	print(a4,b4,k4);
	printf(" + ");
	print(a5,b5,k5);
	printf(" = ");
	b3=b1*b2;
	a3=a1*b2+a2*b1;
	change(&a3,&b3,&k3);
	print(a3,b3,k3);
	printf("\n");
	print(a4,b4,k4);
	printf(" - ");
	print(a5,b5,k5);
	printf(" = ");
	b3=b1*b2;
	a3=a1*b2-a2*b1;
	change(&a3,&b3,&k3);
	print(a3,b3,k3);
	printf("\n");
	print(a4,b4,k4);
	printf(" * ");
	print(a5,b5,k5);
	printf(" = ");
	b3=b1*b2;
	a3=a1*a2;
	change(&a3,&b3,&k3);
	print(a3,b3,k3);
	printf("\n");
	print(a4,b4,k4);
	printf(" / ");
	print(a5,b5,k5);
	printf(" = ");
	if(a2==0){
		printf("Inf");
	}
	else{
		if(a2<0) {
			b3=b1*(-1)*a2;
			a3=b2*(-1)*a1;
		}else{
			b3=b1*a2;
			a3=b2*a1;
		}
		change(&a3,&b3,&k3);
		print(a3,b3,k3);
	}
	printf("\n");	
	return 0;
}
