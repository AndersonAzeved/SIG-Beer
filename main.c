///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               	SIG - Beer: Assinatura de Cervejas                      ///
///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022     ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 13                                ///
///////////////////////////////////////////////////////////////////////////////

// Importacao de bibliotecas
#include "modulos/assinatura.h"
#include "modulos/cerveja.h"
#include "modulos/fornecedor.h"
#include "modulos/principal.h"
#include "modulos/relatorio.h" 
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

char op; 
char op2; 
char op3;

int main() {
  setlocale(LC_ALL, "Portuguese");
  criando_arquivo("files/assinatura.dat");
  criando_arquivo("files/cerveja.dat");
  criando_arquivo("files/fornecedor.dat");
  criando_arquivo("files/data_sorteio.dat");
  preenche_data_sorteio();
  preenche_assinaturas();
  
  do {
	op = tela_principal();
	preenche_data_sorteio();
  	preenche_assinaturas();

	if (op == '1'){ //Módulo Assinaturas
		do{
			op2 = tela_assinaturas();
			preenche_data_sorteio();
  			preenche_assinaturas();

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
		}while(op2 != '0');	
	}

	else if (op == '2') { //Módulo Cervejas
		do{

			op2 = tela_cervejas();
			preenche_data_sorteio();
  			preenche_assinaturas();

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
		}while(op2 != '0');
	}
	else if (op == '4'){ //Módulo relatórios
		do{
			
			op2 = tela_relatorio();

			if(op2 == '1'){
				printf("\nRelatório de Assinaturas\n");
				do{
					op3 = relatorio_assinatura();
					if(op3 == '1'){
						rela_todas_ass();
					}else if(op3 == '2'){
						rela_ordem_alfa_ass();
					}else if(op3 == '3'){
						rela_por_nivel_ass();
					}else if(op3 == '4'){
						rela_ass_ultmes();
					}else if(op3 == '5'){
						rela_ass_ativas();
					}else if(op3 == '6'){
						rela_ass_inativas();
					}else if(op3 == '0'){
						printf("Voltando\n");
					}else{
						tela_opcao_invalida();
					}
				}while(op3 != '0');

			}else if(op2 == '2'){
				printf("\nRelatório de Cervejas\n");
				op3 = relatorio_cerveja();
					if(op3 == '1'){
						rela_todas_cervejas();					
					}else if(op3 == '2'){
						rela_ordem_alfa_cer();					
					}else if(op3 == '3'){
						rela_cer_ativas();
					}else if(op3 =='4'){
						rela_cer_inativas();
					}
			}else if(op2 == '3'){
				printf("\nRelatório de Fornecedores\n");
				op3= relatorio_fornecedor();
					if(op3 == '1'){
						rela_todos_forne();
					}else if(op3 == '2'){
						rela_ordem_alfa_forne();
					}else if(op3 == '3'){
						rela_forne_ativos();
					}else if(op3 =='4'){

					}


			}else if(op2 == '0'){
				printf("\nVoltando...\n");
			}
			else{
				tela_opcao_invalida();
			}
		}while(op2 != '0');
		
	}
	else if (op == '5') {
		tela_equipe();
	} 
	else if (op == '6') {
		tela_sobre();
	} 
	else if (op == '7') {
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
		}while(op2 != '0');
	}
	else if(op == '0'){
		tela_encerramento();
	}
	else{
		tela_opcao_invalida();
	}

  } while (op != '0');
  return 0;
}
