//      FUNÇÕES MÓDULO ASSINATURA 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fornecedor.h"
#include "biblioteca.h"
#include "principal.h"

typedef struct fornecedor Fornecedor;
Fornecedor forne;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
void grava_fornecedor(Fornecedor* forne){
    FILE* fp;
    fp = fopen("files/fornecedor.dat","ab");
    if(fp == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    fwrite(forne, sizeof(Fornecedor), 1, fp);
    fclose(fp);
}

void cadastrar_fornecedor(void){
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  do{
  printf("CNPJ da empresa: ");
<<<<<<< HEAD
  remove_enter(fgets(forne->cnpj, 51, stdin)); 
  if(!valida_cnpj(forne->cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
  }}
  while (!valida_cnpj(forne->cnpj));
  if(cnpj_esta(forne->cnpj)){
    printf("\nCNPJ já cadastrado!\n");
  }else{
    printf("Nome jurídico da empresa: ");
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
    forne->status = 'a';
<<<<<<< HEAD
    system("clear||cls");
    cadastrado_sucesso();
    grava_fornecedor(forne);
  }
  free(forne);
=======

=======
>>>>>>> a5cb62f (atualização em fornecedor)
void arquivo_fornecedor(Fornecedor* forne){
=======
void grava_fornecedor(Fornecedor* forne){
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
    FILE* fp;
    fp = fopen("files/fornecedor.dat","ab");
    if(fp == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    fwrite(forne, sizeof(Fornecedor), 1, fp);
    fclose(fp);
}

void cadastrar_fornecedor(void){
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  do{
  printf("CNPJ da empresa : ");
=======
>>>>>>> d09a6a5 (atualização em atualizar_fornecedor)
  remove_enter(fgets(forne->cnpj, 51, stdin)); 
  if(!valida_cnpj(forne->cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
  } }
  while (!valida_cnpj(forne->cnpj));
  if(cnpj_esta(forne->cnpj)){
    printf("\nCNPJ já cadastrado!\n");
  }else{
    printf("Nome jurídico da empresa: ");
    remove_enter(fgets(forne->empresa, 51, stdin)); 
    do{
      printf("CPF: "); 
      remove_enter(fgets(forne->cpfempresa, 51, stdin));
      valida_cpf(forne->cpfempresa);
      if (!valida_cpf(forne->cpfempresa)){
        printf("\nCPF inválido, digite novamente.\n");
      }
    } while (!valida_cpf(forne->cpfempresa));

<<<<<<< HEAD
  system("clear||cls");
  cadastrado_sucesso();
>>>>>>> 90df81c (Atualização na função cadastrar fornecedor)
=======
    printf("Telefone: ");
    remove_enter(fgets(forne->telefoneempresa, 51, stdin));  
    do{
      printf("E-mail da empresa : ");
      remove_enter(fgets(forne->emailempresa, 51, stdin));
      if(!valida_email(forne->emailempresa)){
        printf("Email inválido, tente novamente!\n");
    } }
    while(!valida_email(forne->emailempresa));

=======
>>>>>>> e186622 (atualizações)
    system("clear||cls");
    cadastrado_sucesso();
    grava_fornecedor(forne);
  }
  free(forne);
>>>>>>> a5cb62f (atualização em fornecedor)
  getchar();
}


void atualizar_fornecedor(void){
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
<<<<<<< HEAD
<<<<<<< HEAD
  char cnpj[51];
  do{
    printf("CNPJ da empresa : ");
    remove_enter(fgets(forne->cnpj, 50, stdin)); 
    if(!valida_cnpj(forne->cnpj)){
      printf("CNPJ inválido, tente novamente!\n");
    } 
  }while (!valida_cnpj(forne->cnpj));

  strcpy(cnpj, forne->cnpj);

  if(cnpj_esta(forne->cnpj)){
    FILE* arq;
    int achou = 0;
    arq = fopen("files/fornecedor.dat", "r+b");
    if(arq == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar o programa...\n");
      exit(1);
    }
    while((!achou) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
      if ((strcmp(forne->cnpj, cnpj) == 0) && (forne->status == 'a')) {
        achou = 1;
      }
    }

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

=======
=======
  char cnpj[51];
>>>>>>> 01e6c0e (atualização em fornecedor)
  do{
    printf("CNPJ da empresa : ");
    remove_enter(fgets(forne->cnpj, 50, stdin)); 
    if(!valida_cnpj(forne->cnpj)){
      printf("CNPJ inválido, tente novamente!\n");
    } 
  }while (!valida_cnpj(forne->cnpj));

  strcpy(cnpj, forne->cnpj);

  if(cnpj_esta(forne->cnpj)){
    FILE* arq;
    int achou = 0;
    arq = fopen("files/fornecedor.dat", "r+b");
    if(arq == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar o programa...\n");
      exit(1);
    }
    while((!achou) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
      if ((strcmp(forne->cnpj, cnpj) == 0) && (forne->status == 'a')) {
        achou = 1;
      }
    }

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

>>>>>>> a5cb62f (atualização em fornecedor)
    printf("Telefone: ");
    remove_enter(fgets(forne->telefoneempresa, 50, stdin));

    printf("E-mail da empresa : ");
    remove_enter(fgets(forne->emailempresa, 50, stdin));
    while(!valida_email( forne->emailempresa)){
      printf("Email inválido, tente novamente: ");
      remove_enter(fgets(forne->emailempresa, 50, stdin));
    } 
<<<<<<< HEAD
<<<<<<< HEAD
    forne->status = 'a';
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 01e6c0e (atualização em fornecedor)
    fseek(arq, -1*sizeof(Fornecedor), SEEK_CUR);
    fwrite(forne, sizeof(Fornecedor), 1, arq);
    fclose(arq);
    free(forne);
<<<<<<< HEAD
=======
    forne->status = 'a';
>>>>>>> e186622 (atualizações)
=======
    grava_fornecedor(forne);
>>>>>>> 067f0ec (função apagar_forne_auto criada)
=======
>>>>>>> 01e6c0e (atualização em fornecedor)
    system("clear||cls");
    atualizado_sucesso();
  }else{
    printf("\nCNPJ não cadastrado!\n");
  }
=======
    system("clear||cls");
    atualizado_sucesso();
<<<<<<< HEAD
  }   
>>>>>>> a5cb62f (atualização em fornecedor)
=======
  }else{
    printf("\nCNPJ não cadastrado!\n");
  }
>>>>>>> d09a6a5 (atualização em atualizar_fornecedor)
  getchar();
}

void apagar_fornecedor(void){
<<<<<<< HEAD
<<<<<<< HEAD
  FILE* arq;
  Fornecedor* forne;
  int encontrar = 0;
=======

=======
>>>>>>> d09a6a5 (atualização em atualizar_fornecedor)
  FILE* arq;
  Fornecedor* forne;
<<<<<<< HEAD
  int achou = 0;
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
=======
  int encontrar = 0;
>>>>>>> 496148a (Atualização na função recuperar fornecedor)
  char resposta;
  char apagar[51];
  arq = fopen("files/fornecedor.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  do{
    printf("CNPJ da empresa : ");
    remove_enter(fgets(apagar, 50, stdin)); 
    if(!valida_cnpj(apagar)){
      printf("CNPJ inválido, tente novamente!\n");
    } 
  }while (!valida_cnpj(apagar));

  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
<<<<<<< HEAD
<<<<<<< HEAD
  encontrar = 0;
  while((!encontrar) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
   if ((strcmp(forne->cnpj, apagar) == 0) && (forne->status == 'a')) {
     encontrar = 1;
   }
  }

  if(encontrar){
=======
  achou = 0;
  while((!achou) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
=======
  encontrar = 0;
  while((!encontrar) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
>>>>>>> 496148a (Atualização na função recuperar fornecedor)
   if ((strcmp(forne->cnpj, apagar) == 0) && (forne->status == 'a')) {
     encontrar = 1;
   }
  }

<<<<<<< HEAD
  if(achou){
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
=======
  if(encontrar){
>>>>>>> 496148a (Atualização na função recuperar fornecedor)
    exibe_fornecedor(forne);
    printf("Desejar apagar o fornecedor (s/n)? ");
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      forne->status = 'i';
      fseek(arq, -1*sizeof(Fornecedor), SEEK_CUR);
      fwrite(forne, sizeof(Fornecedor), 1, arq);
<<<<<<< HEAD
<<<<<<< HEAD
      recuperado_sucesso();
=======
      deletado_sucesso();
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
=======
      recuperado_sucesso();
>>>>>>> 496148a (Atualização na função recuperar fornecedor)
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("O fornecedor %s não foi encontrado!\n", apagar);
  }
  fclose(arq);
  free(forne);
  getchar();
}

void recuperar_fornecedor(void){
 FILE* arq;
  Fornecedor* forne;
  int encontrar = 0;
  char resposta;
  char apagar[51];
  arq = fopen("files/fornecedor.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  do{
    printf("CNPJ da empresa : ");
    remove_enter(fgets(apagar, 50, stdin)); 
    if(!valida_cnpj(apagar)){
      printf("CNPJ inválido, tente novamente!\n");
    } 
  }while (!valida_cnpj(apagar));

  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  encontrar = 0;
  while((!encontrar) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
   if ((strcmp(forne->cnpj, apagar) == 0) && (forne->status == 'i')) {
     encontrar = 1;
   }
  }

  if(encontrar){
    exibe_fornecedor(forne);
<<<<<<< HEAD
<<<<<<< HEAD
    printf("Desejar recuperar o fornecedor (s/n)? ");
=======
    printf("Desejar apagar o fornecedor (s/n)? ");
>>>>>>> 496148a (Atualização na função recuperar fornecedor)
=======
    printf("Desejar recuperar o fornecedor (s/n)? ");
>>>>>>> 4f14f89 (Atualização)
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      forne->status = 'a';
      fseek(arq, -1*sizeof(Fornecedor), SEEK_CUR);
      fwrite(forne, sizeof(Fornecedor), 1, arq);
      recuperado_sucesso();
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("O fornecedor %s não foi encontrado!\n",apagar);
  }
  fclose(arq);
  free(forne);
  getchar();
}

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 496148a (Atualização na função recuperar fornecedor)
  // printf("CNPJ a ser pesquisado : ");
  // remove_enter(fgets(forne->cnpj, 50,stdin));
  // if()
  // while(!valida_cnpj(forne.cnpj)){
  //   printf("CNPJ inválido, tente novamente!\n");
  //   printf("CNPJ da empresa : ");
  //   scanf("%c",forne.cnpj);
  //   getchar();
  // } 

  // system("clear||cls");
  // printf("%s",forne.cnpj);
  // printf("\nEM DESENVOLVIMENTO ...\n");
  // getchar();

void buscar_fornecedor(void){
<<<<<<< HEAD
=======
void buscar_fornecedor(void){
>>>>>>> c41d87c (função buscar_forne criada)
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  char cnpj[51];
  printf("CNPJ a ser pesquisado: ");
<<<<<<< HEAD
<<<<<<< HEAD
  remove_enter(fgets(cnpj, 50, stdin));
  // remove_enter(cnpj);
=======
  fgets(cnpj, 50, stdin);
  remove_enter(cnpj);
>>>>>>> c41d87c (função buscar_forne criada)
=======
  remove_enter(fgets(cnpj, 50, stdin));
  // remove_enter(cnpj);
>>>>>>> 4f14f89 (Atualização)
  while(!valida_cnpj(cnpj)){
    printf("CNPJ inválido, tente novamente: ");
    fgets(cnpj, 50, stdin);
    remove_enter(cnpj);
  } 
<<<<<<< HEAD
<<<<<<< HEAD
  forne = buscar_forne(cnpj);
  exibe_fornecedor(forne);
  free(forne);
<<<<<<< HEAD
=======
  
>>>>>>> d09a6a5 (atualização em atualizar_fornecedor)
=======
  forne = buscar_ass(cnpj);
  exibe_Fornecedor(forne);
>>>>>>> c41d87c (função buscar_forne criada)
=======
  forne = buscar_forne(cnpj);
  exibe_fornecedor(forne);
>>>>>>> 1e3d165 (função buscar_fornecedor criada)
=======
>>>>>>> 6c03b36 (atualização em assinatura.c)
  getchar();
}

char tela_fornecedores(void){
  char op[11];
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> d2be5b9 (atualização)
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
    }
  }while(!ok);
<<<<<<< HEAD
<<<<<<< HEAD
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
      if((strcmp(forne->cnpj,cnpj)) == 0){
        return 1;
      }
    }
  }
  fclose(arq);
  free(forne);
  return 0;
}

void exibe_fornecedor(Fornecedor* forne){
  if((forne == NULL) || (forne->status == 'i')){
    printf("\n= = = Fornecedor Inexistente = = =\n");
  }else{
      printf("\n= = = Fornecedor Cadastrada = = =\n");
      printf("CNPJ: %s\n", forne->cnpj);
      printf("Nome da empresa: %s\n", forne->empresa);
      printf("CPF do dono da empresa: %s\n", forne->cpfempresa);
      printf("Telefone: %s\n", forne->telefoneempresa);
      printf("Email: %s\n", forne->emailempresa);
      if(forne->status =='a'){
        printf("Status: ativo\n");
      }else{
      printf("Status: Inativo");
      }}}


Fornecedor* buscar_forne(char *busca){
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
      if(((strcmp(forne->cnpj,busca)) == 0) && forne->status == 'a'){
        return forne;
      }
    }
  }
  fclose(arq);
  free(forne);
  return NULL;
}
=======
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
  scanf("%s", op); 
=======
>>>>>>> d2be5b9 (atualização)
  getchar();
=======
>>>>>>> d09a6a5 (atualização em atualizar_fornecedor)
  printf("\n");
  return op[0];
}
<<<<<<< HEAD
>>>>>>> 03ac2b5 (atualizações nos módulos)
=======

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
<<<<<<< HEAD
>>>>>>> a5cb62f (atualização em fornecedor)
=======

void exibe_fornecedor(Fornecedor* forne){
  if((forne == NULL) || (forne->status == 'i')){
    printf("\n= = = Fornecedor Inexistente = = =\n");
  }else{
      printf("\n= = = Fornecedor Cadastrada = = =\n");
      printf("CNPJ: %s\n", forne->cnpj);
      printf("Nome da empresa: %s\n", forne->empresa);
      printf("CPF do dono da empresa: %s\n", forne->cpfempresa);
      printf("Telefone: %s\n", forne->telefoneempresa);
      printf("Email: %s\n", forne->emailempresa);
      
  }
}
<<<<<<< HEAD
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
=======

Fornecedor* buscar_forne(char *busca){
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
      if(((strcmp(forne->cnpj,busca)) == 0) && forne->status == 'a'){
        return forne;
      }
    }
  }
  fclose(arq);
  free(forne);
  return NULL;
}
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> c41d87c (função buscar_forne criada)
=======

void apagar_forne_auto(char *cnpj){
  FILE* arq;
  Fornecedor* forne;
  int achou = 0;
  char resposta;
  arq = fopen("files/fornecedor.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }

  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  achou = 0;
  while((!achou) && (fread(forne, sizeof(Fornecedor), 1, arq))) {
   if ((strcmp(forne->cnpj, cnpj) == 0) && (forne->status == 'a')) {
     achou = 1;
   }
  }

  if(achou){
    fseek(arq, -1*sizeof(Fornecedor), SEEK_CUR);
    fwrite(forne, sizeof(Fornecedor), 1, arq);
  }
  fclose(arq);
  free(forne);
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
>>>>>>> 067f0ec (função apagar_forne_auto criada)
=======
>>>>>>> 1c410c6 (atualização)
