#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include <conio.h>
#define SIZE 200

char login[50];
char senha[50];
//char str1[100]="str";
//char str2[100]="str2";
int i,k,g;
char a[50];
 


// Funçãoo Tela de Login
void telaLogin(){

    FILE *fp;

	volta:
    k=0;g=0;
    fp = fopen("cadastrados.txt","r");

	system("cls");
    printf("#####################################");
	printf("\n Bem Vindo!\n Tela de Login...\n");
	printf("#####################################\n\n");
	printf("\n LOGIN: ");                     //se digitar < login > da certo
	scanf("%s",login);                       /*aqui você digita o login*/
	printf(" SENHA: ");                       // aqui digite < senha > que da certo
	scanf("%s",senha);                       /*aqui você digita a senha*/
	
	// Varredura até o fim do arquivo para verificação usuario
	while(fscanf(fp,"%s",a)!=EOF){        
        if(strcmp(a,login) == 0){
	        k=1;
	        break;
        }
    }
    
    // Varredura até o fim do arquivo para verificação de senha
    fclose(fp);
    fp = fopen("cadastrados.txt","r");       
    while(fscanf(fp,"%s",a)!=EOF){
        if(strcmp(a,senha) == 0){
	        g=1;
	        break;
        }
    }
    fclose(fp);
	if(k==1&&g==1){
		system("cls");
	    printf("\n\n LOGADO");
	    printf("\n Precione Enter para continuar!\n\n");
	    
    }
    else{
    	system("cls");
	    printf("\n ERRO!\nDADOS INVALIDOS!\n\n");
	    goto volta;
    }
    printf("");
    getch();
}
	
//-----------------------------------------------------------------------------------------
