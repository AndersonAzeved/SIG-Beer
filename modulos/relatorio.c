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

char relatorio_assinatura(void){ //Quiser adicionar mais filtros
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

void rela_ordem_alfa_ass(void){
  int cont = 0;
  Assinatura* ass;
  FILE* arq;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  for(int i = 0; i <= 25; i++){
    arq = fopen("files/assinatura.dat", "r+b");
    while((fread(ass, sizeof(Assinatura), 1, arq))){
      if(ass->nome[0] == 65+i || ass->nome[0] == 97+i){
        cont++;
        printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///  ASSINATURA %i                                                         ///", cont);
        exibe_assinatura(ass, 'x');
        printf("\n");
      }
    }}
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
        "///  Cerveja %i                                                            ///", cont);
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
    "///  Cerveja %i                                                            ///", cont);
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
    "///  Assinatura %i                                                         ///", cont);
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
    "///                         Assinaturas Ativas                             ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
  while((fread(cer, sizeof(Cerveja), 1, arq))){
    if(cer->status == 'a'){
      cont++;
      printf("\n"
      "//////////////////////////////////////////////////////////////////////////////\n"
      "///  ASSINATURA %i                                                         ///", cont);
      exibe_assinatura(cer, 'i');
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
