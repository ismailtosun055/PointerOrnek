#include<stdio.h>
#include<stdlib.h>

void yerlerinidegistir(int *a1,int *b1){
	int gecici=0;
	gecici=*a1;
	*a1=*b1;
	*b1=gecici;
}
int main(){
	int c=10,d=20;
	printf("degistirmeden once degeri:%d  %d\n",c,d);
	yerlerinidegistir(&c,&d);
	printf("yerleri degistirdikten sonra degeri:%d  %d\n",c,d);
	return 0;
}
