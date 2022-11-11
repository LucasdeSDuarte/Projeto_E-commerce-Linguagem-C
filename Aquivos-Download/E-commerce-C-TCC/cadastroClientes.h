#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define SIZE 200

//Fução de cadastro de Clientes (Lucas que fez)
char cliente[SIZE][50];
char email[SIZE][50];
char cpf[SIZE][50];
char telefone[SIZE][50];
void menuCadastros();

void cadastroClientes(){
	FILE *fptr;
	fptr = fopen("cadastro_clientes.txt", "a+");
	static int linha;
			
			printf(" Digite o Nome ou Razão Social: ");
			fflush(stdin);
			gets(cliente[linha]);
			
			printf(" Informe o CPF ou CNPJ: ");
			gets(cpf[linha]);
			
			printf(" Informe o E-mail: ");
			gets(email[linha]);
			
			printf(" Informe um numero para contato: ");
			scanf("%s",&telefone[linha]);
			
			fprintf(fptr, "\nNome: %s\nCPF/CNPJ: %s\n%s\n%s\n\n", cliente, cpf, email, telefone);
			printf("\n");
			printf("\n Dados Gravados com sucesso!\n\n");
			linha++;
			fclose (fptr);
			printf("\n");
			for (;;) menuCadastros();	
	}
//------------------------------------------------------------------

