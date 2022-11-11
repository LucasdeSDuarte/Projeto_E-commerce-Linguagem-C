#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 200


int op;
void menuCadastros();
void menuRelatorios();
void menuConsultas();

//Menu para telas cadastro e Relatórios
void menuCadastrosRelatorios(){
	
	//repetição principal de todo o menu
	do{
		// operação que usuario ira escolher entre 1 para Cadastros e 2 para RElatórios e [3] para Sair.
	//	printf("\n DIGITE \n [1] Cadastros  \n [2] Relatórios  \n [3] Sair  ");
		//-----
		system("cls");
		printf("###################################################");
		printf("\n Bem Vindo!\n");
		printf("###################################################\n\n");
		printf("\n DIGITE \n [1] Cadastros.");
		printf("\n [2] Relatorios.");
		printf("\n [3] Consultas.");
		printf("\n [4] Sair.");
		printf("\n E Precione Enter para Continuar.");
		printf("  \n ");
		//-----
		//printf("\n E Precione Enter para Continuar.");
	//	printf("\n\n ");

		// faz verificaçãoo caso o usuario digite letras ou caracteres ou tudo que seja diferente de 1  e 2
		while (scanf("%d", &op) != 1 && scanf("%d", &op) != 2){ //enquanto nÃ£o ler 1 inteiro
	    	static char temp[256];
    		fgets(temp, sizeof(temp), stdin); //limpa tudo o que ficou na entrada lendo como string
    		system("cls");
    		printf("###########################################");
			printf("\a\n !OPCAO INVALIDA\n TENTE NOVAMENTE!");
    		printf("\n###########################################\n\n");
    		printf("\n DIGITE \n [1] Cadastros.");
			printf("\n [2] Relatorios.");
			printf("\n [3] Consultas.");
			printf("\n [4] Sair.");
			printf("\n E Precione Enter para Continuar. ");
			printf("  \n  ");
	     
    }	//Menu de escolha entre 1 2 ou da erro caso digite algo diferrente
		switch(op){
			case 1:
				printf("\n");
				system("cls");
				printf("#####################################");
				printf("\n Bem Vindo!\n Tela de Cadastros...\n");
				printf("#####################################\n\n");
				menuCadastros();
				break;
				
			case 2:
				printf("\n");
				system("cls");
				printf("#####################################");
				printf("\n Bem Vindo!\n Tela de Relatorios...\n");
				printf("#####################################\n\n");
				menuRelatorios();
				break;
			
			case 3:
				printf("\n");
				system("cls");
				printf("#####################################");
				printf("\n Bem Vindo!\n Tela de Consulta...\n");
				printf("#####################################\n\n");
				menuConsultas();
				break;	
				
			case 4:
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
