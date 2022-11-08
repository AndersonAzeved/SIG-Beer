// Bibloteca módulo cerveja

#include <stdio.h>
#include <stdlib.h>
#include "cerveja.h"
#include "biblioteca.h"

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
  scanf("%s", &op); 
  getchar();
  printf("\n");
  return op;
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

  arquivo_cerveja(cer);

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
  
}

void atualizar_cerveja(void){
  printf("Nome da cerveja (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",cer.nome);
  getchar();
  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]", cer.codigo);
  getchar();
  printf("Fornecedor: ");
  scanf("%[A-Za-z0-9]", cer.fornecedor);
  getchar();
  system("clear||cls");
  atualizado_sucesso();
  getchar();
}

void apagar_cerveja(void){
  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",cer.nome);
  getchar();
  deletado_sucesso();
  getchar();
}

void recuperar_cerveja(void){
  printf("Codigo da cerveja a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Za-z0-9]",cer.codigo);
  getchar();
  system("clear||cls");
  printf("%s",cer.codigo);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
  
}

void buscar_cerveja(void){
  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",cer.nome);
  getchar();
  printf("%s",cer.nome);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
}