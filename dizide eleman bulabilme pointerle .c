#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char yazi[100];
	char *ptr;
	int sayi;
	ptr=yazi;
	
	printf("lutfen yazinizi girin:");
	gets(ptr);
	
	printf("diziniz kac elemanli olsun:");
	scanf("%d",&sayi);
	
    return 0;	
}
