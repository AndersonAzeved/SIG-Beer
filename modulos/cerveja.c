// Bibloteca módulo cerveja

#include <stdio.h>
#include <stdlib.h>
#include "cerveja.h"
#include "biblioteca.h"
struct cerveja Cerveja;

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
  // char nome[20];
  // char codigo[50]; //Código da cerveja
  // char fornecedor[20];

  printf("Nome da cerveja (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Cerveja.nome);
  getchar();
  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]", Cerveja.codigo);
  getchar();
  printf("Fornecedor: ");
  scanf("%[A-Za-z0-9]", Cerveja.fornecedor);
  getchar();

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
  
}

void atualizar_cerveja(void){
  // char nome[20];
  // char codigo[50]; //Código da cerveja
  // char fornecedor[20];

  printf("Nome da cerveja (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Cerveja.nome);
  getchar();
  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]", Cerveja.codigo);
  getchar();
  printf("Fornecedor: ");
  scanf("%[A-Za-z0-9]", Cerveja.fornecedor);
  getchar();
  

  system("clear||cls");
  atualizado_sucesso();
  getchar();
}

void apagar_cerveja(void){
  // char nome[20];
  //char codigo[50]; //Código da cerveja
  //char fornecedor[20];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Cerveja.nome);
  getchar();

  deletado_sucesso();
  getchar();
}

void recuperar_cerveja(void){
  // char codigo[50];

  printf("Codigo da cerveja a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Za-z0-9]",Cerveja.codigo);
  getchar();
  system("clear||cls");

  printf("%s",Cerveja.codigo);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
  
}

void buscar_cerveja(void){
  // char nome[0];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Cerveja.nome);
  getchar();

  printf("%s",Cerveja.nome);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
  
}