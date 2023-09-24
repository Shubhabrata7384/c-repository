#include<stdio.h>
int main(){
	int a=5;
	int b=10;
	int c=15;
	int d=20;
	int e=30;
	printf("a=%d,%p\n",a,&a);
	printf("b=%d,%p\n",b,&b);
	printf("c=%d,%p\n",c,&c);
	printf("d=%d,%p\n",d,&d);
	printf("e=%d,&p\n",e,&e);
	printf("enter the new value of e=");
	scanf("%d",&e);
	printf("\n new value of e=%d",e);
	
}
