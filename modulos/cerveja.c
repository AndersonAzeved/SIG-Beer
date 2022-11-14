// Bibloteca módulo cerveja

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cerveja.h"
#include "biblioteca.h"
#include "principal.h"

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

void cadastrar_cerveja(){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Código da cerveja (APENAS LETRAS): ");
  // scanf("%[A-Z a-z]",cer.nome);
  fgets(cer->codigo, 20, stdin);
  remove_enter(cer->nome);

  printf("Código da Cerveja: ");
  fgets(cer->codigo, 50, stdin);
  remove_enter(cer->codigo);

  printf("Fornecedor: ");
  fgets(cer->fornecedor, 20, stdin);
  remove_enter(cer->fornecedor);

  cer->status = 'a';
  arquivo_cerveja(cer);

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
  
}

void atualizar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  FILE* arq;
  arq = fopen("files/cerveja.dat", "r+b");
  char codigo[51];
  do{
  printf("Código da cerveja a ser atualizada: ");
  remove_enter(fgets(cer->codigo, 50, stdin));
  if(buscar__cer(cer->codigo) == NULL){
    printf("Cerveja não encontrada em nosso sistema.\n");}
  }while (buscar__cer(cer->codigo) == NULL);
  // else{
    printf("Achou");
    getchar();
    printf("Nome da cerveja (atualizar): ");
    remove_enter(fgets(cer->nome, 20, stdin));
    printf("Código da cerveja (atualizar): ");
    remove_enter(fgets(cer->codigo,50,stdin));
    printf("Nome do fornecedor(atualizar): ");
    remove_enter(fgets(cer->fornecedor,20,stdin));
    cer->status = 'a';
    fseek(arq, -1*sizeof(Cerveja), SEEK_CUR);
    fwrite(cer, sizeof(Cerveja), 1, arq);
    fclose(arq);
    free(cer);
    system("clear||cls");
    atualizado_sucesso();//}
    }

//   printf("Fornecedor: ");
//   fgets(cer->fornecedor, 20, stdin);
//   remove_enter(cer->fornecedor);

//   arquivo_cerveja(cer);

//   system("clear||cls");
//   atualizado_sucesso();
//   getchar();
  
// }

void apagar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("NOME: ");
  fgets(cer->nome, 20, stdin);
  remove_enter(cer->nome);
  cer->status = 'i';
  arquivo_cerveja(cer);
  printf("\n\n\n\n\tEM DESENVOLVIMENTO.\n\n\n\n");
  getchar();
}

void recuperar_cerveja(void){

  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  fgets(cer->nome, 20, stdin);
  remove_enter(cer->nome);
  cer->status = 'a';
  arquivo_cerveja(cer);
  printf("\n\n\n\n\tEM DESENVOLVIMENTO.\n\n\n\n");
  getchar();
  
}


void exibe_cerveja(Cerveja* cer){
  if((cer == NULL) || (cer->status == 'i')){
    printf("\n= = = Cerveja não cadastrada = = =\n");
  }else{
      printf("\n= = = Cerveja Cadastrada = = =\n");
      printf("Nome da cerveja: %s\n", cer->nome);
      printf("Código da cerveja: %s\n", cer->codigo);
      printf("Fornecedor da cerveja: %s\n",cer->fornecedor);
      if(cer->status =='a'){
        printf("Status: ativo\n");
      }else{
      printf("Status: Inativo");
      }}}

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
      if(((strcmp(cer->codigo,busca)) == 0) && cer->status == 'a'){
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

void buscar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  char codigo[51];
  printf("Código a ser pesquisado: ");
  remove_enter(fgets(codigo, 50, stdin)); //VERIFICAÇÃO SE EXISTE NO ARQUIVO OU NÃO
  if (buscar__cer(codigo) != NULL){
    cer=buscar__cer(codigo);
    exibe_cerveja(cer);}
    else{
      printf("Não encontrado.\n");}
  // exibe_cerveja(cer);  
  // cer = buscar__cer(codigo);
  // exibe_cerveja(cer);     
  free(cer);
  getchar();
}

