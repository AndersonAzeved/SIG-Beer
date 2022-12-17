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
    "///             5. Relatório Completo                                      ///\n"
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
    "///             1. Cervejas                                                ///\n"
    "///             2. Ordem Alfabética                                        ///\n"
    "///             3. Relatório Completo                                      ///\n"
    "///             0. Voltar                                                  ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
    printf("Informe a opção: "); 
    fgets(op, 10, stdin);
      remove_enter(op);
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '3')){
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
    "///             1. Fornecedores                                            ///\n"
    "///             2. Ordem Alfabética                                        ///\n"
    "///             3. Relatório Completo                                      ///\n"
    "///             0. Voltar                                                  ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");
    printf("Informe a opção: "); 
    fgets(op, 10, stdin);
      remove_enter(op);
      if((strlen(op) == 1) && (op[0] >= '0' && op[0] <= '3')){
        ok = 1;
      }else{
        system("clear||cls");
        tela_opcao_invalida();
        system("clear||cls");
      }
  }while(!ok);
  return op[0];
}



//  RELÁTORIOS ASSINATURAS

// Relatório de todas as assinaturas ativas cadastradas
void rela_ass_ativas(void){
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
      if(novaAss->status == 'a'){
        if(lista == NULL){
          lista = novaAss;
          novaAss->prox = NULL;
        }else{
          novaAss->prox = lista;
          lista = novaAss;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_ass(novaAss,lista,'a');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

// Relatório das assinaturas por ordem alfabética
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
      if(novaAss->status == 'a'){
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
  }
  fclose(arq);

  limpa_exibe_lista_ass(novaAss,lista,'a');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

// Relatório por nível
void rela_por_nivel_ass(void){
  FILE *arq;
  Assinatura *novaAss;
  Assinatura* lista;
  arq = fopen("files/assinatura.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  for(int i = 1; i <= 3; i++){
    lista = NULL;
    arq = fopen("files/assinatura.dat", "r+b");
    printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///                        Assinaturas com nível %i                        ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n", i);
    while(!feof(arq)){
      novaAss = (Assinatura*) malloc(sizeof(Assinatura));
      if(fread(novaAss, sizeof(Assinatura), 1, arq)){
        if(novaAss->status == 'a' && novaAss->nivel == (i+'0')){
          if(lista == NULL){
            lista = novaAss;
            novaAss->prox = NULL;
          }else{
            novaAss->prox = lista;
            lista = novaAss;
          }
        }
      }
    }
    fclose(arq);
    limpa_exibe_lista_ass(novaAss,lista,'a');
  }
  
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

// Relatório do mês atual
void rela_ass_ultmes(void){
  int data[6];
  pega_data(data);
  FILE *arq;
  Assinatura *novaAss;
  Assinatura* lista;
  arq = fopen("files/assinatura.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  printf("\n"
    "//////////////////////////////////////////////////////////////////////////////\n"
    "///                                                                        ///\n"
    "///            Assinaturas Cadastradas no Último Mes                       ///\n"
    "///                                                                        ///\n"
    "//////////////////////////////////////////////////////////////////////////////\n");

  lista = NULL;
  while(!feof(arq)){
    novaAss = (Assinatura*) malloc(sizeof(Assinatura));
    if(fread(novaAss, sizeof(Assinatura), 1, arq)){
      if(novaAss->status == 'a' && novaAss->data[2] == data[2] && novaAss->data[1] == data[1]){
        if(lista == NULL){
          lista = novaAss;
          novaAss->prox = NULL;
        }else{
          novaAss->prox = lista;
          lista = novaAss;
        }
      }
    }
  }
  fclose(arq);
  limpa_exibe_lista_ass(novaAss,lista,'a');
  
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

// Relatório das assinaturas inativas
void rela_ass_inativas(void){
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
      if(novaAss->status == 'i'){
        if(lista == NULL){
          lista = novaAss;
          novaAss->prox = NULL;
        }else{
          novaAss->prox = lista;
          lista = novaAss;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_ass(novaAss,lista,'i');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_ass_completo(void){
  FILE *arqass;
  FILE *arqdts;
  Data_sorteio* dts;
  arqdts = fopen("files/data_sorteio.dat","r+b");
  dts = (Data_sorteio*) malloc(sizeof(Data_sorteio));
  if(arqdts == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  fread(dts, sizeof(Data_sorteio), 1, arqdts);
  fclose(arqdts);

  Cerveja *cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  cer = buscar__cer(dts->codigo_cer);

  Assinatura *ass;
  Assinatura *lista;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  arqass = fopen("files/assinatura.dat","r+b");
  if(arqass == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arqass)){
    if(fread(ass, sizeof(Assinatura), 1, arqass)){
      if(strcmp(ass->codigo_cerveja,dts->codigo_cer) == 0 && ass->status == 'a'){
        if(lista == NULL){
          lista = ass;
          ass->prox = NULL;
        }else{
          ass->prox = lista;
          lista = ass;
        }
      }
    }
  }
  fclose(arqass);
  
  limpExibListCompAss(ass,lista,cer->codigo,'a');

  free(cer);
  free(dts);

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

// RELATÓRIOS CERVEJAS

// Relatório ordem alfabética 
void rela_ordem_alfa_cer(void){
  FILE *arq;
  Cerveja *novaCer;
  Cerveja* lista;
  arq = fopen("files/cerveja.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novaCer = (Cerveja*) malloc(sizeof(Cerveja));
    if(fread(novaCer, sizeof(Cerveja), 1, arq)){
      if(novaCer->status == 'a'){
        if(lista == NULL){
          lista = novaCer;
          novaCer->prox = NULL;
        }else if(strcmp(novaCer->nome, lista->nome) < 0){
          novaCer->prox = lista;
          lista = novaCer;
        }else{
          Cerveja* anter = lista;
          Cerveja* atual = lista->prox;
          while((atual != NULL) && strcmp(atual->nome,novaCer->nome) < 0){
            anter = atual;
            atual = atual->prox;
          }
          anter->prox = novaCer;
          novaCer->prox = atual;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_cer(novaCer,lista,'a');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_cer_ativas(void){
  FILE *arq;
  Cerveja *novaCer;
  Cerveja* lista;
  arq = fopen("files/cerveja.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novaCer = (Cerveja*) malloc(sizeof(Cerveja));
    if(fread(novaCer, sizeof(Cerveja), 1, arq)){
      if(novaCer->status == 'a'){
        if(lista == NULL){
          lista = novaCer;
          novaCer->prox = NULL;
        }else{
          novaCer->prox = lista;
          lista = novaCer;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_cer(novaCer,lista,'a');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_cer_inativas(void){
  FILE *arq;
  Cerveja *novaCer;
  Cerveja* lista;
  arq = fopen("files/cerveja.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novaCer = (Cerveja*) malloc(sizeof(Cerveja));
    if(fread(novaCer, sizeof(Cerveja), 1, arq)){
      if(novaCer->status == 'i'){
        if(lista == NULL){
          lista = novaCer;
          novaCer->prox = NULL;
        }else{
          novaCer->prox = lista;
          lista = novaCer;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_cer(novaCer,lista,'i');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}


void rela_ordem_alfa_forne(void){
  FILE *arq;
  Fornecedor *novoForne;
  Fornecedor* lista;
  arq = fopen("files/fornecedor.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novoForne = (Fornecedor*) malloc(sizeof(Fornecedor));
    if(fread(novoForne, sizeof(Fornecedor), 1, arq)){
      if(novoForne->status == 'a'){
        if(lista == NULL){
          lista = novoForne;
          novoForne->prox = NULL;
        }else if(strcmp(novoForne->empresa, lista->empresa) < 0){
          novoForne->prox = lista;
          lista = novoForne;
        }else{
          Fornecedor* anter = lista;
          Fornecedor* atual = lista->prox;
          while((atual != NULL) && strcmp(atual->empresa,novoForne->empresa) < 0){
            anter = atual;
            atual = atual->prox;
          }
          anter->prox = novoForne;
          novoForne->prox = atual;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_forne(novoForne,lista,'a');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_forne_ativos(void){
  FILE *arq;
  Fornecedor *novoForne;
  Fornecedor* lista;
  arq = fopen("files/fornecedor.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novoForne = (Fornecedor*) malloc(sizeof(Fornecedor));
    if(fread(novoForne, sizeof(Fornecedor), 1, arq)){
      if(novoForne->status == 'a'){
        if(lista == NULL){
          lista = novoForne;
          novoForne->prox = NULL;
        }else{
          novoForne->prox = lista;
          lista = novoForne;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_forne(novoForne,lista,'a');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_forne_inativos(void){
  FILE *arq;
  Fornecedor *novoForne;
  Fornecedor* lista;
  arq = fopen("files/fornecedor.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  lista = NULL;
  while(!feof(arq)){
    novoForne = (Fornecedor*) malloc(sizeof(Fornecedor));
    if(fread(novoForne, sizeof(Fornecedor), 1, arq)){
      if(novoForne->status == 'i'){
        if(lista == NULL){
          lista = novoForne;
          novoForne->prox = NULL;
        }else{
          novoForne->prox = lista;
          lista = novoForne;
        }
      }
    }
  }
  fclose(arq);

  limpa_exibe_lista_forne(novoForne,lista,'i');

  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_completo_cer(void){
  FILE *arq;
  Cerveja *cer;
  cer = (Cerveja*) malloc(sizeof(Cerveja));
  Fornecedor *forne;
  forne = (Fornecedor*) malloc(sizeof(Cerveja));
  arq = fopen("files/cerveja.dat","r+b");
  if(arq == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
  }
  int i = 0;
  while(!feof(arq)){
    if(fread(cer, sizeof(Cerveja), 1, arq)){
      if(cer->status == 'a'){
        forne = buscar_forne(cer->fornecedor);
        printf("\n"
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///                                                                        ///\n"
        "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
        "///                   = = = Cerveja Cadastrada = = =                       ///\n"
        "///                                                                        ///\n");
        printf(""
        "//////////////////////////////////////////////////////////////////////////////\n"
        "///  Cerveja %i                                                          \n", i+1);
        printf("///                                                                        \n");                 
        printf("///  Dados da Cerveja                                                      \n");
        printf("///                                                                        \n");
        printf("///         Cerveja: %s\n", cer->nome);
        printf("///         Código da Cerveja: %s\n", cer->codigo);
        printf("///                                                                        \n");
        printf("///  Dados do Fornecedor                                                   \n");
        printf("///                                                                        \n");
        printf("///         CNPJ do Fornecedor: %s\n", forne->cnpj);
        printf("///         Nome da Empresa: %s\n", forne->empresa);
        printf("///         CFP do Dono da Empresa: %s\n", forne->cpfempresa);
        printf("///         Telefone da Empresa: %s\n", forne->telefoneempresa);
        printf("///         Email da Empresa: %s\n", forne->emailempresa);
        printf("///                                                                        \n");
        printf("//////////////////////////////////////////////////////////////////////////////\n");
      }
    }
  }
  fclose(arq);
  free(cer);
  free(forne);
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}

void rela_completo_forne(void){
  printf("Em desenvolvimento\n");
  printf(">>> APERTE ENTER PARA CONTINUAR >>> ");
  getchar();
  system("clear || cls");
}