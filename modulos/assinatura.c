//Biblioteca do Módulo Assinaturas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "assinatura.h"
#include "biblioteca.h"
#include "principal.h"
#include "cerveja.h"

typedef struct assinatura Assinatura;
Assinatura ass;

void grava_assinatura(Assinatura* ass){
    FILE* fp;
    fp = fopen("files/assinatura.dat","ab");
    if(fp == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    fwrite(ass, sizeof(Assinatura), 1, fp);
    fclose(fp);
}


char tela_assinaturas(void){
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


void cadastrar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  do{
    printf("CPF: ");
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
    valida_cpf(ass->cpf);
    if (!valida_cpf(ass->cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass->cpf));
  if(cpf_esta(ass->cpf) == 1){
    printf("\nCPF já cadastrado!\n");
  }else if(cpf_esta(ass->cpf) == 2){
    printf("\nCPF cadastrado, porém inativo, recupere-o no módulo de recuperação.\n");
  }else{
    printf("Nome do Cliente (APENAS LETRAS): ");
    fgets(ass->nome, 100, stdin);
    remove_enter(ass->nome);
    while(!valida_nome(ass->nome)){
      printf("Nome inválido, tente novamente!\n");
      printf("Nome: ");
      fgets(ass->nome, 100, stdin);
      remove_enter(ass->nome);
    } 
    
    printf("Endereço: ");  
    remove_enter(fgets(ass->endereco, 100, stdin));

    printf("Telefone: ");
    remove_enter(fgets(ass->telefone, 50, stdin));

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
    remove_enter(fgets(ass->codigo, 50, stdin));

    ass->nivel = escolhe_nivel();

    ass->status = 'a'; // a = ATIVADO e i = INATIVO

    grava_assinatura(ass);

    system("clear||cls");
    cadastrado_sucesso();
  }

  free(ass);
  getchar();
}

void atualizar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  char cpf[51];
  do{
    printf("CPF: ");
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
    valida_cpf(ass->cpf);
    if (!valida_cpf(ass->cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass->cpf));

  strcpy(cpf, ass->cpf);

  if(cpf_esta(ass->cpf) == 1){
    FILE* arq;
    int achou = 0;
    arq = fopen("files/assinatura.dat", "r+b");
    if(arq == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar o programa...\n");
      exit(1);
    }
    while((!achou) && (fread(ass, sizeof(Assinatura), 1, arq))) {
      if ((strcmp(ass->cpf, cpf) == 0) && (ass->status == 'a')) {
        achou = 1;
      }
    }

    printf("Nome do Cliente (APENAS LETRAS): ");
    fgets(ass->nome, 100, stdin);
    remove_enter(ass->nome);
    while(!valida_nome(ass->nome)){
      printf("Nome inválido, tente novamente!\n");
      printf("Nome: ");
      fgets(ass->nome, 100, stdin);
      remove_enter(ass->nome);
    } 

    printf("Endereço: ");  
    remove_enter(fgets(ass->endereco, 100, stdin));

    printf("Telefone: ");
    remove_enter(fgets(ass->telefone, 50, stdin));

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
    remove_enter(fgets(ass->codigo, 50, stdin));

    ass->nivel = escolhe_nivel();

    ass->status = 'a';

    fseek(arq, -1*sizeof(Assinatura), SEEK_CUR);
    fwrite(ass, sizeof(Assinatura), 1, arq);
    fclose(arq);
    atualizado_sucesso();
  }else if(cpf_esta(ass->cpf) == 2){
    printf("\nCPF cadastrado, porém inativo, recupere-o no módulo de recuperação.\n");
  }else{
    printf("A assinatura %s não foi encontrada!\n", ass->cpf);
  }
  free(ass);
  getchar();
  system("clear||cls");
  
}

Assinatura* buscar_ass(char *busca){
  FILE* arq;
  Assinatura *ass;
  arq = fopen("files/assinatura.dat", "rb");
  if(arq == NULL){
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

void exibe_assinatura(Assinatura* ass, char status){ // status = status contrário
  if((ass == NULL) || (ass->status == status)){ // ex.: status = 'i', a função só 
                                                //exibe os cadastros ativos
        printf("\n= = = Assinatura Inexistente = = =\n");
  }else{
      printf("\n= = = Assinatura Cadastrada = = =\n");
      printf("Nome: %s\n", ass->nome);
      printf("CPF: %s\n", ass->cpf);
      printf("Endereço: %s\n", ass->endereco);
      printf("Telefone: %s\n", ass->telefone);
      printf("Email: %s\n", ass->email);
      printf("Código: %s\n", ass->codigo);
      printf("Nível: %c\n", ass->nivel);
      printf("Cerveja do Mês: %s\n", ass->cerveja_mes);
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
  exibe_assinatura(ass, 'i');
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
    exibe_assinatura(ass, 'i');
    printf("Desejar apagar a assinatura (s/n)? ");
    scanf("%c", &resposta);
    getchar();
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
  getchar();
}

void recuperar_assinatura(void){ // FUNÇÃO COM BUGS, NÃO SEI SE TÁ RECUPERANDO MESMO
                                // E MOSTRANDO MENSAGEM QUE NÃO ESTÁ, MESMO ESTANDO
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
    exibe_assinatura(ass, 'a');
    printf("Desejar recuperar a assinatura (s/n)? ");
    scanf("%c", &resposta);
    getchar();
    if(resposta == 's' || resposta == 'S'){
      ass->status = 'a';
      fseek(arq, -1*sizeof(Assinatura), SEEK_CUR);
      fwrite(ass, sizeof(Assinatura), 1, arq);
      recuperado_sucesso();
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("A assinatura %s não foi encontrada!\n", recuperar);
  }
  fclose(arq);
  getchar();
}

int cpf_esta(char *cpf){
  FILE* arq;
  Assinatura *ass;
  arq = fopen("files/assinatura.dat", "rb");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  while(!feof(arq)){
    if(fread(ass, sizeof(Assinatura), 1, arq)){
      if(((strcmp(ass->cpf,cpf)) == 0)){
        if(ass->status == 'a'){
          return 1;
        }else if(ass->status == 'i'){
          return 2;
        }
        
      }
    }
  }
  fclose(arq);
  free(ass);
  return 0;
}

char escolhe_nivel(void){
 char nivel[11];
  int ok = 0;
  do{
    printf("\nNível da Assinatura:\n");
    printf("Nível 1. 2 Cervejas\n");
    printf("Nível 2. 4 Cervejas\n");
    printf("Nível 3. 8 Cervejas\n");
    printf("Informe o nível (APENAS NÚMEROS): ");
    fgets(nivel, 10, stdin);
    remove_enter(nivel);
    if((strlen(nivel) == 1) && (nivel[0] >= '1' && nivel[0] <= '3')){
      ok = 1;
    }else{
      ok = 0;
    }    
  }while(!ok);
  return nivel[0];
}

char* sortear_cerveja(void){
  FILE* arqcer;
  Cerveja *cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  arqcer = fopen("files/cerveja.dat","r+b");
  if(arqcer == NULL){
    exit(1);
  }
  int num = 0;
  if(quant_cervejas_cadas() == 1){
    num = 1;
  }else{
    num = sorteio_numero(quant_cervejas_cadas());
  }
  int cont2 = 0;        
  while(cont2 != num){
    fread(cer, sizeof(Cerveja), 1, arqcer);
    cont2++;
  }
  char* cerveja;
  cerveja = (char*) malloc(sizeof(char)*(strlen(cer->nome)));
  cerveja = cer->nome;  
  return cerveja;
  free(cer);
}

int quant_cervejas_cadas(void){
  FILE* arqcer;
  Cerveja *cer;
  arqcer = fopen("files/cerveja.dat","r+b");
  if(arqcer == NULL){
    exit(1);
  }
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  int cont_cer = 0;
  while(fread(cer, sizeof(Cerveja), 1, arqcer) != 0){// LÊ A QUANTIDADE DE STRUCTS DO ARQUIVO CERVEJA
    cont_cer++;
  }
  fclose(arqcer);
  return cont_cer;
}

// Arquivo Data_sorteio Vazio: Add a data e faço o sorteio
// Arquivo Data_sorteio preenchido: Comparar data, ver se é pra atualizar, atualize e realizar sorteio 
// Arquivo Assinatura: Atualizar a cerveja do mês

void preenche_data_sorteio(void){
  int status = quant_cervejas_cadas();
  if(status == 0){
    printf("POR FAVOR, REALIZE O CADASTRO DE CERVEJAS\n");
  }else{
    int data[3];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    data[0] = tm.tm_year + 1900;
    data[1] = tm.tm_mon + 1;
    data[2] =tm.tm_mday;

    //int mes_atual = data[1];
    int mes_atual = 2;

    FILE* arq;
    Data_sorteio *dts;
    arq = fopen("files/data_sorteio.dat","r+b");
    if(arq == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    dts = (Data_sorteio*) malloc(sizeof(Data_sorteio));
    char *cerveja;
    cerveja = sortear_cerveja();
    if(fread(dts, sizeof(Data_sorteio), 1, arq) == 1){
      if(dts->codigo == 1){
        if(mes_atual != dts->mes){
          dts->codigo = 1;
          dts->ano = data[0];
          dts->mes = data[1];
          dts->dia = data[2];
          strcpy(dts->cerveja_sort, cerveja);
          fseek(arq, -1*sizeof(Data_sorteio), SEEK_CUR);
          fwrite(dts, sizeof(Data_sorteio), 1, arq);
        }
      }
    }else{
      fclose(arq);
      arq = fopen("files/data_sorteio.dat","r+b");
      if(arq == NULL){
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
      }
      dts->codigo = 1;
      dts->ano = data[0];
      dts->mes = data[1];
      dts->dia = data[2];
      strcpy(dts->cerveja_sort, cerveja);
      fwrite(dts, sizeof(Data_sorteio), 1, arq);
    }
    fclose(arq);
    free(dts);
  }    
}


void preenche_assinaturas(void){
  char *cerveja_ass;
  char *cerveja_sorteada;
  FILE* arqass;
  Assinatura *ass;
  arqass = fopen("files/assinatura.dat","r+b");
  if(arqass == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  int j = 0;
  while(j != 1){
    fread(ass, sizeof(Data_sorteio), 1, arqass);
    j++;
  }
  cerveja_ass = (char*) malloc(sizeof(char)*strlen(ass->cerveja_mes));
  cerveja_ass = ass->cerveja_mes;
  fclose(arqass);
  
  FILE* arqdts;
  Data_sorteio *dts;
  arqdts = fopen("files/data_sorteio.dat","r+b");
  if(arqdts == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  dts = (Data_sorteio*) malloc(sizeof(Data_sorteio));
  int i = 0;
  while(i != 1){
    fread(dts, sizeof(Data_sorteio), 1, arqdts);
    i++;
  }
  cerveja_sorteada = (char*) malloc(sizeof(char)*strlen(dts->cerveja_sort));
  cerveja_sorteada = dts->cerveja_sort;
  
  arqass = fopen("files/assinatura.dat","r+b");
  if(arqass == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  if(cerveja_sorteada != cerveja_ass){
    while(fread(ass, sizeof(Assinatura), 1, arqass)){      
      fseek(arqass, -1*sizeof(Assinatura), SEEK_CUR);
      strcpy(ass->cerveja_mes, cerveja_sorteada);
      fwrite(ass, sizeof(Assinatura), 1, arqass);
    }
  }
  fclose(arqdts);
  free(dts);
  fclose(arqass);
  free(ass);
}

int sorteio_numero(int tam){
  int num;
  do{
    srand(time(NULL));
    num = 0 + rand()%tam;
  }while(num < 0);
  return num;
}