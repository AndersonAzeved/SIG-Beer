//Biblioteca do Módulo Assinaturas

#include <stdio.h>
#include <stdlib.h>
#include "assinatura.h"
#include "biblioteca.h"

typedef struct assinatura Assinatura;
Assinatura ass;

char tela_assinaturas(void){
  char op;
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
  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",ass.nome);
  getchar();
  while(!valida_nome(ass.nome)){
    printf("Nome inválido, tente novamente!\n");
    printf("Nome: ");
    scanf("%[A-Z a-z]",ass.nome);
    getchar();
  } 

  do{
    printf("CPF: ");
    scanf("%[0-9.-]",ass.cpf);
    getchar();
    retira_pontoscpf(ass.cpf);
    verifica_letracpf(ass.cpf);
    valida_cpf(ass.cpf);
    if (!valida_cpf(ass.cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(ass.cpf));

  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]",ass.endereco);
  getchar();

  printf("Telefone: ");
  scanf("%[0-9-]",ass.telefone);
  getchar();

  printf("Email: ");
  scanf("%[A-z a-z.@0-9]",ass.email);
  getchar();
  while(!valida_email(ass.email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",ass.email);
    getchar();
  } 

  printf("Código da Assinatura: ");
  scanf("%[A-Za-z0-9]", ass.codigo);
  getchar();
  printf("\nNível da Assinatura:\n");
  printf("Nível 1. 2 Cervejas\n");
  printf("Nível 2. 4 Cervejas\n");
  printf("Nível 3. 8 Cervejas\n");
  printf("Informe o nível (APENAS NÚMEROS): ");
  scanf("%[0-9]",ass.nivel);
  getchar();

  system("clear||cls");
  cadastrado_sucesso();
  getchar();
}

void atualizar_assinatura(void){
  printf("Código da assinatura a atualizar: ");
  scanf("%[A-Za-z0-9]", ass.codigo);
  getchar();

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",ass.nome);
  getchar();
  printf("CPF: ");
  scanf("%[0-9.-]",ass.cpf);
  getchar();
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]",ass.endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]",ass.telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]",ass.email);
  getchar();
  while(!valida_email(ass.email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",ass.email);
    getchar();
  } 

  printf("Código da assinatura: ");
  scanf("%[A-Za-z0-9]", ass.codigo);
  getchar();
  printf("\nNível da Assinatura:\n");
  printf("Nível 1. 2 Cervejas\n");
  printf("Nível 2. 4 Cervejas\n");
  printf("Nível 3. 8 Cervejas\n");
  printf("Informe o nível (APENAS NÚMEROS): ");
  scanf("%[0-9]",ass.nivel);
  getchar();

  system("clear||cls");
  atualizado_sucesso();
  getchar();
}

void buscar_assinatura(void){

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",ass.nome);
  getchar();

  printf("%s",ass.nome);
  getchar();
}

void apagar_assinatura(void){

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",ass.nome);

  deletado_sucesso();
  getchar();
}

void recuperar_assinatura(void){

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",ass.nome);
  getchar();
  system("clear||cls");

  printf("%s",ass.nome);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
}