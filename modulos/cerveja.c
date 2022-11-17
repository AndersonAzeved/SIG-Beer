// Bibloteca módulo cerveja

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cerveja.h"
#include "biblioteca.h"
#include "principal.h"
#include "fornecedor.h"

void arquivo_cerveja(Cerveja* cer){
    FILE* fp;
    fp = fopen("files/cerveja.dat","ab");
    if(fp == NULL){
      fp = fopen("files/cerveja.dat","a");
    }
    fwrite(cer, sizeof(Cerveja), 1, fp);
    fclose(fp);
}

typedef struct cerveja Cerveja;
Cerveja cer;

char tela_cervejas(void) {
  char op[11];
  int ok = 0;
  do{
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
      system("clear||cls");
      tela_opcao_invalida();
      system("clear||cls");
    }
  }while(!ok);
  printf("\n");
  return op[0];
}

void grava_cerveja(Cerveja* cer){
    FILE* fp;
    fp = fopen("files/cerveja.dat","ab");
    if(fp == NULL){
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    fwrite(cer, sizeof(Cerveja), 1, fp);
    fclose(fp);
}

void cadastrar_cerveja(){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Nome da Cerveja (APENAS LETRAS): ");
  remove_enter(fgets(cer->nome, 50, stdin));
  do{
    printf("Código da cerveja para cadastro: ");
    remove_enter(fgets(cer->codigo, 50, stdin));
    if(buscar__cer(cer->codigo) == NULL){
      printf("Cerveja não encontrada em nosso sistema.\n");}
    else if((buscar__cer(cer->codigo)) != NULL && (cer->status =='i')){
      printf("Código encontrado em nosso sistema, porém inativo\nUtilize a área de recuperar cadastro.\n");}
  }while ((buscar__cer(cer->codigo) != NULL));
// BUG DE CADASTRAR E APAGAR E CADASTRAR NOVAMENTE COM MESMO CODIGO
  do{
    printf("CNPJ do fornecedor: ");
    remove_enter(fgets(cer->fornecedor, 50, stdin));
    if(!valida_cnpj(cer->fornecedor)){
      printf("CNPJ inválido, tente novamente!\n");
    }}
  while (!valida_cnpj(cer->fornecedor));
  if(cnpj_esta(cer->fornecedor)){
    cer->status = 'a';
    grava_cerveja(cer);
    free(cer);
    system("clear||cls");
    cadastrado_sucesso();
  }else{
    printf("\nFornecedor não cadastrado, retorne e realize o cadastro!");
  }
  
  getchar();
  
}

void atualizar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  FILE* arq;
  arq = fopen("files/cerveja.dat", "r+b");
  do{
    printf("Código da cerveja a ser atualizada: ");
    remove_enter(fgets(cer->codigo, 50, stdin));
    if(buscar__cer(cer->codigo) == NULL && (cer->status == 'i')){
      printf("Cerveja não encontrada em nosso sistema.\n");}
    else if((buscar__cer(cer->codigo)) != NULL && (cer->status =='i')){
      printf("Código encontrado em nosso sitema, porém inativo");}
  }while ((buscar__cer(cer->codigo) == NULL) || (cer->status == 'i'));
  printf("Achou");
  getchar();
  printf("Nome da cerveja (atualizar): ");
  remove_enter(fgets(cer->nome, 50, stdin));
  do{
    printf("CNPJ do fornecedor (atualizar): ");
    remove_enter(fgets(cer->fornecedor, 50, stdin));
    if(!valida_cnpj(cer->fornecedor)){
      printf("CNPJ inválido, tente novamente!\n");
    }}
  while (!valida_cnpj(cer->fornecedor));
  if(cnpj_esta(cer->fornecedor)){
    cer->status = 'a';
    fseek(arq, -1*sizeof(Cerveja), SEEK_CUR);
    fwrite(cer, sizeof(Cerveja), 1, arq);
    fclose(arq);
    free(cer);
    system("clear||cls");
    atualizado_sucesso();
    getchar();
  }else{
    printf("\nFornecedor não cadastrado, retorne e realize o cadastro!");
  }
}

void apagar_cerveja(void){
  FILE* arq;
  Cerveja* cer;
  int encontrar = 0;
  char resposta;
  char apagar[51];
  arq = fopen("files/cerveja.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
    printf("Código da cerveja : ");
    remove_enter(fgets(apagar, 50, stdin)); 

  cer = (Cerveja*) malloc(sizeof(Cerveja));
  encontrar = 0;
  while((!encontrar) && (fread(cer, sizeof(Cerveja), 1, arq))) {
   if ((strcmp(cer->codigo, apagar) == 0) && (cer->status == 'a')) {
     encontrar = 1;
   }
  }

  if(encontrar){
    exibe_cerveja(cer,cer->status);
    printf("Desejar apagar o fornecedor (s/n)? ");
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      cer->status = 'i';
      fseek(arq, (-1)*sizeof(Cerveja), SEEK_CUR);
      fwrite(cer, sizeof(Cerveja), 1, arq);
      deletado_sucesso();
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("O fornecedor %s não foi encontrado!\n", apagar);
  }
  fclose(arq);
  free(cer);
  getchar();
}


void recuperar_cerveja(void){
 FILE* arq;
  Cerveja* cer;
  int encontrar = 0;
  char resposta;
  char apagar[51];
  arq = fopen("files/cerveja.dat", "r+b");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("Código da cerveja (recuperar) : ");
  remove_enter(fgets(apagar, 50, stdin));
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  encontrar = 0;
  while((!encontrar) && (fread(cer, sizeof(Cerveja), 1, arq))) {
   if ((strcmp(cer->codigo, apagar) == 0) && (cer->status == 'i')) {
     encontrar = 1;
   }
  }

  if(encontrar){
    exibe_cerveja(cer,cer->status);
    printf("Desejar recuperar o fornecedor (s/n)? ");
    scanf("%c", &resposta);
    if(resposta == 's' || resposta == 'S'){
      cer->status = 'a';
      fseek(arq, (-1)*sizeof(Cerveja), SEEK_CUR);
      fwrite(cer, sizeof(Cerveja), 1, arq);
      recuperado_sucesso();
    }else{
      printf("\nOs dados não foram alterados\n");
    }
  }else{
    printf("O fornecedor %s não foi encontrado!\n",apagar);
  }
  fclose(arq);
  free(cer);
  getchar();
}


void exibe_cerveja(Cerveja* cer, char status){
  if(cer == NULL){
    printf("\n= = = Cerveja não cadastrada = = =\n");}
  else if((cer != NULL) && (cer->status == 'i')){
    printf("\n = = = Cadastro encontrado, porém inativo = = =\n = = = Utilize a área de recuperar = = =\n = = = Caso queira recuperálo = = =\n");
      printf("Nome da cerveja: %s\n", cer->nome);
      printf("Código da cerveja: %s\n", cer->codigo);
      printf("Fornecedor da cerveja: %s\n",cer->fornecedor);
      if(cer->status == 'a'){
        printf("Status: ativo\n");}
      else{
        printf("Status: inativo\n");
      }
  }
  else{
      printf("\n= = = Cerveja Cadastrada = = =\n");
      printf("Nome da cerveja: %s\n", cer->nome);
      printf("Código da cerveja: %s\n", cer->codigo);
      printf("Fornecedor da cerveja: %s\n",cer->fornecedor);
      if(cer->status == 'a'){
        printf("Status: ativo\n");}
      else{
       printf("Status: inativo\n");}
      }}

Cerveja* buscar__cer(char *busca){
  FILE* arq;
  Cerveja *cer;
  arq = fopen("files/cerveja.dat", "rb");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  while(!feof(arq)){
    if(fread(cer, sizeof(Cerveja), 1, arq)){
      if((strcmp(cer->codigo,busca)) == 0){
        // .....
        return cer;
      }
    }
  }
  fclose(arq);
  free(cer);
  return NULL;
}


int cer_esta(char *codigo){
  FILE* arq;
  Cerveja *cer;
  arq = fopen("files/cerveja.dat", "rb");
  if(arq == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  while(!feof(arq)){
    if(fread(cer, sizeof(Cerveja), 1, arq)){
      if((strcmp(cer->codigo,codigo)) == 0){
        return 1;
      }
    }
  }
  fclose(arq);
  free(cer);
  return 0;
}

// void buscar_cerveja(void){
//   Cerveja* cer;
//   cer = (Cerveja*) malloc(sizeof(Cerveja));
//   char codigo[51];
//   printf("Código a ser pesquisado: ");
//   remove_enter(fgets(codigo, 50, stdin)); //VERIFICAÇÃO SE EXISTE NO ARQUIVO OU NÃO
//   // if ((buscar__cer(codigo) != NULL && cer->status == 'a')){
//     if (buscar__cer(codigo) != NULL){
//     cer=buscar__cer(codigo);
//     exibe_cerveja(cer,cer->status);}
//     else{
//       printf("Não encontrado.\n");}
//   getchar();   
//   free(cer);
// }

void buscar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  char codigo[51];
  // do{
    printf("Código da cerveja a ser pesquisado: ");
    remove_enter(fgets(codigo, 50, stdin));
  while((buscar__cer(codigo)) == NULL){
    printf("Cerveja não encontrada no sistema, tente novamente\n");
    printf("Código da cerveja a ser pesquisado: ");
    remove_enter(fgets(codigo, 50, stdin));
  }
  cer = buscar__cer(codigo);
  exibe_cerveja(cer, cer->status);
  free(cer);
  getchar();
}
