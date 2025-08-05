#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Hello, World! \n");
	printf("\n");
	printf("Hello,\nWorld! ");
	printf("\n");
	printf("\t Hello, World! \n");
	printf("Hello, \n \t World! ");
	return 0;
}