#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bastir(char yazi1[]){
	printf("dizinizin yazisi:%s\n",yazi1);
}

int main(){
	char yazi[100];
	char *ptr;
	int uzunluk;
	ptr=yazi;
	
	printf("lutfen yazi yaziniz:");
	gets(yazi);
	
	bastir(yazi);
	printf("dizinizin kopyasi:%s",ptr);
	
	return 0;
}
