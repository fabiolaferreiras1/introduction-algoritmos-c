#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Olá, sou Fabíola! \n");
	printf("\n");
	printf("Tenho 18 anos,\nNasci no dia 22 de setembro de 2006. \n");
	printf("\n");
	printf("\t Estudo na UFERSA! \n");
	printf("Curso BTI. \n \t Adoro tudo relacionado a tecnologia!");
	return 0;
}