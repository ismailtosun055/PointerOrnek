#include<stdio.h>

int main(){
	int can=10;
	int *p;
	
	p=&can;
	
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",can);
	printf("%d",&can);
	
	return 0;
}
