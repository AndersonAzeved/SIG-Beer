//Biblioteca do Módulo Assinaturas

#include <stdio.h>
#include <stdlib.h>
#include "assinatura.h"
#include "biblioteca.h"

struct assinatura Assinatura;

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
  //fflush(stdin);
  printf("\n");
  return op;
}

void cadastrar_assinatura(void){

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Assinatura.nome);
  getchar();
  do{
    printf("CPF: ");
    scanf("%[0-9.-]",Assinatura.cpf);
    getchar();
    retira_pontoscpf(Assinatura.cpf);
    verifica_letracpf(Assinatura.cpf);
    valida_cpf(Assinatura.cpf);
    if (!valida_cpf(Assinatura.cpf)){
      printf("\nCPF inválido, digite novamente.\n");
    }
  } while (!valida_cpf(Assinatura.cpf));
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]",Assinatura.endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]",Assinatura.telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]",Assinatura.email);
  getchar();
  while(!valida_email(Assinatura.email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",Assinatura.email);
    getchar();
  } 

  printf("Código da Assinatura: ");
  scanf("%[A-Za-z0-9]", Assinatura.assinatura);
  getchar();

  system("clear||cls");

  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                       Cadastrado com Sucesso                           ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  getchar();
}

void atualizar_assinatura(void){

  printf("Código da assinatura a atualizar: ");
  scanf("%[A-Za-z0-9]", Assinatura.assinatura);
  getchar();

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Assinatura.nome);
  getchar();
  printf("CPF: ");
  scanf("%[0-9.-]",Assinatura.cpf);
  getchar();
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]",Assinatura.endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]",Assinatura.telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]",Assinatura.email);
  getchar();
  while(!valida_email(Assinatura.email)){
    printf("Email inválido, tente novamente!\n");
    printf("Email: ");
    scanf("%[A-z a-z.@0-9]",Assinatura.email);
    getchar();
  } 

  printf("Código da assinatura: ");
  scanf("%[A-Za-z0-9]", Assinatura.assinatura);
  getchar();

  system("clear||cls");

  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                       Atualizado com Sucesso                           ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  getchar();
}

void buscar_assinatura(void){

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Assinatura.nome);
  getchar();

  printf("%s",Assinatura.nome);
  getchar();
}

void apagar_assinatura(void){

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Assinatura.nome);
  //fflush(stdin);

  printf("\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                        Deletado com Sucesso                            ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  getchar();
}

void recuperar_assinatura(void){

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]",Assinatura.nome);
  getchar();
  system("clear||cls");

  printf("%s",Assinatura.nome);
  printf("\nEM DESENVOLVIMENTO ...\n");
  getchar();
}