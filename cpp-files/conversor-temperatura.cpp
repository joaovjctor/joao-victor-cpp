#include<stdio.h>

int main() {	
	float temperatura;
	int resposta;
	
	printf("-------- CONVERSOR DE TEMPERATURA ---------\n");
	printf("|  1) Celsius para Farenheit              |\n");
	printf("|  2) Farenheit para Celsius              |\n");
	printf("|  3) Celsius para Kelvin                 |\n");	
	printf("|  4) Kelvin para Celsius                 |\n");
	printf("|  5) Kelvin para Farenheit               |\n");
	printf("|  6) Farenheit para Kelvin               |\n");
	printf("|  7) Sair                                |\n");
	printf("-------------------------------------------\n");
	
	printf("Digite sua opcao: ");
	scanf("%i", &resposta);
	
	switch (resposta) {
		
		case 1: {
		printf("\n Digite a temperatura desejada em Celsius: ");
		scanf("%f", &temperatura);
		printf("\n %.2f em Celsius equivale a %.2f Farenheit.", temperatura,(temperatura * 1.8) + 32);
			break;
		}
		case 2: {
		printf("\n Digite a temperatura desejada em Farenheit: ");
		scanf("%f", &temperatura);
		printf("\n %.2f em Farenheit equivale a %.2f Celsius.", temperatura,(temperatura - 32) * 0.5);
			break;
		}
		case 3: {
		printf("\n Digite a temperatura desejada em Celsius: ");
		scanf("%f", &temperatura);
		printf("\n %.2f em Celsius equivale a %.2f Kelvin.", temperatura,temperatura + 273.15);
			break;
		}
		case 4: {
		printf("\n Digite a temperatura desejada em Kelvin: ");
		scanf("%f", &temperatura);
		printf("\n %.2f em Kelvin equivale a %.2f Celsius.", temperatura,temperatura - 273.15);
			break;
		}
		case 5: {
		printf("\n Digite a temperatura desejada em Kelvin: ");
		scanf("%f", &temperatura);
		printf("\n %.2f em Kelvin equivale a %.2f Farenheit.", temperatura,(temperatura - 273.15) * 1.8 + 32);
			break;
		}
		case 6: {
		printf("\n Digite a temperatura desejada em Farenheit: ");
		scanf("%f", &temperatura);
		printf("\n %.2f em Farenheit equivale a %.2f Kelvin.",temperatura,(temperatura - 32) * 0.5 + 273.15);
			break;
		}
		case 7: {
			printf("\n Obrigado por usar o nosso software! ");
			printf("\n Digite 'enter' para sair.");
			return(0);
		}
		default: {
			printf("Opcao invalida.");
		}
	}
}