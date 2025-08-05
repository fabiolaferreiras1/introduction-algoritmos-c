#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, f;
	printf("Digite uma temperatura em Celsius: \n");
	scanf("%f", &c);
	f = (c * 1.8) + 32;
	printf("%.1f°C convertido para Fahrenheit é: %.1f°F", c, f);
	return 0;
}