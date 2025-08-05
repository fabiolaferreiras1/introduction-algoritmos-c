#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, d;
	printf("Qual a sua idade? \n");
	scanf("%d", &i);
	d =  i * 365;
	printf("Você já viveu aproximadamente %d dias.", d);
	return 0;
}