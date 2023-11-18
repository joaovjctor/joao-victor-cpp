#include<stdio.h>
#include<windows.h>

int main() {
	printf("RELOGIO: \n");
	for(int ano=2022; ano<=2050; ano++)
		for(int mes=1; mes<=12; mes++)
			for(int dia=1; dia<=31; dia++)
				for(int h=0; h<24; h++)
					for(int m=0; h<60; m++)
						for(int s=0; s<60; s++) {
							printf("%d/%d/%d - %d:%d:%d", dia, mes, ano, h, m, s);
							_sleep(1000);
							system("cls");
						}	
}