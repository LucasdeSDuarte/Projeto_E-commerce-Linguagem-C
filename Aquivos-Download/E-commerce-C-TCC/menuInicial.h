#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 200


int op;

// Menu Inicial do projeto
// Função Menuinicial 
// Menu Inicial do projeto
// Função Menuinicial 
void menuInicial(){
	
	//repetição principal de todo o menu
	do{
		// operação que usuario ira escolher entre 1 para login e 2 para cadastro
		printf("\n DIGITE \n [1] Login. \n [2] Sair ");
		printf("\n E Precione Enter para Continuar.");
		printf("  \n\n  ");

		// faz verificaçãoo caso o usuario digite letras ou caracteres ou tudo que seja diferente de 1  e 2
		while (scanf("%d", &op) != 1 && scanf("%d", &op) != 2){ //enquanto nÃ£o ler 1 inteiro
	    	static char temp[256];
    		fgets(temp, sizeof(temp), stdin); //limpa tudo o que ficou na entrada lendo como string
    		
			// Inicio do  Menu Inicial
			system("cls");
    		printf("###########################################");
			printf("\a\n !OPCAO INVALIDA\n TENTE NOVAMENTE!");
    		printf("\n###########################################\n\n");
    		printf("\n DIGITE \n [1] Login. \n [2] Sair ");
		    printf("\n E Precione Enter para Continuar. \n\n  ");
	     
    }	//Menu de escolha entre 1 2 ou da erro caso digite algo diferrente
		switch(op){
			case 1:
				printf("\n");
				system("cls");
				printf("#####################################");
				printf("\n Bem Vindo!\n Tela de Login...\n");
				printf("#####################################\n\n");
				break;
				
			case 2:
				system("cls");
				printf("#####################################");
				printf("\a\n Fim do programa.\n");
				printf("#####################################\n\n");
				exit(0);  // Finaliza o Programa caso entre aqui no case 3
				break;
					
			// Caso o usuario digite outro numero que nãoo seja 1, 2 ou 3  aparece esse erro	
			default:
				system("cls");
				printf("###########################################");
				printf("\a\n !OPCAO INVALIDA\n TENTE NOVAMENTE!");
				printf("\n###########################################\n\n");
				
				getchar();
		}
	}while(op != 1 && op != 2);	
}
