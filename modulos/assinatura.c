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
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    fwrite(ass, sizeof(Assinatura), 1, fp);
    fclose(fp);
}


char tela_assinaturas(void){
<<<<<<< HEAD
<<<<<<< HEAD
  char op[11];
=======
  char op;
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
=======
  char op[11];
>>>>>>> 03ac2b5 (atualizações nos módulos)
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
  scanf("%s", op);
  getchar();
  printf("\n");
  return op[0];
}


void cadastrar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  do{
    printf("CPF: ");
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
=======
  do{
=======
>>>>>>> 693bb85 (função apagar_assinatura criada)
  printf("Nome do Cliente (APENAS LETRAS): ");
  fgets(ass->nome, 100, stdin);
  remove_enter(ass->nome);
  while(!valida_nome(ass->nome)){
    printf("Nome inválido, tente novamente!\n");
    printf("Nome: ");
    fgets(ass->nome, 100, stdin);
    remove_enter(ass->nome);
  } 
  
=======
>>>>>>> a11a0ff (atualização em cadastrar_assinatura)
  do{
    printf("CPF: ");
<<<<<<< HEAD
    remove_enter(fgets(ass->cpf, 50, stdin));
<<<<<<< HEAD
    retira_pontoscpf(ass->cpf);
    verifica_letracpf(ass->cpf);
>>>>>>> aadf71c (Atualização (optmização))
=======
>>>>>>> 06c02cd (Exclusão de funções inutilizadas)
=======
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
<<<<<<< HEAD
    //retira_pontoscpf(ass->cpf);
    //verifica_letracpf(ass->cpf);
>>>>>>> 693bb85 (função apagar_assinatura criada)
=======
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
    valida_cpf(ass->cpf);
    if (!valida_cpf(ass->cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass->cpf));
  if(cpf_esta(ass->cpf)){
    printf("\nCPF já cadastrado!\n");
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
<<<<<<< HEAD
    remove_enter(fgets(ass->endereco, 100, stdin));

    printf("Telefone: ");
    remove_enter(fgets(ass->telefone, 50, stdin));

<<<<<<< HEAD
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
=======
  printf("Telefone: ");
  fgets(ass->telefone, 50, stdin);

  printf("Email: ");
<<<<<<< HEAD
  remove_enter(fgets(ass->email, 50, stdin));
  if(!valida_email(ass->email)){
    printf("Email inválido, tente novamente!\n");}
  }while(!valida_email(ass->email));
>>>>>>> aadf71c (Atualização (optmização))
=======
  fgets(ass->email, 50, stdin);
  remove_enter(ass->email);
  while(!valida_email(ass->email)){
    printf("Email inválido, tente novamente!\n");
=======
    fgets(ass->endereco, 100, stdin);

    printf("Telefone: ");
    fgets(ass->telefone, 50, stdin);

>>>>>>> a11a0ff (atualização em cadastrar_assinatura)
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

    ass->nivel = escolhe_nivel();

    ass->status = 'a'; // a = ATIVADO e i = INATIVO

    grava_assinatura(ass);

    system("clear||cls");
    cadastrado_sucesso();
  }
>>>>>>> 693bb85 (função apagar_assinatura criada)

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  free(ass);
=======
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
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
=======

=======
>>>>>>> 03ac2b5 (atualizações nos módulos)
  free(ass);
>>>>>>> a11a0ff (atualização em cadastrar_assinatura)
  getchar();
}

void atualizar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
<<<<<<< HEAD
  char cpf[51];
  do{
    printf("CPF: ");
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
=======
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
<<<<<<< HEAD
    remove_enter(fgets(ass->cpf, 50, stdin));
<<<<<<< HEAD
    retira_pontoscpf(ass->cpf);
    verifica_letracpf(ass->cpf);
>>>>>>> 03272c6 (Optimização)
=======
>>>>>>> 06c02cd (Exclusão de funções inutilizadas)
=======
    fgets(ass->cpf, 50, stdin);
    remove_enter(ass->cpf);
<<<<<<< HEAD
    //retira_pontoscpf(ass->cpf);
    //verifica_letracpf(ass->cpf);
>>>>>>> 693bb85 (função apagar_assinatura criada)
=======
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
    valida_cpf(ass->cpf);
    if (!valida_cpf(ass->cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass->cpf));

  strcpy(cpf, ass->cpf);

<<<<<<< HEAD
  if(cpf_esta(ass->cpf)){
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
=======
  printf("Telefone: ");
  fgets(ass->telefone, 50, stdin);

  printf("Email: ");
  fgets(ass->email, 50, stdin);
  remove_enter(ass->email);
  while(!valida_email(ass->email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
<<<<<<< HEAD
    remove_enter(fgets(ass->email, 50, stdin));
    if(!valida_email(ass->email)){
      printf("Email inválido, tente novamente!\n");}
  }while(!valida_email(ass->email)); 
>>>>>>> 03272c6 (Optimização)
=======
    fgets(ass->email, 50, stdin);
    remove_enter(ass->email);
  } 
>>>>>>> 693bb85 (função apagar_assinatura criada)

    printf("Código da Assinatura: ");
    remove_enter(fgets(ass->codigo, 50, stdin));

<<<<<<< HEAD
<<<<<<< HEAD
    ass->nivel = escolhe_nivel();
=======
  // printf("\nNível da Assinatura:\n");
  // printf("Nível 1. 2 Cervejas\n");
  // printf("Nível 2. 4 Cervejas\n");
  // printf("Nível 3. 8 Cervejas\n");
  // printf("Informe o nível (APENAS NÚMEROS): ");
  // fgets(ass->nivel, 10, stdin);

=======
>>>>>>> a630868 (atualizações)
  ass->nivel = escolhe_nivel();
>>>>>>> ec6b06c (função criando_arquivo criada)

<<<<<<< HEAD
    ass->status = 'a';
=======
  ass->status = 'a';

  grava_assinatura(ass);
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)

    fseek(arq, -1*sizeof(Assinatura), SEEK_CUR);
    fwrite(ass, sizeof(Assinatura), 1, arq);
    fclose(arq);
    free(ass);
    atualizado_sucesso();
  }
  system("clear||cls");
  getchar();
}

Assinatura* buscar_ass(char *busca){
  FILE* arq;
  Assinatura *ass;
  arq = fopen("files/assinatura.dat", "rb");
  if(arq == NULL){
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
=======
    arq = fopen("files/assinatura.dat", "a");
>>>>>>> c3c985b (função buscar_ass criada)
=======
    //arq = fopen("files/assinatura.dat", "a");
=======
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
>>>>>>> 693bb85 (função apagar_assinatura criada)
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

<<<<<<< HEAD
<<<<<<< HEAD
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
      printf("Nível: %c\n", ass->nivel);
  }
}

=======
>>>>>>> c3c985b (função buscar_ass criada)

void buscar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
<<<<<<< HEAD
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
=======
=======
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
      printf("Nível: %c\n", ass->nivel);
  }
}


void buscar_assinatura(void){
  Assinatura* ass;
  ass = (Assinatura*) malloc(sizeof(Assinatura));
  char cpf[51];
>>>>>>> 01a62b4 (função exibe_assinatura criada)
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
  
>>>>>>> c3c985b (função buscar_ass criada)
  getchar();
}

void apagar_assinatura(void){
<<<<<<< HEAD
<<<<<<< HEAD
  FILE* arq;
  Assinatura* ass;
  int achou = 0;
=======

  FILE* arq;
  Assinatura* ass;
  int achou;
>>>>>>> 693bb85 (função apagar_assinatura criada)
=======
  FILE* arq;
  Assinatura* ass;
  int achou = 0;
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 693bb85 (função apagar_assinatura criada)
  achou = 0;
  while((!achou) && (fread(ass, sizeof(Assinatura), 1, arq))) {
   if ((strcmp(ass->cpf, apagar) == 0) && (ass->status == 'a')) {
     achou = 1;
   }
  }
<<<<<<< HEAD
=======
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
>>>>>>> 08a5bca (atualização)
=======
>>>>>>> 693bb85 (função apagar_assinatura criada)

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
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
}
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)

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
<<<<<<< HEAD
>>>>>>> 693bb85 (função apagar_assinatura criada)
}

void recuperar_assinatura(void){ // FUNÇÃO COM BUGS, NÃO SEI SE TÁ RECUPERANDO MESMO
                                // E MOSTRANDO MENSAGEM QUE NÃO ESTÁ, MESMO ESTANDO
=======

>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
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
<<<<<<< HEAD
}

int cpf_esta(char *cpf){
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
      if(((strcmp(ass->cpf,cpf)) == 0) && ass->status == 'a'){
        return 1;
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
      printf("\nNível Inválido!");
      printf("\nNível da Assinatura:\n");
      printf("Nível 1. 2 Cervejas\n");
      printf("Nível 2. 4 Cervejas\n");
      printf("Nível 3. 8 Cervejas\n");
      printf("Informe o nível (APENAS NÚMEROS): ");
      fgets(nivel, 10, stdin);
      remove_enter(nivel);
    }    
  }while(!ok);
  return nivel[0];
=======
>>>>>>> 8f0cdbc (função recuperar_assinatura criada)
}

int cpf_esta(char *cpf){
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
      if(((strcmp(ass->cpf,cpf)) == 0) && ass->status == 'a'){
        return 1;
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
      printf("\nNível Inválido!");
      printf("\nNível da Assinatura:\n");
      printf("Nível 1. 2 Cervejas\n");
      printf("Nível 2. 4 Cervejas\n");
      printf("Nível 3. 8 Cervejas\n");
      printf("Informe o nível (APENAS NÚMEROS): ");
      fgets(nivel, 10, stdin);
      remove_enter(nivel);
    }    
  }while(!ok);
  return nivel[0];
}
