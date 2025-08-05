#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, c;
	printf("Digite um número: \n");
	scanf("%f", &n);
	c = pow(n, 3);
	printf("O cubo de %.1f é: %.1f", n, c);
	return 0;
}