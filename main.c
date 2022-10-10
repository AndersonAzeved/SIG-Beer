///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               	SIG - Beer: Assinatura de Cervejas                      ///
///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022     ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 7                                 ///
///////////////////////////////////////////////////////////////////////////////

// Importacao de bibliotecas
//#include "biblioteca.h" //Importacao da biblioteca criada, e feita entre ""
//#include "biblioteca.c"
#include "bibliotecas/assinatura/assinatura.h"
#include "bibliotecas/assinatura/assinatura.c"
#include "bibliotecas/cerveja/cerveja.h"
#include "bibliotecas/cerveja/cerveja.c"
#include "bibliotecas/fornecedor/fornecedor.h"
#include "bibliotecas/fornecedor/fornecedor.c"
#include "bibliotecas/principal/principal.h"
#include "bibliotecas/principal/principal.c"
#include "bibliotecas/relatorio/relatorio.h" 
#include "bibliotecas/relatorio/relatorio.c" 
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

char op; 
char op2; 

int main() {
  setlocale(LC_ALL, "Portuguese");

  do {
	op = tela_principal();

	if (op == '1'){ //Módulo Assinaturas
		do{
			op2 = tela_assinaturas();

			if(op2 == '1'){
				cadastrar_assinatura();
			}else if(op2 == '2'){
				atualizar_assinatura();
			}else if (op2 == '3'){
				apagar_assinatura();
			}else if (op2 == '4'){
				recuperar_assinatura();
			}else if(op2 == '5'){
				buscar_assinatura();		
			}else if(op2 == '0'){
				printf("\nVoltando...\n");
			}else{
				tela_opcao_invalida();
			}

			//op2 = tela_assinaturas();

		}while(op2 != '0');	
	}

	else if (op == '2') { //Módulo Cervejas
		do{

			op2 = tela_cervejas();

			if(op2 == '1'){
				cadastrar_cerveja();
			}else if(op2 == '2'){
				atualizar_cerveja();
			}else if(op2 == '3'){
				apagar_cerveja();
			}else if(op2 == '4'){
				recuperar_cerveja();
			}else if(op2 == '5'){
				buscar_cerveja();
			}else if(op2 == '0'){
				printf("\nVoltando...\n");
			}else{
				tela_opcao_invalida();
			}

			//op2 = tela_cervejas();

		}while(op2 != '0');
	}

	else if(op == '3'){ //Módulo Fornecedores
		do{

			op2 = tela_fornecedores();

			if(op2 == '1'){
				cadastrar_fornecedor();
			}else if(op2 == '2'){
				atualizar_fornecedor();
			}else if(op2 == '3'){
				apagar_fornecedor();
			}else if(op2 == '4'){
				recuperar_fornecedor();
			}else if(op2 == '5'){
				buscar_fornecedor();
			}else if(op2 == '0'){
				printf("\nVoltando...\n");
			}else{
				tela_opcao_invalida();
			}

			//op2 = tela_fornecedores();
		
		}while(op2 != '0');
	}
	else if (op == '4'){ //Módulo relatórios
		do{
			
			op2 = tela_relatorio();

			if(op2 == '1'){
				printf("\nRelatório de Cervejas\n");
			}else if(op2 == '2'){
				printf("\nRelatório de Assinaturas\n");
			}else if(op2 == '3'){
				printf("\nRelatório de Fornecedores\n");
			}else if(op2 == '0'){
				printf("\nVoltando...\n");
			}
			else{
				tela_opcao_invalida();
			}

			//op2 = tela_relatorio();

		}while(op2 != '0');
		
	}
	else if (op == '5') {
		//printf("Sobre Equipe");
		tela_equipe();
	} 
	else if (op == '6') {
		//printf("Sobre Projeto");
		tela_sobre();
	} 
	else if (op == '7') {
		//printf("Lixeira");
		do{

			op2 = tela_lixeira();
			
			if(op2 == '1'){
				printf("\nLixeira de Cervejas\n");
			}else if(op2 == '2'){
				printf("\nLixeira de Assinaturas\n");
			}else if(op2 == '3'){
				printf("\nLixeira de Fornecedores\n");
			}else if(op2 == '4'){
				printf("\nLixeira de Relatórios\n");
			}else if(op2 == '0'){
				printf("\nVoltando...\n");
			}else{
				tela_opcao_invalida();
			}

			//op2 = tela_lixeira();

		}while(op2 != '0');
	}
	else if(op == '0'){
		//printf("Módulo de Encerramento");
		tela_encerramento();
	}
	else{
		//printf("Opção Invalída!");
		tela_opcao_invalida();
	}

  } while (op != '0');
  return 0;
}
