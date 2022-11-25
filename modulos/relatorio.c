// Biblioteca do módulo relatório

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "biblioteca.h"
#include "principal.h"
#include "assinatura.h"

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
    "///             1. Relatório de assinaturas                                ///\n"
    "///             2. Relatório de cervejas                                   ///\n"
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
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '4')){
        ok = 1;
      }else{
        system("clear||cls");
        tela_opcao_invalida();
        system("clear||cls");
      }
  }while(!ok);
  return op[0];
}

void rela_ordem_alfa_ass(void){
  Assinatura* ass;
  FILE* arq;
  arq = fopen("files/assinatura.dat", "r+b");
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  while(!feof(arq)){
    arq = fopen("files/assinatura.dat", "r+b");
    while(!feof(arq)){
      (fread(ass, sizeof(Assinatura), 1, arq));
      if((ass->nome[0] >= 65 && ass->nome[0] <= 90) || (ass->nome[0] >= 97 && ass->nome[0] <= 122)){
        printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///                                                                        ///\n"
        "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
        "///                  = = = Assinatura Cadastrada = = =                     ///\n"
        "///                                                                        ///\n");
        printf("///         Nome: %s\n", ass->nome);
        printf("///         CPF: %s\n", ass->cpf);
        printf("///         Endereço: %s\n", ass->endereco);
        printf("///         Telefone: %s\n", ass->telefone);
        printf("///         Email: %s\n", ass->email);
        printf("///         Código: %s\n", ass->codigo);
        printf("///         Nível: %c\n", ass->nivel);
        if(quant_cervejas_cadas() == 0){
          printf("///         Cerveja do Mês: A DEFINIR\n");
        }else{
        printf("///         Cerveja do Mês: %s\n", ass->cerveja_mes);
        }
        printf("///                                                                        ///\n");
        printf("//////////////////////////////////////////////////////////////////////////////\n");
      }
    }
    fclose(arq);
  }
  fclose(arq);
  free(ass);
  getchar();
  system("clear || cls");
}