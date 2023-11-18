#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostrar_menu() {
	printf("MENU DE OPERAÇÃO\n");
	printf("[a] Mostrar saldo\n");
	printf("[b] Efetuar depósito\n");
	printf("[c] Efetuar saque\n");
	printf("[d] Encerrar operação\n");
	printf("SUA OPÇÃO: ");
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char opcao_selecionada;
	int valor, saldo=0;
	bool encerrar_programa = false;
	
	while(encerrar_programa == false) {
		mostrar_menu();
		scanf("%s", &opcao_selecionada);
		system("cls");
		if(opcao_selecionada == 'a') {
			printf("Seu saldo é: R$%d\n\n", saldo);
		} else if(opcao_selecionada == 'b') {
			printf("Digite o valor a depositar: R$");
			scanf("%d", &valor);			
			saldo += valor;
			system("cls");
			printf("Depósito efetuado com sucesso!\n\n");
		} else if(opcao_selecionada == 'c') {
			printf("Digite o valor a retirar: R$");
			scanf("%d", &valor);
			if(valor > saldo) {
				printf("Saque não permitido, saldo insuficiente.\n");
				system("pause");				
			} else {
				saldo -= valor;
				printf("Saque liberado. Aguarde a contagem das notas.\n");
				system("pause");
				system("cls");
				printf("Saque efetuado com sucesso!\n\n");
			}
		} else if(opcao_selecionada == 'd') {
			printf("Obrigado por usar o banco 24h.");
			encerrar_programa = true;
		} else {
			printf("Opção inválida, tente novamente.\n\n");
		}
	}
}