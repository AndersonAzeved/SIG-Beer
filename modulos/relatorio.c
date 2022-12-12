// Biblioteca do módulo relatório

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "relatorio.h"
#include "biblioteca.h"
#include "principal.h"
#include "assinatura.h"
#include "cerveja.h"
#include "fornecedor.h"

char tela_relatorio(void) {
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
    "///                 = = = = Módulo relatórios = = = =                      ///\n"       
    "///                                                                        ///\n"
    "///             1. Relatório de assinaturas                                ///\n"
    "///             2. Relatório de cervejas                                   ///\n"
    "///             3. Relatório de fornecedores                               ///\n"
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
  return op[0];
}

char relatorio_cerveja(void){ //Quiser adicionar mais filtros
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
    "///               = = = = Relatórios Assinatura = = = =                    ///\n"       
    "///                                                                        ///\n"
    "///             1. Listar todas Cervejas                                   ///\n"
    "///             2. Ordem Alfabética                                        ///\n"
    "///             3. Cadastros Ativos                                        ///\n"
    "///             4. Cadastros Inativos                                      ///\n"
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
  return op[0];
}

char relatorio_fornecedor(void){
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
    "///              = = = = Relatórios Fornecedores = = = =                   ///\n"       
    "///                                                                        ///\n"
    "///             1. Listar todos fornecedores                               ///\n"
    "///             2. Listar por Ordem Alfabética                             ///\n"
    "///             3. Cadastros dos Fornecedores Ativos                       ///\n"
    "///             4. Cadastros dos Fornecedores Inativos                     ///\n"
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
  return op[0];
}

char relatorio_assinatura(void){
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
    "///               = = = = Relatórios Assinatura = = = =                    ///\n"       
    "///                                                                        ///\n"
    "///             1. Assinaturas                                             ///\n"
    "///             2. Ordem Alfabética                                        ///\n"
    "///             3. Nível                                                   ///\n"
    "///             4. Últimos Mês                                             ///\n"
    "///             5. Cadastros Ativos                                        ///\n"
    "///             6. Cadastros Inativos                                      ///\n"
    "///             0. Voltar                                                  ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
    printf("Informe a opção: "); 
    fgets(op, 10, stdin);
      remove_enter(op);
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '4')){
        ok = 1;
      }else{
        system("clear||cls");
        tela_opcao_invalida();
        system("clear||cls");
      }
  }while(!ok);
  return op[0];
}

void rela_ordem_alfa_ass(void){ //Adaptada de @FlaviusGorgonio
  FILE *arq;
  Assinatura *novaAss;
  Assinatura* lista;
  arq = fopen("files/assinatura.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novaAss = (Assinatura*) malloc(sizeof(Assinatura));
    if(fread(novaAss, sizeof(Assinatura), 1, arq)){
      if(lista == NULL){
        lista = novaAss;
        novaAss->prox = NULL;
      }else if(strcmp(novaAss->nome, lista->nome) < 0){
        novaAss->prox = lista;
        lista = novaAss;
      }else{
        Assinatura* anter = lista;
        Assinatura* atual = lista->prox;
        while((atual != NULL) && strcmp(atual->nome,novaAss->nome) < 0){
          anter = atual;
          atual = atual->prox;
        }
        anter->prox = novaAss;
        novaAss->prox = atual;
      }
    }
  }
  fclose(arq);
  while(novaAss != NULL){
    exibe_assinatura(novaAss,'x');
    getchar();
    novaAss = novaAss->prox;
  }

  // novaAss = lista;
  // while(novaAss != NULL){
  //   if(novaAss == NULL){
  //     printf("\n"
  //     "//////////////////////////////////////////////////////////////////////////////\n"
  //     "///                                                                        ///\n"
  //     "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  //     "///                                                                        ///\n"
  //     "///                                                                        ///\n"
  //     "///                    Nenhuma assinatura cadastrada                       ///\n"
  //     "///                                                                        ///\n"
  //     "///                                                                        ///\n"
  //     "//////////////////////////////////////////////////////////////////////////////\n"
  //     "\n");
  //   }else{
  //     printf("\n"
  //     "//////////////////////////////////////////////////////////////////////////////\n"
  //     "///                                                                        ///\n"
  //     "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  //     "///                  = = = Assinatura Cadastrada = = =                     ///\n"
  //     "///                                                                        ///\n");
  //     printf("///         Nome: %s\n", novaAss->nome);
  //     printf("///         CPF: %s\n", novaAss->cpf);
  //     printf("///         Endereço: %s\n", novaAss->endereco);
  //     printf("///         Telefone: %s\n", novaAss->telefone);
  //     printf("///         Email: %s\n", novaAss->email);
  //     if(novaAss->data[4] >= 0 && novaAss->data[4] <= 9){
  //       printf("///         Data de adesão: %d/%d/%d/ às %dh0%d\n", novaAss->data[0],novaAss->data[1],novaAss->data[2],novaAss->data[3],novaAss->data[4]);
  //     }else{
  //       printf("///         Data de adesão: %d/%d/%d/ às %dh%d\n", novaAss->data[0],novaAss->data[1],novaAss->data[2],novaAss->data[3],novaAss->data[4]);
  //     }
      
  //     printf("///         Nível: %c\n", novaAss->nivel);
  //     if(quant_cervejas_cadas() == 0){
  //       printf("///         Cerveja do Mês: A DEFINIR\n");
  //     }else{
  //       printf("///         Cerveja do Mês: %s\n", novaAss->cerveja_mes);
  //     }
  //     printf("///                                                                        ///\n");
  //     printf("//////////////////////////////////////////////////////////////////////////////\n");
  //   }
  //   novaAss = novaAss->prox;
  //   i++;
  // }
}

// void rela_ordem_alfa_ass(void){
//   int cont = 0;
//   Assinatura* ass;
//   FILE* arq;
//   ass = (Assinatura*) malloc(sizeof(Assinatura));
//   for(int i = 0; i <= 25; i++){
//     arq = fopen("files/assinatura.dat", "r+b");
//     if(arq == NULL){
//      printf("Erro na abertura do arquivo!\n");
//      exit(1);
//     }
//     while((fread(ass, sizeof(Assinatura), 1, arq))){
//       if(ass->nome[0] == 65+i || ass->nome[0] == 97+i){
//         cont++;
//         printf("\n"
//         "//////////////////////////////////////////////////////////////////////////////\n"
//         "///  ASSINATURA %i                                                         ///", cont);
//         exibe_assinatura(ass, 'x');
//         printf("\n");
//       }
//     }}
//     if(cont == 0){
//     printf("\n"
//       "//////////////////////////////////////////////////////////////////////////////\n"
//       "///                                                                        ///\n"
//       "///                   Nenhuma Assinatura Cadastrada                        ///\n"
//       "///                                                                        ///\n"
//       "//////////////////////////////////////////////////////////////////////////////\n");
//   }
//     fclose(arq);
//   free(ass);
//   printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
//   getchar();
//   system("clear || cls");
// }

void rela_por_nivel_ass(void){
  int cont = 0;
  FILE* arq;
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  for(int i = 1; i <= 3; i++){
    arq = fopen("files/assinatura.dat", "r+b");
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                        Assinaturas com nível %i                        ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n", i);
    while((fread(ass, sizeof(Assinatura), 1, arq))){
      if(ass->nivel == (i+'0')){
        cont++;
        printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///  ASSINATURA %i                                                         ///", cont);
        exibe_assinatura(ass, 'x');
        printf("\n");
      }
    }
    if(cont == 0){
      printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///                                                                        ///\n"
        "///                   Nenhuma Assinatura Cadastrada                        ///\n"
        "///                                                                        ///\n"
        "//////////////////////////////////////////////////////////////////////////////\n");
    }
    fclose(arq);
  }
  free(ass);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_ass_ativas(void){
  int cont = 0;
  FILE* arq;
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  arq = fopen("files/assinatura.dat", "r+b");
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                         Assinaturas Ativas                             ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(ass, sizeof(Assinatura), 1, arq))){
    if(ass->status == 'a'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  ASSINATURA %i                                                         ///", cont);
      exibe_assinatura(ass, 'i');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                   Nenhuma Assinatura Ativa                             ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(ass);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_ass_inativas(void){
  int cont = 0;
  FILE* arq;
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  arq = fopen("files/assinatura.dat", "r+b");
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                         Assinaturas Inativas                           ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(ass, sizeof(Assinatura), 1, arq))){
    if(ass->status == 'i'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  ASSINATURA %i                                                         ///", cont);
      exibe_assinatura(ass, 'a');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                   Nenhuma Assinatura Inativa                           ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(ass);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_ass_ultmes(void){
  int cont = 0;
  int data[6];
  pega_data(data);

  FILE* arq;
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///            Assinaturas Cadastradas no Último Mes                       ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  arq = fopen("files/assinatura.dat", "r+b");
  while((fread(ass, sizeof(Assinatura), 1, arq))){
    if(ass->status == 'a' && ass->data[2] == data[2] && ass->data[1] == data[1]){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  ASSINATURA %i                                                         ///", cont);
      exibe_assinatura(ass, 'i');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                   Nenhuma Assinatura Cadastrada                        ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(ass);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_ordem_alfa_cer(void){
  int cont = 0;
  Cerveja* cer;
  FILE* arq;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  for(int i = 0; i <= 25; i++){
    arq = fopen("files/cerveja.dat", "r+b");
    while((fread(cer, sizeof(Cerveja), 1, arq))){
      if(cer->nome[0] == 65+i || cer->nome[0] == 97+i){
        cont++;
        printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///  CERVEJA %i                                                            ///", cont);
        exibe_cerveja(cer, 'x');
        printf("\n");
      }
    }
    if(cont == 0){
      printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///                                                                        ///\n"
        "///                   Nenhuma Cerveja Cadastrada                           ///\n"
        "///                                                                        ///\n"
        "//////////////////////////////////////////////////////////////////////////////\n");
    }
    fclose(arq);
  }
  free(cer);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_todas_cervejas(void){
  int cont = 0;
  FILE* arq;
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  arq = fopen("files/cerveja.dat", "r+b");
  while((fread(cer, sizeof(Cerveja), 1, arq))){
    cont++;
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///  CERVEJA %i                                                            ///", cont);
    exibe_cerveja(cer, 'x');
    printf("\n");
  }
  fclose(arq);
  free(cer);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_todas_ass(void){
  int cont = 0;
  FILE* arq;
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  arq = fopen("files/assinatura.dat", "r+b");
  while((fread(ass, sizeof(Assinatura), 1, arq))){
    cont++;
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///  ASSINATURA %i                                                         ///", cont);
    exibe_assinatura(ass, 'x');
    printf("\n");
  }
  fclose(arq);
  free(ass);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}


void rela_cer_ativas(void){
  int cont = 0;
  FILE* arq;
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  arq = fopen("files/cerveja.dat", "r+b");
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                            Cervejas Ativas                             ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(cer, sizeof(Cerveja), 1, arq))){
    if(cer->status == 'a'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  CERVEJA %i                                                            ///", cont);
      exibe_cerveja(cer, 'i');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                   Nenhuma Cerveja Ativa                                ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(cer);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_cer_inativas(void){
  int cont = 0;
  FILE* arq;
  Cerveja* cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  arq = fopen("files/cerveja.dat", "r+b");
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                           Cervejas Inativas                            ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(cer, sizeof(Cerveja), 1, arq))){
    if(cer->status == 'i'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  CERVEJA %i                                                            ///", cont);
      exibe_cerveja(cer, 'a');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                Nenhuma Cerveja Inativa Encontrada                      ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(cer);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_todos_forne(void){
  int cont = 0;
  FILE* arq;
  Fornecedor* forne;
  forne= (Fornecedor*) malloc(sizeof(Fornecedor));
  arq = fopen("files/fornecedor.dat", "r+b");
  while((fread(forne, sizeof(Fornecedor), 1, arq))){
    cont++;
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///  FORNECEDOR %i                                                            ///", cont);
    exibe_fornecedor(forne, 'x');
    printf("\n");
  }
  fclose(arq);
  free(forne);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_ordem_alfa_forne(void){
  int cont = 0;
  Fornecedor* forne;
  FILE* arq;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  for(int i = 0; i <= 25; i++){
    arq = fopen("files/fornecedor.dat", "r+b");
    while((fread(forne, sizeof(Fornecedor), 1, arq))){
      if(forne->empresa[0] == 65+i || forne->empresa[0] == 97+i){
        cont++;
        printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///  FORNECEDOR %i                                                         ///", cont);
        exibe_fornecedor(forne, 'x');
        printf("\n");
      }
    }}
    if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                   Nenhum Fornecedor Cadastrado                         ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
    fclose(arq);
  free(forne);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_forne_ativos(void){
  int cont = 0;
  FILE* arq;
  Fornecedor* forne;
  forne = (Fornecedor*) malloc(sizeof(Fornecedor));
  arq = fopen("files/fornecedor.dat", "r+b");
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                        Fornecedores Ativos                             ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(forne, sizeof(Fornecedor), 1, arq))){
    if(forne->status == 'a'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  FORNECEDOR %i                                                         ///", cont);
      exibe_fornecedor(forne, 'i');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                   Nenhum Fornecedor Ativo                              ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(forne);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_forne_inativos(void){
  int cont = 0;
  FILE* arq;
  Fornecedor* forne;
  forne= (Fornecedor*) malloc(sizeof(Fornecedor));
  arq = fopen("files/fornecedor.dat", "r+b");
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                           Fornecedor(es) Inativo(s)                    ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(forne, sizeof(Fornecedor), 1, arq))){
    if(forne->status == 'i'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  FORNECEDOR %i                                                         ///", cont);
      exibe_fornecedor(forne, 'a');
      printf("\n");
    }
  }
  if(cont == 0){
    printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///                                                                        ///\n"
      "///                Nenhum Fornecedor Inativo Encontrado                    ///\n"
      "///                                                                        ///\n"
      "//////////////////////////////////////////////////////////////////////////////\n");
  }
  fclose(arq);
  free(forne);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}
