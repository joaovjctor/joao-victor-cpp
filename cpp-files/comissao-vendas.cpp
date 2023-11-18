#include <stdio.h>
int main() {
int i, qtdCorretores;
	char nome[1000][30];
	float vl_venda[100], pct_comissao[100];
	printf("Quantos corretores na empresa? ");
	scanf("%i", &qtdCorretores);
	vl_venda[0] = 0;
	for (i=1; i<=qtdCorretores; i++){
		printf("Informe o nome do %i. corretor: ", i);
		scanf("%s", &nome[i]);
		printf("Quanto %s vendeu esse mes? ", nome[i]);
		scanf("%f", &vl_venda[i]);
		vl_venda[0] = vl_venda[0] + vl_venda[i];
		
		if (vl_venda[i] < 30000){
			pct_comissao[i] = 0.07*vl_venda[i];
		}
		else if(vl_venda[i] < 50000){
			pct_comissao[i] = 0.095*vl_venda[i];
		}
		else{
			pct_comissao[i] = 0.12*vl_venda[i];
		}
	}
	printf("\n---------- RELATORIO ----------");
	for(int i=1; i<=qtdCorretores; i++){
		printf("\n Corretor %s: ", nome[i]);
		printf("\n Vendas: R$ %.2f ", vl_venda[i]);
		printf("\n Comissao: R$ %.2f", pct_comissao[i]);
		printf("\n ========");
	}
	printf("\n Total das %i vendas: R$ %.2f", qtdCorretores,vl_venda[0]);
		return 0;
}