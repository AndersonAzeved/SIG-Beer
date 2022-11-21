// Biblioteca do módulo relatório

#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"
#include "biblioteca.h"

char tela_relatorio(void) {
  char op[11];
  int ok = 0;
  do{
    system("clear||cls");
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
    fgets(op, 10, stdin);
      remove_enter(op);
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '5')){
        ok = 1;
      }else{
        system("clear||cls");
        tela_opcao_invalida();
        system("clear||cls");
      }
  }while(!ok);
  return op[0];
}

char relatorio_cerveja(void){ //Quiser adicionar mais filtros
  char op[11];
  int ok = 0;
  do{
    system("clear||cls");
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
    "///                = = = = Relatórios Cerveja = = = =                      ///\n"       
    "///                                                                        ///\n"
    "///             1. Filtro 1                                                ///\n"
    "///             2. Filtro 2                                                ///\n"
    "///             3. Filtro 3                                                ///\n"
    "///             0. Voltar                                                  ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
    printf("Informe a opção: "); 
    fgets(op, 10, stdin);
      remove_enter(op);
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '5')){
        ok = 1;
      }else{
        system("clear||cls");
        tela_opcao_invalida();
        system("clear||cls");
      }
  }while(!ok);
  return op[0];
}

char relatorio_assinatura(void){ //Quiser adicionar mais filtros
  char op[11];
  int ok = 0;
  do{
    system("clear||cls");
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
    "///               = = = = Relatórios Assinatura = = = =                    ///\n"       
    "///                                                                        ///\n"
    "///             1. Por Ordem Alfabética                                    ///\n"
    "///             2. Por Nível                                               ///\n"
    "///             3. Cadastros Ativos                                        ///\n"
    "///             4. Cadastros Inativos                                      ///\n"
    "///             0. Voltar                                                  ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
    printf("Informe a opção: "); 
    fgets(op, 10, stdin);
      remove_enter(op);
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '5')){
        ok = 1;
      }else{
        system("clear||cls");
        tela_opcao_invalida();
        system("clear||cls");
      }
  }while(!ok);
  return op[0];
}