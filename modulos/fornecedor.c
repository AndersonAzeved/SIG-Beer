//      FUNÇÕES MÓDULO ASSINATURA 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fornecedor.h"
#include "biblioteca.h"
#include "principal.h"

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
  do{
  printf("CNPJ da empresa : ");
  remove_enter(fgets(forne->cnpj, 51, stdin)); 
  if(!valida_cnpj(forne->cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
  } }
  while (!valida_cnpj(forne->cnpj));
  if(cnpj_esta(forne->cnpj)){
    printf("\nCNPJ já cadastrado!\n");
  }else{
    printf("Nome jurídico da empresa : ");
    remove_enter(fgets(forne->empresa, 51, stdin)); 
    do{
      printf("CPF: "); 
      remove_enter(fgets(forne->cpfempresa, 51, stdin));
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

    system("clear||cls");
    cadastrado_sucesso();
  }
  free(forne);
  getchar();
}


void atualizar_fornecedor(void){
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  do{
  printf("CNPJ da empresa : ");
  remove_enter(fgets(forne->cnpj, 50, stdin)); 
  if(!valida_cnpj(forne->cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
  } }
  while (!valida_cnpj(forne->cnpj));
  if(cnpj_esta(forne->cnpj)){
    printf("Nome jurídico da empresa : ");
    remove_enter(fgets(forne->empresa, 50, stdin));
    
    do{
      printf("CPF do dono da empresa: "); 
      remove_enter(fgets(forne->cpfempresa, 50, stdin));
      valida_cpf(forne->cpfempresa);
      if (!valida_cpf(forne->cpfempresa)){
        printf("\nCPF inválido, digite novamente.\n");
      }
    } while (!valida_cpf(forne->cpfempresa));

    printf("Telefone: ");
    remove_enter(fgets(forne->telefoneempresa, 50, stdin));

    printf("E-mail da empresa : ");
    remove_enter(fgets(forne->emailempresa, 50, stdin));
    while(!valida_email( forne->emailempresa)){
      printf("Email inválido, tente novamente: ");
      remove_enter(fgets(forne->emailempresa, 50, stdin));
    } 
    system("clear||cls");
    atualizado_sucesso();
  }   
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
    fgets(op, 10, stdin);
    remove_enter(op);
    if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '5')){
      ok = 1;
    }else{
      system("clear||cls");
      tela_opcao_invalida();
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
      fgets(op, 10, stdin);
      remove_enter(op);
    }    
  }while(!ok);
  getchar();
  printf("\n");
  return op[0];
}

int cnpj_esta(char *cnpj){
  FILE* arq;
  Fornecedor *forne;
  arq = fopen("files/fornecedor.dat", "rb");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  while(!feof(arq)){
    if(fread(forne, sizeof(Fornecedor), 1, arq)){
      if(((strcmp(forne->cnpj,cnpj)) == 0) && forne->status == 'a'){
        return 1;
      }
    }
  }
  fclose(arq);
  free(forne);
  return 0;
}