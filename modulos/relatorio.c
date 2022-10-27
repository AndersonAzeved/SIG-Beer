// Biblioteca do módulo relatório

#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"
#include "biblioteca.h"

char tela_relatorio(void) {
  system("clear||cls");
  char op;
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
  printf("Informe a opção: "); 
  scanf("%s", &op); 
  getchar();
  printf("\n");
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
  return op;
  }