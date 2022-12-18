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
    if (cer_esta(cer->codigo) ==1){
      ja_cadastrado();
    }
    else if(cer_esta(cer->codigo) == 2){
      cdt_mas_inativo();
      }
  }while ((cer_esta(cer->codigo) != 0));
  do{
    printf("CNPJ do fornecedor: ");
    remove_enter(fgets(cer->fornecedor, 50, stdin));
    if(!valida_cnpj(cer->fornecedor)){
      printf("CNPJ inválido, tente novamente!\n");
    if(cnpj_esta(cer->fornecedor) == 2){
      fornecedor_inativo();}
    else if(cnpj_esta(cer->fornecedor) ==0){
      fornecedor_ncadastrado();}
    }}
  while ((!valida_cnpj(cer->fornecedor) || (cnpj_esta(cer->fornecedor) != 1)));
  if(cnpj_esta(cer->fornecedor)){
    cer->status = 'a';
    grava_cerveja(cer);
    free(cer);
    system("clear||cls");
    cadastrado_sucesso();
  }else{
    fornecedor_ncadastrado();
  }
  printf("APERTE QUALQUER TECLA");
  getchar();
  system("clear||cls");
}


void atualizar_cerveja(void){
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  FILE* arq;
  arq = fopen("files/cerveja.dat", "r+b");
  do{
    printf("Código da cerveja a ser atualizada: ");
    remove_enter(fgets(cer->codigo, 50, stdin));
    if(cer_esta(cer->codigo) == 0){
      cadastro_nencontrado();}
    else if(cer_esta(cer->codigo) ==2){
      cdt_mas_inativo();}
  }while ((cer_esta(cer->codigo) != 1));
  printf("Nome da cerveja (atualizar): ");
  remove_enter(fgets(cer->nome, 50, stdin));
  do{
    printf("CNPJ do fornecedor (atualizar): ");
    remove_enter(fgets(cer->fornecedor, 50, stdin));
    if(!valida_cnpj(cer->fornecedor)){
      printf("CNPJ inválido, tente novamente!\n");}
    if(cnpj_esta(cer->fornecedor) == 2){
      fornecedor_inativo();}
    else if(cnpj_esta(cer->fornecedor) ==0){
      fornecedor_ncadastrado();}
  }while (!valida_cnpj(cer->fornecedor) || (cnpj_esta(cer->fornecedor) != 1));
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
    cadastro_nocorreu();
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
     encontrar = 1;}
   else if((strcmp(cer->codigo, apagar) == 0) && (cer->status == 'i')){
    cadastro_jaapagado();}
   else{
    cadastro_nencontrado();
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
      cadastro_nocorreu();
    }
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
     encontrar = 1;}
   else if((strcmp(cer->codigo, apagar) == 0) && (cer->status == 'a')){
    cadastro_jarecuperado();}
   else{
    cadastro_nencontrado();
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
      cadastro_nencontrado();
    }
  }
  fclose(arq);
  free(cer);
  getchar();
}


void exibe_cerveja(Cerveja* cer, char status){
  if(cer == NULL){
    cadastro_nencontrado();}
  else if((cer != NULL) && (cer->status == 'i')){
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "                                                                              \n"
    "          = = = = C A D A S T R O    E N C O N T R A D O = = = =              \n"
    "                                                                              \n"
    "            NOME : %s                                                         \n"
    "            CÓDIGO : %s                                                       \n"
    "            FORNECEDOR : %s                                                   \n"
    "                                                                              \n"
    "              ESSE CADASTRO ENCONTRA-SE ATUALMENTE INATIVO                    \n"
    "                    CASO DESEJE REATIVÁ-LO, UTILIZE                           \n"
    "                          A ÁREA DE RECUPERAR                                 \n"
    "                                                                              \n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "\n",cer->nome,cer->codigo,cer->fornecedor);
  }
  else{
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "                                                                              \n"
    "          = = = = C A D A S T R O    E N C O N T R A D O = = = =              \n"
    "                                                                              \n"
    "            NOME : %s                                                         \n"
    "            CÓDIGO : %s                                                       \n"
    "            FORNECEDOR : %s                                                   \n"
    "                                                                              \n"
    "              ESSE CADASTRO ENCONTRA-SE ATUALMENTE ATIVO                      \n"
    "                                                                              \n"
    "                                                                              \n"
    "                                                                              \n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "\n",cer->nome,cer->codigo,cer->fornecedor);
  }
}

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
        if(cer->status == 'a'){
          return 1;}
        else if(cer->status == 'i'){
          return 2;;
        }
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
}

int quant_cervejas_cadas(char status){
  FILE* arqcer;
  Cerveja *cer;
  arqcer = fopen("files/cerveja.dat","r+b");
  if(arqcer == NULL){
    exit(1);
  }
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  int cont_cer = 0;
  while(fread(cer, sizeof(Cerveja), 1, arqcer) != 0){// LÊ A QUANTIDADE DE STRUCTS DO ARQUIVO CERVEJA
    if(cer->status == status){
      cont_cer++;
    }
  }
  fclose(arqcer);
  return cont_cer;
}

void limpa_exibe_lista_cer(Cerveja *novaCer, Cerveja *lista, char status){
  if(quant_cervejas_cadas(status) == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
      "///                                                                        ///\n"
      "///                                                                        ///\n"
      "///                    Nenhuma cerveja cadastrada                          ///\n"
      "///                                                                        ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "\n");
  }else{
    novaCer = lista;
    int i = 0;
    while(novaCer != NULL){
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  CERVEJA %i                                                            ///", i+1);
      exibe_cerveja(novaCer,'x');
      novaCer = novaCer->prox;
      i++;
    }
  }

  novaCer = lista;
  while(lista != NULL){
    lista = lista->prox;
    free(novaCer);
    novaCer = lista;
  }
}