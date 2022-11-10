//Biblioteca do Módulo Assinaturas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assinatura.h"
#include "biblioteca.h"

typedef struct assinatura Assinatura;
Assinatura ass;

void grava_assinatura(Assinatura* ass){
    FILE* fp;
    fp = fopen("files/assinatura.dat","ab");
    if(fp == NULL){
      fp = fopen("files/assinatura.dat","a");
    }
    fwrite(ass, sizeof(Assinatura), 1, fp);
    fclose(fp);
}


char tela_assinaturas(void){
  char op;
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
  printf("\n");
  return op;
}


void cadastrar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  printf("Nome do Cliente (APENAS LETRAS): ");
  fgets(ass->nome, 100, stdin);
  remove_enter(ass->nome);
  while(!valida_nome(ass->nome)){
    printf("Nome inválido, tente novamente!\n");
    printf("Nome: ");
    fgets(ass->nome, 100, stdin);
    remove_enter(ass->nome);
  } 
  
  do{
    printf("CPF: ");
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
    valida_cpf(ass->cpf);
    if (!valida_cpf(ass->cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass->cpf));

  printf("Endereço: ");  
  fgets(ass->endereco, 100, stdin);

  printf("Telefone: ");
  fgets(ass->telefone, 50, stdin);

  printf("Email: ");
  fgets(ass->email, 50, stdin);
  remove_enter(ass->email);
  while(!valida_email(ass->email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    fgets(ass->email, 50, stdin);
    remove_enter(ass->email);
  }

  printf("Código da Assinatura: ");
  fgets(ass->codigo, 50, stdin);

  printf("\nNível da Assinatura:\n");
  printf("Nível 1. 2 Cervejas\n");
  printf("Nível 2. 4 Cervejas\n");
  printf("Nível 3. 8 Cervejas\n");
  printf("Informe o nível (APENAS NÚMEROS): ");
  fgets(ass->nivel, 10, stdin);

  ass->status = 'a'; // a = ATIVADO e i = INATIVO

  grava_assinatura(ass);

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
}

void atualizar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  printf("Código da assinatura a atualizar: ");
  scanf("%[A-Za-z0-9]", ass->codigo);
  getchar();

  printf("Nome do Cliente (APENAS LETRAS): ");
  fgets(ass->nome, 100, stdin);
  remove_enter(ass->nome);
  while(!valida_nome(ass->nome)){
    printf("Nome inválido, tente novamente!\n");
    printf("Nome: ");
    fgets(ass->nome, 100, stdin);
    remove_enter(ass->nome);
  } 

  do{
    printf("CPF: ");
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
    valida_cpf(ass->cpf);
    if (!valida_cpf(ass->cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass->cpf));

  printf("Endereço: ");  
  fgets(ass->endereco, 100, stdin);

  printf("Telefone: ");
  fgets(ass->telefone, 50, stdin);

  printf("Email: ");
  fgets(ass->email, 50, stdin);
  remove_enter(ass->email);
  while(!valida_email(ass->email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    fgets(ass->email, 50, stdin);
    remove_enter(ass->email);
  } 

  printf("Código da Assinatura: ");
  fgets(ass->codigo, 50, stdin);

  printf("\nNível da Assinatura:\n");
  printf("Nível 1. 2 Cervejas\n");
  printf("Nível 2. 4 Cervejas\n");
  printf("Nível 3. 8 Cervejas\n");
  printf("Informe o nível (APENAS NÚMEROS): ");
  fgets(ass->nivel, 10, stdin);

  ass->status = 'a';

  grava_assinatura(ass);

  system("clear||cls");
  atualizado_sucesso();
  getchar();
}

Assinatura* buscar_ass(char *busca){
  FILE* arq;
  Assinatura *ass;
  arq = fopen("files/assinatura.dat", "rb");
  if(arq == NULL){
    //arq = fopen("files/assinatura.dat", "a");
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  while(!feof(arq)){
    if(fread(ass, sizeof(Assinatura), 1, arq)){
      if(((strcmp(ass->cpf,busca)) == 0) && ass->status == 'a'){
        return ass;
      }
    }
  }
  fclose(arq);
  return NULL;
}

void exibe_assinatura(Assinatura* ass){
  if((ass == NULL) || (ass->status == 'i')){
        printf("\n= = = Assinatura Inexistente = = =\n");
    }else{
        printf("\n= = = Assinatura Cadastrada = = =\n");
        printf("Nome: %s\n", ass->nome);
        printf("CPF: %s\n", ass->cpf);
        printf("Endereço: %s\n", ass->endereco);
        printf("Telefone: %s\n", ass->telefone);
        printf("Email: %s\n", ass->email);
        printf("Código: %s\n", ass->codigo);
        printf("Nível: %s\n", ass->nivel);
    }
}


void buscar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  char cpf[51];
  printf("CPF a ser pesquisado: ");
  fgets(cpf, 50, stdin);
  remove_enter(cpf);
  while(!valida_cpf(cpf)){
    printf("CPF inválido, tente novamente: ");
    fgets(cpf, 50, stdin);
    remove_enter(cpf);
  } 
  ass = buscar_ass(cpf);
  exibe_assinatura(ass);
  
  getchar();
}

void apagar_assinatura(void){
  FILE* arq;
  Assinatura* ass;
  int achou = 0;
  char resposta;
  char apagar[51];
  arq = fopen("files/assinatura.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
    do{
    printf("\n\nInforme o CPF a ser apagado: ");
    fgets(apagar, 50, stdin);
    remove_enter(apagar);
    valida_cpf(apagar);
    if (!valida_cpf(apagar)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(apagar));
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  achou = 0;
  while((!achou) && (fread(ass, sizeof(Assinatura), 1, arq))) {
   if ((strcmp(ass->cpf, apagar) == 0) && (ass->status == 'a')) {
     achou = 1;
   }
  }

  if(achou){
    exibe_assinatura(ass);
    getchar();
    printf("Desejar apagar a assinatura (s/n)? ");
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      ass->status = 'i';
      fseek(arq, -1*sizeof(Assinatura), SEEK_CUR);
      fwrite(ass, sizeof(Assinatura), 1, arq);
      deletado_sucesso();
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("A assinatura %s não foi encontrada!\n", apagar);
  }
  fclose(arq);
  free(ass);
}

void recuperar_assinatura(void){ // FUNÇÃO COM BUGS, NÃO SEI SE TÁ RECUPERANDO MESMO
                                // E MOSTRANDO MENSAGEM QUE NÃO ESTÁ, MESMO ESTANDO
  // Assinatura* ass;
  // ass = (Assinatura*) malloc(sizeof(Assinatura));
  // printf("Nome a ser pesquisado (APENAS LETRAS): ");
  // fgets(ass->nome, 100, stdin);
  // remove_enter(ass->nome);
  // while(!valida_nome(ass->nome)){
  //   printf("Nome inválido, tente novamente!\n");
  //   printf("Nome: ");
  //   fgets(ass->nome, 100, stdin);
  //   remove_enter(ass->nome);
  // } 
  
  // ass->status = 'a';
  // grava_assinatura(ass);

  // system("clear||cls");

  // printf("%s",ass->nome);
  // printf("\nEM DESENVOLVIMENTO ...\n");
  // getchar();

  FILE* arq;
  Assinatura* ass;
  int achou = 0;
  char resposta;
  char recuperar[51];
  arq = fopen("files/assinatura.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  do{
    printf("\n\nInforme o CPF a ser recuperado: ");
    fgets(recuperar, 50, stdin);
    remove_enter(recuperar);
    valida_cpf(recuperar);
    if (!valida_cpf(recuperar)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(recuperar));
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  achou = 0;
  while((!achou) && (fread(ass, sizeof(Assinatura), 1, arq))) {
   if ((strcmp(ass->cpf, recuperar) == 0) && (ass->status == 'i')) {
     achou = 1;
   }
  }

  if(achou){
    exibe_assinatura(ass);
    getchar();
    printf("Desejar recuperar a assinatura (s/n)? ");
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      ass->status = 'a';
      grava_assinatura(ass);
      recuperado_sucesso();
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("A assinatura %s não foi encontrada!\n", recuperar);
  }
  fclose(arq);
  free(ass);
}

