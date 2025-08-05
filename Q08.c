#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float cd, vr, vf;
	printf("Qual a cotação atual do dólar? \n");
	scanf("%f", &cd);
	printf("Qual o valor em real a ser convertido? \n");
	scanf("%f", &vr);
	vf = cd * vr;
	printf("R$%.2f convertido para dólar corresponde a $%.2f.", vr, vf);
	return 0;
}