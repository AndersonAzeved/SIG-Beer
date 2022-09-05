#include <stdio.h>
#include <stdlib.h>

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
  printf("\n");
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
	"///                SIG - Beer: Assinatura de Cervejas                      ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///           = = = = Sistema de Assinatura de Cervejas = = = =            ///\n"
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

void tela_sobre(void) {
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
  "///          = = = = Sistema de Assinatura de Cervejas = = = =             ///\n"
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
