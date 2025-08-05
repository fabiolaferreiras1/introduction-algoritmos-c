#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, l, a, v;
	printf("Qual o comprimento da caixa? \n");
	scanf("%f", &c);
	printf("Qual a largura da caixa? \n");
	scanf("%f", &l);
	printf("Qual a altura da caixa? \n");
	scanf("%f", &a);
	v = c * l * a;
	printf("O volume da caixa é: %.2f", v);
	return 0;
}