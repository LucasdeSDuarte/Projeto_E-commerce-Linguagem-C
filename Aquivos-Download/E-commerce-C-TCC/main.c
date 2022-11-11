#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 200
#include "menuInicial.h"
#include "cadastroUsuario.h"
#include "cadastroClientes.h"
#include "cadastroProdutos.h"
#include "telaLogin.h"
#include "menuCadastrosRelatorios.h"
#include "menuCadastros.h"
#include "menuRelatorios.h"
#include "menuConsultas.h"



void menuInicial();
void cadastroUsuarios();
void cadastroClientes();
void cadastroProdutos();
void telaLogin();
void menuCadastrosRelatorios();
void menuCadastros();
void menuRelatorios();
void menuConsultas();

int main() {
	setlocale(LC_ALL, "Portuguese");
	menuInicial();
	if(op == 1){
		telaLogin();	
	}
		
	menuCadastrosRelatorios();
	
	system("pause");
	getchar();
	return 0;
}
