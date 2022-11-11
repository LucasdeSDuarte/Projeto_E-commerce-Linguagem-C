#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 200



int op;
//void cadastroUsuarios();
//void menuCadastrosRelatorios();

//Menu para telas cadastros
void menuRelatorios(){
	
	//repetição principal de todo o menu
	do{
		// operação que usuario ira escolher entre 1 para Cadastros de Usuarios 2 para cadastro clientes 3 cadastro produtos 4 sair.
		system("cls");
		printf("###################################################");
		printf("\n Bem Vindo!\n Tela de Cadastros de Usuarios...\n");
		printf("###################################################\n\n");
		printf("\n DIGITE \n [1] Relatório de Usuarios.");
		printf("\n [2] Relatorio de Clientes.");
		printf("\n [3] Relatorio de Produtos.");
		printf("\n [4] Menu Principal.");
		printf("\n [5] Sair.");
		printf("\n E Precione Enter para Continuar. ");
		printf("  \n ");

		// faz verificaçãoo caso o usuario digite letras ou caracteres ou tudo que seja diferente de 1  e 2
		while (scanf("%d", &op) != 1 && scanf("%d", &op) != 2){ //enquanto não ler 1 inteiro
	    	static char temp[256];
    		fgets(temp, sizeof(temp), stdin); //limpa tudo o que ficou na entrada lendo como string
    		system("cls");
    		printf("###########################################");
			printf("\a\n !OPCAO INVALIDA\n TENTE NOVAMENTE!");
    		printf("\n###########################################\n\n");
    		printf("\n DIGITE \n [1] Relatório de Usuarios.");
			printf("\n [2] Relatorio de Clientes.");
			printf("\n [4] Relatorio de Produtos.");
			printf("\n [3] Menu Principal.");
			printf("\n [5] Sair.");
			printf("\n E Precione Enter para Continuar. ");
			printf("  \n ");
	     
    }	//Menu de escolha entre 1 2 ou da erro caso digite algo diferrente
		switch(op){
			case 1:
				printf("\n");
				system("cls");
				printf("#######################################");
				printf("\n Bem Vindo!\n Tela de Relatorio de Usuarios...\n");
				printf("#######################################\n\n");
				//CadastroUsuarios();
				break;
				
			case 2:
				printf("\n");
				system("cls");
				printf("######################################");
				printf("\n Bem Vindo!\n Tela de Relatorio de Clientes...\n");
				printf("######################################\n\n");
				break;
				
			case 3:
				printf("\n");
				system("cls");
				printf("######################################");
				printf("\n Bem Vindo!\n Tela de Relatorio de Produtos...\n");
				printf("######################################\n\n");
				break;
				
			case 4:
				printf("\n");
				system("cls");
				printf("######################################");
				printf("\n Menu Inicial...\n");
				printf("######################################\n\n");
				menuCadastrosRelatorios();
				break;			
				
			case 5:
				system("cls");
				printf("#####################################");
				printf("\a\n Fim do programa.\n");
				printf("#####################################\n\n");
				exit(0);  // Finaliza o Programa caso entre aqui no case 3
				break;	
				
			// Caso o usuario digite outro numero que nãoo seja 1, 2 ou 3  aparece esse erro	
			default:
				system("cls");
				printf("####################################");
				printf("\a\n !OPCAO INVALIDA\n TENTE NOVAMENTE!");
				printf("\n#################################\n\n");
				
				getchar();
		}
	}while(op != 1 && op != 2);	
}
