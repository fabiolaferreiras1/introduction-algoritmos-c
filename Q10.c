#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float p, a, imc;
	printf("Qual o seu peso?\n");
	scanf("%f", &p);
	printf("Qual a sua altura?\n");
	scanf("%f", &a);
	imc = p / (a * a);
	printf("O seu IMC é: %.2f", imc);
	return 0;
}