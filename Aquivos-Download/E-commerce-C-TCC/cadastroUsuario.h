#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define SIZE 200

//Fução de cadastro de usuarios (Lucas que fez)
char nome[SIZE][50];
char sobrenome[SIZE][50];
char usuario[SIZE][50];
char senhaa[SIZE][50];
//char cpf[SIZE][50];
//char telefone[SIZE][50];
void menuCadastros();

void cadastroUsuarios(){
	FILE *fptr;
	fptr = fopen("cadastrados.txt", "a+");
	static int linha;
			
			printf(" Digite o seu Nome: ");
			fflush(stdin);
			gets(nome[linha]);
			
			printf(" Digite o seu Sobrenome: ");
			gets(sobrenome[linha]);
			
			printf(" Digite o seu Usuario: ");
			gets(usuario[linha]);
			
			printf(" Digite  a Senha: ");
			scanf("%s",&senhaa[linha]);
			
			
			fprintf(fptr, "\nNome: %s\nSobrenome: %s\n%s\n%s\n\n", nome, sobrenome, usuario, senhaa);
			printf("\n Dados Gravados com sucesso!\n\n");
			linha++;
			fclose (fptr);
			for (;;) menuCadastros();	
	}
//------------------------------------------------------------------

