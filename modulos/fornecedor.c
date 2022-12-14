//      FUNÇÕES MÓDULO FORNECEDOR 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fornecedor.h"
#include "biblioteca.h"
#include "principal.h"

typedef struct fornecedor Fornecedor;
Fornecedor forne;

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
  remove_enter(fgets(forne->cnpj, 51, stdin)); 
  if(!valida_cnpj(forne->cnpj)){
    printf("CNPJ inválido, tente novamente!\n");
  }}
  while (!valida_cnpj(forne->cnpj));
  if(cnpj_esta(forne->cnpj) == 1){
    printf("\nCNPJ já cadastrado!\n");
  }else if(cnpj_esta(forne->cnpj) == 2){
    printf("\nCNPJ cadastrado, porém inativo!\n");
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

    do{
      printf("Telefone: ");
      remove_enter(fgets(forne->telefoneempresa, 50, stdin));
      if(telefone_esta_forne(forne->telefoneempresa)){
        telefone_ja_cadastrado();
      }
    }while(telefone_esta_forne(forne->telefoneempresa));

    do{
      do{
        printf("Email: ");
        remove_enter(fgets(forne->emailempresa, 50, stdin));
        if(!valida_email(forne->emailempresa)){
          printf("\nEmail Inválido, tente novamente!\n");
        }
      }while(!valida_email(forne->emailempresa));
      if(email_esta_forne(forne->emailempresa)){
        email_ja_cadastrado();
      }
    }while(email_esta_forne(forne->emailempresa));
    
    forne->status = 'a';
    system("clear||cls");
    cadastrado_sucesso();
    grava_fornecedor(forne);
  }
  free(forne);
  getchar();
}


void atualizar_fornecedor(void){
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
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

    do{
      printf("Telefone: ");
      remove_enter(fgets(forne->telefoneempresa, 50, stdin));
      if(telefone_esta_forne(forne->telefoneempresa)){
        telefone_ja_cadastrado();
      }
    }while(telefone_esta_forne(forne->telefoneempresa));

    do{
      do{
        printf("Email: ");
        remove_enter(fgets(forne->emailempresa, 50, stdin));
        if(!valida_email(forne->emailempresa)){
          printf("\nEmail Inválido, tente novamente!\n");
        }
      }while(!valida_email(forne->emailempresa));
      if(email_esta_forne(forne->emailempresa)){
        email_ja_cadastrado();
      }
    }while(email_esta_forne(forne->emailempresa));
    forne->status = 'a';
    fseek(arq, -1*sizeof(Fornecedor), SEEK_CUR);
    fwrite(forne, sizeof(Fornecedor), 1, arq);
    fclose(arq);
    free(forne);
    system("clear||cls");
    atualizado_sucesso();
  }else{
    printf("\nCNPJ não cadastrado!\n");
  }
  getchar();
}

void apagar_fornecedor(void){
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
   if ((strcmp(forne->cnpj, apagar) == 0) && (forne->status == 'a')) {
     encontrar = 1;
   }
  }

  if(encontrar){
    exibe_fornecedor(forne, forne->status);
    printf("Desejar apagar o fornecedor (s/n)? ");
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      forne->status = 'i';
      fseek(arq, -1*sizeof(Fornecedor), SEEK_CUR);
      fwrite(forne, sizeof(Fornecedor), 1, arq);
      recuperado_sucesso();
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
    exibe_fornecedor(forne, forne->status);
    printf("Desejar recuperar o fornecedor (s/n)? ");
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

void buscar_fornecedor(void){
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  char cnpj[51];
  printf("CNPJ a ser pesquisado: ");
  remove_enter(fgets(cnpj, 50, stdin));
  // remove_enter(cnpj);
  while(!valida_cnpj(cnpj)){
    printf("CNPJ inválido, tente novamente: ");
    remove_enter(fgets(cnpj, 50, stdin));
  } 
  forne = buscar_forne(cnpj);
  exibe_fornecedor(forne, forne->status);
  free(forne);
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
    }
  }while(!ok);
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
        if (forne->status == 'a'){
          return 1;}
        else if (forne->status == 'i'){
          return 2;}
        }
      }
    }

  fclose(arq);
  free(forne);
  return 0;
}


void exibe_fornecedor(Fornecedor* forne, char status){
  if(forne == NULL){
    printf("\n= = = Fornecedor não encontrado no sistema = = =\n");}
  else if((forne != NULL) && (forne->status == 'i')){
    printf("\n = = = Cadastro encontrado, porém inativo = = =");
    printf("\n = = =    Utilize a área de recuperar     = = =");
    printf("\n = = =    Caso deseja recuperá-lo         = = =\n");
    printf("\n = = =   CNPJ: %s\n", forne->cnpj);
    printf("\n = = =   Nome da empresa: %s\n", forne->empresa);
    printf("\n = = =   CPF do dono da empresa: %s\n", forne->cpfempresa);
    printf("\n = = =   Telefone: %s\n", forne->telefoneempresa);
    printf("\n = = =   Email: %s\n", forne->emailempresa);
  }
  else{
    printf("\n= = = Fornecedor Cadastrado = = =\n");
    printf("\n = = =   CNPJ: %s\n", forne->cnpj);
    printf("\n = = =   Nome da empresa: %s\n", forne->empresa);
    printf("\n = = =   CPF do dono da empresa: %s\n", forne->cpfempresa);
    printf("\n = = =   Telefone: %s\n", forne->telefoneempresa);
    printf("\n = = =   Email: %s\n", forne->emailempresa);
  }}


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
      if((strcmp(forne->cnpj,busca)) == 0){
        return forne;
      }
    }
  }
  fclose(arq);
  free(forne);
  return NULL;
}

int telefone_esta_forne(char *telefone){
  FILE* arq;
  Fornecedor *forne;
  arq = fopen("files/fornecedor.dat", "rb");
  if(arq == NULL){
    exit(1);
  }
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  while(!feof(arq)){
    if(fread(forne, sizeof(Fornecedor), 1, arq)){
      if(((strcmp(forne->telefoneempresa,telefone)) == 0)){
        return 1;
      }
    }
  }
  fclose(arq);
  free(forne);
  return 0;
}

int email_esta_forne(char *email){
  FILE* arq;
  Fornecedor *forne;
  arq = fopen("files/fornecedor.dat", "rb");
  if(arq == NULL){
    exit(1);
  }
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  while(!feof(arq)){
    if(fread(forne, sizeof(Fornecedor), 1, arq)){
      if(((strcmp(forne->emailempresa,email)) == 0)){
        return 1;
      }
    }
  }
  fclose(arq);
  free(forne);
  return 0;
}

void limpa_exibe_lista_forne(Fornecedor *novoForne, Fornecedor *lista, char status){
  if(quant_forne_cadas(status) == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
      "///                                                                        ///\n"
      "///                                                                        ///\n"
      "///                    Nenhum fornecedor cadastrado                        ///\n"
      "///                                                                        ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "\n");
  }else{
    novoForne = lista;
    int i = 0;
    while(novoForne != NULL){
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  FORNECEDOR %i                                                         ///", i+1);
      exibe_fornecedor(novoForne,'x');
      novoForne = novoForne->prox;
      i++;
    }
  }

  novoForne = lista;
  while(lista != NULL){
    lista = lista->prox;
    free(novoForne);
    novoForne = lista;
  }
}

int quant_forne_cadas(char status){
  FILE* arq;
  Fornecedor *forne;
  arq = fopen("files/fornecedor.dat","r+b");
  if(arq == NULL){
    exit(1);
  }
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  int cont_forne = 0;
  while(fread(forne, sizeof(Fornecedor), 1, arq) != 0){// LÊ A QUANTIDADE DE STRUCTS DO ARQUIVO FORNECEDOR
    if(forne->status == status){
      cont_forne++;
    }
  }
  fclose(arq);
  return cont_forne;
}