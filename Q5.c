#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, m, d, t;
	printf("Digite um número: \n");
	scanf("%f", &n);
	printf("Digite um segundo número: \n");
	scanf("%f", &m);
	d = n * 2;
	t = m * 3;
	printf("O dobro de %.1f é: %.1f \n", n, d);
	printf("O triplo de %.1f é: %.1f \n", m, t);
	return 0;
}