///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               	SIG - Beer: Assinatura de Cervejas                      ///
///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022     ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 3                                 ///
///////////////////////////////////////////////////////////////////////////////

// Importacao de bibliotecas
#include "biblioteca.h" //Importacao da biblioteca criada, e feita entre ""
#include "biblioteca.c"
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

int op;

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  do {
	op = tela_principal();

	if(op == 1){ //Módulo Assinaturas
		op = tela_assinaturas();
		if(op == 1){
			cadastrar_assinatura();
		}else if(op == 2){
			atualizar_assinatura();
		}else if (op == 3){
			apagar_assinatura();
		}else if (op == 4){
			recuperar_assinatura();
		}else if(op == 5){
			buscar_assinatura();		
		}else{
			tela_opcao_invalida();
		}
	}

	else if (op == 2) { //Módulo Cervejas
		op = tela_cervejas();
		if(op == 1){
			cadastrar_cerveja();
		}else if(op == 2){
			atualizar_cerveja();
		}else if(op == 3){
			apagar_cerveja();
		}else if(op == 4){
			recuperar_cerveja();
		}else if(op == 5){
			buscar_cerveja();
		}else{
			tela_opcao_invalida();
		}

	}

	else if(op == 3){ //Módulo Fornecedores
		op = tela_fornecedores();
		if(op == 1){
			cadastrar_fornecedor();
		}else if(op == 2){
			atualizar_fornecedor();
		}else if(op == 3){
			apagar_fornecedor();
		}else if(op == 4){
			recuperar_fornecedor();
		}else if(op == 5){
			buscar_fornecedor();
		}else{
			tela_opcao_invalida();
		}
	}
	else if (op == 4){ //Módulo relatórios
		tela_relatorio();
	}
	else if (op == 5) {
		//printf("Sobre Equipe");
		tela_equipe();
	} 
	else if (op == 6) {
		//printf("Sobre Projeto");
		tela_sobre();
	} 
	else if (op == 7) {
		//printf("Lixeira");
		tela_lixeira();
	}
	else if(op == 0){
		//printf("Módulo de Encerramento");
		tela_encerramento();
	}
	else{
		//printf("Opção Invalída!");
		tela_opcao_invalida();
	}

  } while (op != 0);
  return 0;
}


