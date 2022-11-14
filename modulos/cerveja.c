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
  printf("Nome da cerveja (APENAS LETRAS): ");

  remove_enter(fgets(cer->nome, 20, stdin));
// BUG DE CADASTRAR E APAGAR E CADASTRAR NOVAMENTE COM MESMO CODIGO
  printf("Código da Cerveja: ");
  remove_enter(fgets(cer->codigo, 50, stdin));

  printf("Fornecedor: ");
  remove_enter(fgets(cer->fornecedor, 20, stdin));


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
  do{
  printf("Código da cerveja a ser atualizada: ");
  remove_enter(fgets(cer->codigo, 50, stdin));
  if(buscar__cer(cer->codigo) == NULL && (cer->status == 'i')){
    printf("Cerveja não encontrada em nosso sistema.\n");}
  }while (buscar__cer(cer->codigo) == NULL && cer->status == 'i');
  // else{
    printf("Achou");
    getchar();
    printf("Nome da cerveja (atualizar): ");
    remove_enter(fgets(cer->nome, 20, stdin));
    printf("Código da cerveja (atualizar): ");
    remove_enter(fgets(cer->codigo,50,stdin));
    printf("Nome do fornecedor(atualizar): ");
    remove_enter(fgets(cer->fornecedor,20,stdin)); // VERIFICAR SE FORNECEDOR EXISTE
    cer->status = 'a';
    fseek(arq, -1*sizeof(Cerveja), SEEK_CUR);
    fwrite(cer, sizeof(Cerveja), 1, arq);
    fclose(arq);
    free(cer);
    system("clear||cls");
    atualizado_sucesso();
    }

void apagar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  FILE* arq;
  arq = fopen("files/cerveja.dat", "r+b");
  char resposta;
do{
  printf("Código da cerveja a ser deletada: ");
  remove_enter(fgets(cer->codigo, 50, stdin));
  if(buscar__cer(cer->codigo) == NULL && (cer->status = 'i')){
    printf("Cerveja não encontrada em nosso sistema.\n");}
  }while ((buscar__cer(cer->codigo) == NULL && (cer->status = 'a')));
  // cer=buscar__cer(codigo);  Exibir cerveja com bug, resolver
  // exibe_cerveja(cer);
   printf("Desejar apagar a cerveja (s/n)? ");
  scanf("%c", &resposta);
  if(resposta == 's' || resposta == 'S'){
      cer->status = 'i';
      fseek(arq, -1*sizeof(Cerveja), SEEK_CUR);
      fwrite(cer, sizeof(Cerveja), 1, arq);
      // apagado_sucesso();}
      printf("Apagado ok");
  }
  else{
      printf("\nOs dados não foram alterados\n");}
      getchar();
  fclose(arq);
  free(cer);
  getchar();
}

void recuperar_cerveja(void){

  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  FILE* arq;
  arq = fopen("files/cerveja.dat", "r+b");
  char resposta;
do{
  printf("Código da cerveja a ser recuperada: ");
  remove_enter(fgets(cer->codigo, 50, stdin));
  if(buscar__cer(cer->codigo) == NULL){
    printf("Cerveja não encontrada em nosso sistema.\n");}
  }while ((buscar__cer(cer->codigo) == NULL && (cer->status = 'i')));
  // cer=buscar__cer(codigo);  Exibir cerveja com bug, resolver
  // exibe_cerveja(cer);
   printf("Desejar recuperar a cerveja (s/n)? ");
  scanf("%c", &resposta);
  if(resposta == 's' || resposta == 'S'){
      cer->status = 'i';
      fseek(arq, -1*sizeof(Cerveja), SEEK_CUR);
      fwrite(cer, sizeof(Cerveja), 1, arq);
      // recuperado_sucesso();}
      printf("Recuperado ok");
  }
  else{
      printf("\nOs dados não foram alterados\n");}
      getchar();
  fclose(arq);
  free(cer);
  getchar();
}

<<<<<<< HEAD
void buscar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
<<<<<<< HEAD
  printf("Nome a ser pesquisado (APENAS LETRAS): ");
<<<<<<< HEAD
  fgets(cer->nome, 20, stdin);
  printf("\n\n\n\n\tEM DESENVOLVIMENTO.\n\n\n\n");
  getchar();
}



=======
  remove_enter(fgets(cer->nome, 20, stdin));
=======
  char codigo[51];
  printf("Código a ser pesquisado: ");
  remove_enter(fgets(codigo, 50, stdin));
  // cer = buscar__cer(codigo);     NÃO ESTÁ FUNCIONANDO
  // exibe_cerveja(cer);            NÃO ESTÁ FUNCIONANDO
  free(cer);
  printf("\n EM DESENVOLVIMENTO ... \n");
  getchar();
>>>>>>> a4cd5c3 (Atualização)
}

=======
>>>>>>> 5a2109a (Atualização em funções)


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
      printf("Status: Inativo\n");
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
<<<<<<< HEAD
}
>>>>>>> 6ea1ece (Criação da função exibe cerveja)
=======
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
<<<<<<< HEAD
>>>>>>> a4cd5c3 (Atualização)
=======

void buscar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  char codigo[51];
  printf("Código a ser pesquisado: ");
  remove_enter(fgets(codigo, 50, stdin)); //VERIFICAÇÃO SE EXISTE NO ARQUIVO OU NÃO
  if ((buscar__cer(codigo) != NULL && (cer->status == 'i'))){
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

>>>>>>> 5a2109a (Atualização em funções)
