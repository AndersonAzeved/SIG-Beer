///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               	SIG - Beer: Assinatura de Cervejas 		                ///
///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022     ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 1                                 ///
///////////////////////////////////////////////////////////////////////////////


//Importacao de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblioteca.h" //Importacao da biblioteca criada, e feita entre ""

int tela_principal(void);
void tela_equipe(void);
void tela_sobre(void);

int op;

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	do{
		op = tela_principal();

		if(op == 1){
			printf("Módulo Cervejas");
      tela_cervejas();
		}
		else if(op == 2){
			printf("Módulo Assinaturas");
		}
		else if(op == 3){
			printf("Módulo Fornecedores");
		}
		else if(op == 4){
			printf("Módulo relatórios");
			tela_equipe();
		}
		else if(op == 5){
			printf("Equipe");
			tela_sobre(); 
		}
    else if (op==6){
      printf("Sobre");
    }
    else if(op==7){
      printf("Lixeira");
      
    }

	}while(op != 0);	
	return 0;
}
