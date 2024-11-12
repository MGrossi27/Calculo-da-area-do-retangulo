#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float comprimento, altura, area;
	printf("Digite o comprimento do retângulo:\n");
	scanf("%f", &comprimento);
	printf("Agora digite a altura do retângulo:\n");
	scanf("%f", &altura);
	area = comprimento * altura;
	printf("A área do retângulo é %.2f", area);
	return 0;
}
