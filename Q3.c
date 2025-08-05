#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, a, s;
	printf("Digite um número inteiro: \n");
	scanf("%d", &n);
	a = n - 1;
	s = n + 1;
	printf("O antecessor de %d é: %d \n", n, a);
	printf("O sucessor de %d é: %d \n", n, s);
	return 0;
}