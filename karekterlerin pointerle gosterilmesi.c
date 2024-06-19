#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main(){
	char can[100];
	char *p;
	int i,uzunluk;
	p=can;
	
	printf("bir yazi giriniz:");
	gets(can);
	
	uzunluk=strlen(can);
	
	printf("girilen yazi:");
	for(i=0;i<uzunluk;i++){
		printf("%c",*(p+i));
	}
	
	return 0;
}
