// Bibloteca módulo cerveja

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cerveja.h"
#include "biblioteca.h"
#include "principal.h"

void arquivo_cerveja(Cerveja* ass){
    FILE* fp;
    fp = fopen("files/cerveja.dat","ab");
    if(fp == NULL){
      fp = fopen("files/cerveja.dat","a");
    }
    fwrite(ass, sizeof(Cerveja), 1, fp);
    fclose(fp);
}

typedef struct cerveja Cerveja;
Cerveja cer;

char tela_cervejas(void) {
  char op[11];
  int ok = 0;
  do{
    //system("clear||cls");
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
    printf("Informe a opção: "); 
    fgets(op, 10, stdin);
    remove_enter(op);
    if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '5')){
      ok = 1;
    }else{
      ok = 0;
      tela_opcao_invalida();
    }    
  }while(!ok);
  printf("\n");
  return op[0];
}

void cadastrar_cerveja(){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Nome da cerveja (APENAS LETRAS): ");
  // scanf("%[A-Z a-z]",cer.nome);
  fgets(cer->nome, 20, stdin);
  remove_enter(cer->nome);

  printf("Código da Cerveja: ");
  fgets(cer->codigo, 50, stdin);
  remove_enter(cer->codigo);

  printf("Fornecedor: ");
  fgets(cer->fornecedor, 20, stdin);
  remove_enter(cer->fornecedor);

  cer->status = 'a';
  arquivo_cerveja(cer);

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
  
}

void atualizar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Nome da cerveja (APENAS LETRAS): ");
  // scanf("%[A-Z a-z]",cer.nome);
  fgets(cer->nome, 20, stdin);
  remove_enter(cer->nome);

  printf("Código da Cerveja: ");
  fgets(cer->codigo, 50, stdin);
  remove_enter(cer->codigo);

  printf("Fornecedor: ");
  fgets(cer->fornecedor, 20, stdin);
  remove_enter(cer->fornecedor);

  arquivo_cerveja(cer);

  system("clear||cls");
  atualizado_sucesso();
  getchar();
  
}

void apagar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("NOME: ");
  fgets(cer->nome, 20, stdin);
  remove_enter(cer->nome);
  cer->status = 'i';
  arquivo_cerveja(cer);
  printf("\n\n\n\n\tEM DESENVOLVIMENTO.\n\n\n\n");
  getchar();
}

void recuperar_cerveja(void){

  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  fgets(cer->nome, 20, stdin);
  remove_enter(cer->nome);
  cer->status = 'a';
  arquivo_cerveja(cer);
  printf("\n\n\n\n\tEM DESENVOLVIMENTO.\n\n\n\n");
  getchar();
  
}

void buscar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  fgets(cer->nome, 20, stdin);
  printf("\n\n\n\n\tEM DESENVOLVIMENTO.\n\n\n\n");
  getchar();
}



