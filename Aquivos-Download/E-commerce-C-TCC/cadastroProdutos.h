#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define SIZE 200

//Fução de cadastro de Produtos (Lucas que fez)
char produto[SIZE][50];
char fabricante[SIZE][50];
char lote[SIZE][50];
char quantidade[SIZE][50];
void menuCadastros();

void cadastroProdutos(){
	FILE *fptr;
	fptr = fopen("cadastro_produtos.txt", "a+");
	static int linha;
			
			printf(" Informe o Nome do Produto: ");
			fflush(stdin);
			gets(produto[linha]);
			
			printf(" Informe o fabricante: ");
			gets(fabricante[linha]);
			
			printf(" Informe a quantidade: ");
			gets(quantidade[linha]);
			
			printf(" Informe um numero do lote: ");
			scanf("%s",&lote[linha]);
			
			fprintf(fptr, "\nProduto: %sQuantidade: %s\n%s\n%s\n\n", produto, quantidade, fabricante, lote);
			printf("\n");
			printf("\n Dados Gravados com sucesso!\n\n");
			linha++;
			fclose (fptr);
			printf("\n");
			for (;;) menuCadastros();	
	}
//------------------------------------------------------------------

