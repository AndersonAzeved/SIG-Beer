//      FUNÇÕES MÓDULO ASSINATURA 

#include <stdio.h>
#include <stdlib.h>
#include "fornecedor.h"
#include "biblioteca.h"

typedef struct fornecedor Fornecedor;
Fornecedor forne;


void arquivo_fornecedor(Fornecedor* forne){
    FILE* fp;
    fp = fopen("files/fornecedor.dat","ab");
    if(fp == NULL){
      fp = fopen("files/fornecedor.dat","a");
    }
    fwrite(forne, sizeof(Fornecedor), 1, fp);
    fclose(fp);
}

void cadastrar_fornecedor(void){

  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));

  printf("Nome jurídico da empresa : ");
  remove_enter(fgets(forne->empresa, 51, stdin));  
  // remove_enter(forne->empresa);

  do{
    printf("CPF: "); 
    remove_enter(fgets(forne->cpfempresa, 51, stdin));  
    retira_pontoscpf(forne->cpfempresa);
    verifica_letracpf(forne->cpfempresa);
    valida_cpf(forne->cpfempresa);
    if (!valida_cpf(forne->cpfempresa)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(forne->cpfempresa));

  printf("Telefone: ");
  remove_enter(fgets(forne->telefoneempresa, 51, stdin));  
  do{
    printf("E-mail da empresa : ");
    remove_enter(fgets(forne->emailempresa, 51, stdin));
    if(!valida_email(forne->emailempresa)){
      printf("Email inválido, tente novamente!\n");
  } }
  while(!valida_email(forne->emailempresa));
  do{
  printf("CNPJ da empresa : ");
  remove_enter(fgets(forne->cnpj, 51, stdin)); 
  if(!valida_cnpj(forne->cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
  } }
  while (!valida_cnpj(forne->cnpj));

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
}


void atualizar_fornecedor(void){
  printf("Nome jurídico da empresa : ");
  scanf("%[A-Za-z0-9]", forne.empresa);
  getchar();
  printf("CPF do dono da empresa : ");
  scanf("%[A-Za-z0-9]", forne.cpfempresa);
  getchar();
  printf("Telefone: ");
  scanf("%[A-Za-z0-9]", forne.telefoneempresa);
  getchar();
  printf("E-mail da empresa : ");
  scanf("%[A-z a-z.@0-9]", forne.emailempresa);
  getchar();
  while(!valida_email( forne.emailempresa)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",forne.emailempresa);
    getchar();
  } 
  printf("CNPJ da empresa : ");
  scanf("%s",forne.cnpj);
  getchar();
  while(!valida_cnpj(forne.cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
    printf("CNPJ da empresa : ");
    scanf("%c",forne.cnpj);
    getchar();
  } 

  system("clear||cls");
  atualizado_sucesso();
  getchar();
}

void apagar_fornecedor(void){
  printf("Nome a ser pesquisado : ");
  scanf("%[A-Z a-z]",forne.empresa);
  getchar();
  deletado_sucesso();
  getchar();
}

void recuperar_fornecedor(void){
  printf("CNPJ a ser pesquisado : ");
  scanf("%[A-Za-z0-9]",forne.cnpj);
  getchar();
  while(!valida_cnpj(forne.cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
    printf("CNPJ da empresa : ");
    scanf("%c",forne.cnpj);
    getchar();
  } 

  system("clear||cls");
  printf("%s",forne.cnpj);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
  
}


void buscar_fornecedor(void){
  printf("CNPJ a ser pesquisado : ");
  scanf("%[A-Z a-z]",forne.cnpj);
  getchar();
  while(!valida_cnpj(forne.cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
    printf("CNPJ da empresa : ");
    scanf("%c",forne.cnpj);
    getchar();
  } 

  printf("%s",forne.cnpj);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
}

char tela_fornecedores(void){
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
  printf("Informe a opção: "); 
  scanf("%s", &op); 
  getchar();
  printf("\n");
  return op;
}