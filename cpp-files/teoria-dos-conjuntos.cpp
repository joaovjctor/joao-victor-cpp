#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//--------------- UNIR -----------------------------
int Unir(int a[5], int b[5], int c[10]) {
    int uniao[10], i, j, n = 0;
    for(i = 0; i < 5; i++){
        c[i] = a[i];
    }
    for(j = 0; j < 5; j++){
        c[j+5] = b[j];
    }
    /* Remove elementos com valor duplicado */
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < n; j++) {
            if(c[i] == uniao[j] )
                break;
        } 
        if(j == n) {
            uniao[n] = c[i];
            n++;
        }
    }
    printf("\nA união de conjuntos corresponde a junção dos elementos dos conjuntos dados, ou seja, é o conjunto formado pelos elementos de um conjunto mais os elementos dos outros conjuntos.\n\n");
    printf("União de A e B:\n\n");
    printf("{ ");
    for(int x = 0; x < n; x++){
    	if (x==n-1)
          printf("%d ", uniao[x]);
        else
        printf("%d, ", uniao[x]);
    }
    printf("}");
}
//---------------- INTERSECCIONAR --------------------------
int Interseccionar(int a[5], int b[5], int c[10]) {
	int intersec[10], indice = 0, i, j;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			if(a[i] == b[j]) {
				intersec[indice] = a[i];
				indice++;
				break;
			}
		}
	}
    
    printf("\nA intersecção de conjuntos corresponde aos elementos que se repetem nos conjuntos dados.\n");
    printf("\nIntersecção entre A e B\n");
    printf("{ ");
    for(int i = 0; i < indice; i++){
        if(a[i] >= 0) { // os valores do vetor a que forem maior que -1 são exibidos na tela
    	if (i == indice-1)
          printf("%d ", intersec[i]);
        else       	
            printf("%d, ", intersec[i]);
        }
    }
    printf("}"); 
}

//---------------- DIFERENCIAR -----------------------------
// DO CONJUNTO A...
int DiferenciarA(int a[5], int b[5]){
    int aux, indice = 0;
    while (indice != 5) { // enquanto indice for diferente do tamanho do vetor b
        aux = b[indice]; // auxiliar recebe o valor do vetor b em ordem
        for (int i = 0; i < 5; i++) {
            if(a[i] == aux) { // se o valor x do vetor A for igual o valor x do vetor B em ordem...
                a[i] = -1; // esse valor de a vira -1
                break;
            }
        }
        indice++;
    }
    printf("\nA diferença de conjuntos é representada pelos elementos de um conjunto que não aparecem no outro conjunto.\n");
    printf("\nDIFERENÇA DO CONJUNTO A - B\n");
    printf("{ ");
    for(int i = 0; i < 5; i++) {
        if(a[i] >= 0) { // os valores do vetor a que forem maior que -1 são exibidos na tela
        	if (i==5-1)
            printf("%d ", a[i]);
        	else
            printf("%d, ", a[i]);
        }
    }
    printf("}"); 
}
// DO CONJUNTO B...
int DiferenciarB(int a[5], int b[5]){
    int aux, indice = 0;
    while (indice != 5) { // enquanto indice for diferente do tamanho do vetor b
        aux = a[indice]; // auxiliar recebe o valor do vetor b em ordem
        for (int i = 0; i < 5; i++) {
            if(b[i] == aux) { // se a o valor x do vetor a for igual o valor x do vetor b em ordem...
                b[i] = -1; // esse valor de a vira -1
                break;
            }
        }
        indice++;
    }
    printf("\nA diferença de conjuntos é representada pelos elementos de um conjunto que não aparecem no outro conjunto.\n");
    printf("\nDIFERENÇA DO CONJUNTO B - A\n");
    printf("{ ");
    for(int i = 0; i < 5; i++) {
        if(b[i] >= 0) { // os valores do vetor a que forem maior que -1 são exibidos na tela
        	if (i==5-1)
            printf("%d ", b[i]);
        	else
            printf("%d, ", b[i]);
        }
    }
    printf("}"); 
}
//---------------- CONJUNTOS -----------------------------
    int Conjuntos(int a[5], int b[5]) {
     printf("CONJUNTO A\n");
	 printf("{ ");
	 for(int i = 0; i < 5; i++) {
	    if (i==5-1)
	    printf("%d ", a[i]);
	    else
	    printf("%d, ", a[i]);
	 }
	 printf("}");
	 
	 printf("\n\nCONJUNTO B\n");
	 printf("{ ");
	 for(int i = 0; i < 5; i++) {
	    if (i==5-1)
	    printf("%d ", b[i]);
	    else
	    printf("%d, ", b[i]);
	 }
	 printf("}\n");
	
	}
//--------------- MENU --------------------------------
  int menu(){
     int menuFim(void);
     int vetorA[5];
     int vetorB[5];
     int vetorC[10], resposta, op1, checkNum;
     
	 printf("Digite os 5 números inteiros do conjunto A (0 - 100)\n\n");
     for(int i = 0; i < 5; i++) {
    	printf("Número %d do conjunto A: ", i+1);
    	scanf("%d", &vetorA[i]);
     	if(vetorA[i] >= 0 and vetorA[i] <= 100){
			vetorA[i] = vetorA[i];
		} 
		else{
			printf("\n>>> Digite um número entre 0 e 100 <<<\n\n");
			i = i - 1;
		}
	 }
	 system("cls");
	 
	 printf("Agora digite os 5 números inteiros do conjunto B (0 - 100)\n\n");
     for(int i = 0; i < 5; i++) {
    	printf("Número %d do conjunto B: ", i+1);
    	scanf("%d", &vetorB[i]);
     	if(vetorB[i] >= 0 and vetorB[i] <= 100){
			vetorB[i] = vetorB[i];
		} 
		else{
			printf("\n>>> Digite um número entre 0 e 100 <<<\n\n");
			i = i - 1;
		}
	 }
	 system("cls");
	 
	 Conjuntos(vetorA, vetorB);
	 
     printf("\n--------------------------\n");
     printf("SELECIONE UMA FUNÇÃO PARA OS CONJUNTO CRIADOS\n");
     printf("1. União\n");
     printf("2. Intersecção\n");
     printf("3. Diferença\n");
     printf("4. Sair\n");
     printf("--------------------------");
     printf("\n\nSUA RESPOSTA: ");
     scanf("%d", &resposta);
    
     system("cls");
    
     switch (resposta)
     {
      case 1:
        Conjuntos(vetorA, vetorB);
        Unir(vetorA, vetorB, vetorC);
        menuFim();
        break;
      case 2:
        Conjuntos(vetorA, vetorB);
        Interseccionar(vetorA, vetorB, vetorC);
        menuFim();
        break;
      case 3:
        printf("ESCOLHA A OPÇÃO DESEJADA\n");
        printf("1. A - B\n");
        printf("2. B - A\n");
        printf("-------------------------");
        printf("\nSUA OPÇÃO: ");
        scanf("%d", &op1);
        system("cls");
        if(op1 == 1) {
            Conjuntos(vetorA, vetorB);
            DiferenciarA(vetorA, vetorB);
            menuFim();
        } else if(op1 == 2) {
            Conjuntos(vetorA, vetorB);
            DiferenciarB(vetorA, vetorB);
            menuFim();
        } else {
            printf("Opção inválida. Digite 1 para 'A - B' ou 2 para 'B - A'.\n\n");
            system("pause");
            system("cls");
            Conjuntos(vetorA, vetorB);
            menu();
        }
        
        break;
      case 4:
        printf("Obrigado por usar o nosso programa!\n\n");
        printf("Feito por: João Victor Martins, Daniel Mineiro e Davi Serafim\n");
        printf("Estudantes na UDF - CIÊNCIA DA COMPUTAÇÃO\n");
        system("pause");
        return 0;
        break;
     
     default:
      printf("Opção inválida. Digite um número entre 1 e 4\n\n");
      system("pause");
      system("cls");
      Conjuntos(vetorA, vetorB);
      menu();
        break;
     }
    
    }
//---------------- MENU FINAL -----------------
  int menuFim() {
    int op2; 
    int vetorA[5];
    int vetorB[5];
    printf("\n\nDeseja continuar?\n");
    printf("1. Sim, quero aproveitar mais do programa.\n");
    printf("2. Não, desejo sair.\n\n");
    printf("SUA OPÇÃO: ");
    scanf("%d", &op2);
    if(op2 == 1){
        system("cls");
        Conjuntos(vetorA, vetorB);
        menu();
    }
    else if(op2 == 2){
        system("cls");
        printf("Obrigado por usar o nosso programa!\n\n");
        printf("Feito por: João Victor Martins, Daniel Mineiro e Davi Serafim\n");
        printf("Estudantes na UDF - CIÊNCIA DA COMPUTAÇÃO\n");
        system("pause");
        return 0;
    }
    else {
      printf("Opção inválida. Digite 1 para continuar usando o programa ou 2 para sair.\n\n");
      system("pause");
      system("cls");
      menuFim();
    }
     
    
  }
int main() {
 int vetorA[5];
 int vetorB[5];
 int vetorC[10], resposta, op1;
 
 setlocale(LC_ALL,"Portuguese");
 
//----------------- MENU ---------------------------
  menu();
}