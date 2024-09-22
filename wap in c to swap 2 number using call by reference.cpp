#include<stdio.h>
void _swap(int *a,int *b);
int main (){
	int x=5,y=6;
	_swap(&x,&y);
	printf("x= %d & y= %d",x,y);
	return 0;
}
//call by reference
void _swap(int *a,int *b){
	int t=*a;
	*a=*b;
    *b=t;
	
}
