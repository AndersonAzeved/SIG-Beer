//Biblioteca do Módulo Assinaturas

#include <stdio.h>
#include <stdlib.h>
#include "assinatura.h"
#include "biblioteca.h"

char tela_assinaturas(void){
  char op;
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
  printf("Informe a opção: "); 
  scanf("%s", &op); 
  getchar();
  //fflush(stdin);
  printf("\n");
  return op;
}

void cadastrar_assinatura(void){
  char nome[50];
  char cpf[20];
  char endereco[50]; 
  char telefone[50];
  char codigo[50]; //Código da cerveja
  char email[30];
  //char cod_assinatura[20]; //Criar algum meio para a cada assinatura, criar um código diferente

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",nome);
  getchar();
  do{
  // while (!valida_cpf(cpf)){
    printf("CPF: ");
    scanf("%[0-9.-]",cpf);
    getchar();
    retira_pontoscpf(cpf);
    verifica_letracpf(cpf);
    valida_cpf(cpf);
    if (!valida_cpf(cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(cpf));
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]",endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]",telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]",email);
  getchar();
  while(!valida_email(email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",email);
    getchar();
  } 

  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]", codigo);
  getchar();

  system("clear||cls");

  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                       Cadastrado com Sucesso                           ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  getchar();
}

void atualizar_assinatura(void){
  char nome[50];
  char cpf[20];
  char endereco[50]; 
  char telefone[50];
  char codigo[50]; //Código da cerveja
  char email[30];
  char assinatura[20];

  printf("Código da assinatura a atualizar: ");
  scanf("%[A-Za-z0-9]", assinatura);
  getchar();

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",nome);
  getchar();
  printf("CPF: ");
  scanf("%[0-9.-]",cpf);
  getchar();
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]",endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]",telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]",email);
  getchar();
  while(!valida_email(email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",email);
    getchar();
  } 

  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]", codigo);
  getchar();

  system("clear||cls");

  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                       Atualizado com Sucesso                           ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  getchar();
}

void buscar_assinatura(void){
  char nome[50];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",nome);
  getchar();

  printf("%s",nome);
  getchar();
}

void apagar_assinatura(void){
  char nome[50];
  //char cpf[20];
  //char endereco[50]; 
  //char telefone[50];
  //char codigo[50]; //Código da cerveja
  //char email[30];
  //char assinatura[20];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",nome);
  //fflush(stdin);

  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                        Deletado com Sucesso                            ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  getchar();
}

void recuperar_assinatura(void){
  char nome[50];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",nome);
  getchar();
  system("clear||cls");

  printf("%s",nome);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
}