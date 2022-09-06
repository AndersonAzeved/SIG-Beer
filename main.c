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
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


// Funções
int tela_principal(void) {
  int op;
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///            = = = = Sistema de Assinatura de Cervejas = = = =           ///\n"
  "///                      = = = = Menu Principal = = = =                    ///\n"
  "///                                                                        ///\n"
  "///            1. Módulo Assinaturas                                       ///\n"
  "///            2. Módulo Cervejas                                          ///\n"
  "///            3. Módulo Fornecedores                                      ///\n"
  "///            4. Módulo Relatórios                                        ///\n"
  "///            5. Equipe                                                   ///\n"
  "///            6. Sobre                                                    ///\n"
  "///            7. Lixeira                                                  ///\n"
  "///            0. Sair                                                     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); scanf("%d",&op); fflush(stdin);
  return op;
}

void tela_equipe(void) {
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
	"///                 SIG - Beer: Assinatura de Cervejas                     ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///            = = = = Sistema de Assinatura de Cervejas = = = =           ///\n"
  "///                   = = = = Sobre Equipe = = = =                         ///\n"
  "///                                                                        ///\n"
  "///    Este projeto exemplo foi desenvolvido por:                          ///\n"
  "///    Ericleison Camilo Silva de Holanda                                  ///\n"
  "///    Anderson Azevedo da Silva                                           ///\n"
  "///    E-mail: ericleison.camilo.124@ufrn.edu.br                           ///\n"
  "///    E-mail: andersonsilva14.2017@gmail.com                              ///\n"
  "///    Redes sociais (instagram): @ericleisonholanda and @anderson.azvd    ///\n"
  "///    Git: https://github.com/AndersonAzeved/SIG-Beer                     ///\n"                                                    
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  }

void tela_sobre(void){
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
	"///                 SIG - Beer: Assinatura de Cervejas                     ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///            = = = = Sistema de Assinatura de Cervejas = = = =           ///\n"
  "///                      = = = = Sobre Projeto = = = =                     ///\n"
  "///                                                                        ///\n"
  "///    Os clubes de assinatura de cerveja estão cada vez mais populares    ///\n"
  "///    e permitem que os clientes recebam mensalmente packs de cervejas    ///\n"
  "///    artesanais selecionadas em seu endereço. Este programa tem como     ///\n"
  "///    objetivo gerenciar de forma eficiente as assinaturas e fornecendo   ///\n"
  "///    lembretes sobre os pedidos a serem entregues em cada semana e o     ///\n"
  "///    controle de pagamento das assinaturas.                              ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  }

int tela_cervejas(void) {
  int op;
  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug,2022     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                = = = = Módulo de Cervejas = = = =                      ///\n"
  "///                                                                        ///\n"
  "///             1. Cadastrar cerveja                                       ///\n"
  "///             2. Atualizar cerveja                                       ///\n"
  "///             3. Deletar cerveja                                         ///\n"
  "///             4. Recuperar cerveja                                       ///\n"
  "///             5. Pesquisar cerveja                                       ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); scanf("%d", &op); fflush(stdin);
  printf("\n");
}

int tela_relatorio(void) {
  int op;
  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug,2022     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                 = = = = Módulo relatórios = = = =                      ///\n"       
  "///                                                                        ///\n"
  "///             1. Relatório de cervejas                                   ///\n"
  "///             2. Relatório de assinaturas                                ///\n"
  "///             3. Relatório de fornecedores                               ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); scanf("%d", &op); fflush(stdin);
  printf("\n");
  }

int tela_lixeira(void){
  int op;
  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug,2022     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                        = = = =  Lixeira = = = =                        ///\n"       
  "///                                                                        ///\n"
  "///             1. Lixeira de assinaturas                                  ///\n"
  "///             2. Lixeira das cervejas                                    ///\n"
  "///             3. Lixeira de fornecedores                                 ///\n"
  "///             4. Lixeira de relatórios                                   ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); scanf("%d", &op); fflush(stdin);
  printf("\n");
  }

void tela_opcao_invalida(void){
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                 SIG - Beer: Assinatura de Cervejas                     ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                  Opção Inválida, tente novamente                       ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  }

int tela_assinaturas(void){
  int op;
  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug,2022     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///               = = = = Módulo de Assinaturas = = = =                    ///\n"
  "///                                                                        ///\n"
  "///             1. Cadastrar Assinatura                                    ///\n"
  "///             2. Atualizar Assinatura                                    ///\n"
  "///             3. Deletar Assinatura                                      ///\n"
  "///             4. Recuperar Assinatura                                    ///\n"
  "///             5. Pesquisar Assinatura                                    ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); scanf("%d", &op); fflush(stdin);
  printf("\n");
}

int tela_fornecedores(void){
  int op;
  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug,2022     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///               = = = = Módulo de Fornecedores = = = =                   ///\n"
  "///                                                                        ///\n"
  "///             1. Cadastrar Fornecedores                                  ///\n"
  "///             2. Atualizar Fornecedores                                  ///\n"
  "///             3. Deletar Fornecedores                                    ///\n"
  "///             4. Recuperar Fornecedores                                  ///\n"
  "///             5. Pesquisar Fornecedores                                  ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); scanf("%d", &op); fflush(stdin);
  printf("\n");
}

void tela_encerramento(void){
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
	"///                SIG - Beer: Assinatura de Cervejas                      ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                       Encerrando o SIG-Beer                            ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
}



int op;

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  do {
	op = tela_principal();

	if (op == 1) {
		//printf("Módulo Assinaturas");
		tela_assinaturas();
	}
	else if (op == 2) {
		//printf("Módulo Cervejas");
		tela_cervejas();
	}
	else if (op == 3) {
		//printf("Módulo Fornecedores");
		tela_fornecedores();
	}
	else if (op == 4) {
		//printf("Módulo relatórios");
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
