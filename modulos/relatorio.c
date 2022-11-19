// Biblioteca do módulo relatório

#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"
#include "biblioteca.h"
#include "assinatura.h"

char tela_relatorio(void) {
  system("clear||cls");
  char op[11];
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
  scanf("%s", op); 
  getchar();
  printf("\n");
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
  return op[0];
}

void lista_dinamica(void){
  FILE* arq;
  Ass_dinamica* assd;
  Ass_dinamica* lista;
  lista = NULL;
  Assinatura* ass;
  arq = fopen("files/assinatura.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  assd = (Ass_dinamica*) malloc(sizeof(Ass_dinamica));
  while(!feof(arq)){
    if(fread(ass, sizeof(Assinatura), 1, arq)){
    printf("\nentrouuuuuu\n");
    assd->nome = ass->nome ;
    assd->cpf = ass->cpf;
    assd->endereco = ass->endereco; 
    assd->telefone = ass->telefone;
    assd->email = ass->email;
    assd->codigo = ass->codigo;
    assd->cerveja_mes = ass->cerveja_mes;
    assd->nivel = ass->nivel;
    assd->status = ass->status;
    lista = assd;
    }
  }
  assd = lista;
  while(lista != NULL){
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
    "///                  = = = Assinatura Cadastrada = = =                     ///\n"
    "///                                                                        ///\n");
    printf("///         Nome: %s\n", assd->nome);
    printf("///         CPF: %s\n", assd->cpf);
    printf("///         Endereço: %s\n", assd->endereco);
    printf("///         Telefone: %s\n", assd->telefone);
    printf("///         Email: %s\n", assd->email);
    printf("///         Código: %s\n", assd->codigo);
    printf("///         Nível: %c\n", assd->nivel);
    printf("///         Cerveja do Mês: %s\n", assd->cerveja_mes);
    printf("///                                                                        ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////\n");
    assd = assd->prox;
  }
}