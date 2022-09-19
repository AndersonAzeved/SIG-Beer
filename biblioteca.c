#include <stdio.h>
#include <stdlib.h>

// Funções
int tela_principal(void) {
  int op;
  //system("clear||cls");
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                SIG - Beer: Assinatura de Cervejas                      ///\n"
  "///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///            = = = = Sistema de Assinatura de Cervejas = = = =           ///\n"
  "///                      = = = = Menu Principal = = = =                    ///\n"
  "///                                                                        ///\n"
  "///            1. Módulo Assinaturas                                       ///\n"
  "///            2. Módulo Cervejas                                          ///\n"
  "///            3. Módulo Fornecedores                                      ///\n"
  "///            4. Módulo Relatórios                                        ///\n"
  "///            5. Equipe                                                   ///\n"
  "///            6. Sobre                                                    ///\n"
  "///            7. Lixeira                                                  ///\n"
  "///            0. Sair                                                     ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); 
  scanf("%d",&op); 
  getchar();
  fflush(stdin);
  return op;
}

void tela_equipe(void) {
  system("clear||cls");
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
	"///                 SIG - Beer: Assinatura de Cervejas                     ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///            = = = = Sistema de Assinatura de Cervejas = = = =           ///\n"
  "///                   = = = = Sobre Equipe = = = =                         ///\n"
  "///                                                                        ///\n"
  "///    Este projeto exemplo foi desenvolvido por:                          ///\n"
  "///    Ericleison Camilo Silva de Holanda                                  ///\n"
  "///    Anderson Azevedo da Silva                                           ///\n"
  "///    E-mail: ericleison.camilo.124@ufrn.edu.br                           ///\n"
  "///    E-mail: andersonsilva14.2017@gmail.com                              ///\n"
  "///    Redes sociais (instagram): @ericleisonholanda and @anderson.azvd    ///\n"
  "///    Git: https://github.com/AndersonAzeved/SIG-Beer                     ///\n"                                                    
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  printf("\t\t>>> Pressione QUALQUER TECLA para continuar...\n");
  getchar(); 
  fflush(stdin);
  }

void tela_sobre(void){
  system("clear||cls");
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
	"///                 SIG - Beer: Assinatura de Cervejas                     ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///            = = = = Sistema de Assinatura de Cervejas = = = =           ///\n"
  "///                      = = = = Sobre Projeto = = = =                     ///\n"
  "///                                                                        ///\n"
  "///    Os clubes de assinatura de cerveja estão cada vez mais populares    ///\n"
  "///    e permitem que os clientes recebam mensalmente packs de cervejas    ///\n"
  "///    artesanais selecionadas em seu endereço. Este programa tem como     ///\n"
  "///    objetivo gerenciar de forma eficiente as assinaturas e fornecendo   ///\n"
  "///    lembretes sobre os pedidos a serem entregues em cada semana e o     ///\n"
  "///    controle de pagamento das assinaturas.                              ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  printf("\t\t>>> Pressione QUALQUER TECLA para continuar...\n");
  getchar(); 
  fflush(stdin);
  }

int tela_cervejas(void) {
  int op;
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
  scanf("%d", &op); 
  fflush(stdin);
  printf("\n");
  return op;
}

int tela_relatorio(void) {
  system("clear||cls");
  int op;
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
  "///             1. Relatório de cervejas                                   ///\n"
  "///             2. Relatório de assinaturas                                ///\n"
  "///             3. Relatório de fornecedores                               ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); 
  scanf("%d", &op); 
  fflush(stdin);
  printf("\n");
  return op;
  }

int tela_lixeira(void){
  system("clear||cls");
  int op;
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
  "///                        = = = =  Lixeira = = = =                        ///\n"       
  "///                                                                        ///\n"
  "///             1. Lixeira de assinaturas                                  ///\n"
  "///             2. Lixeira das cervejas                                    ///\n"
  "///             3. Lixeira de fornecedores                                 ///\n"
  "///             4. Lixeira de relatórios                                   ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); 
  scanf("%d", &op);
  fflush(stdin);
  printf("\n");
  return op;
  }

void tela_opcao_invalida(void){
  system("clear||cls");
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
  "///                 SIG - Beer: Assinatura de Cervejas                     ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                  Opção Inválida, tente novamente                       ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
  printf("\t\t>>> Pressione QUALQUER TECLA para continuar...\n");
  getchar(); 
  fflush(stdin);
  }

int tela_assinaturas(void){
  int op;
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
  scanf("%d", &op); 
  getchar();
  fflush(stdin);
  printf("\n");
  return op;
}

int tela_fornecedores(void){
  int op;
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
  "///               = = = = Módulo de Fornecedores = = = =                   ///\n"
  "///                                                                        ///\n"
  "///             1. Cadastrar Fornecedores                                  ///\n"
  "///             2. Atualizar Fornecedores                                  ///\n"
  "///             3. Deletar Fornecedores                                    ///\n"
  "///             4. Recuperar Fornecedores                                  ///\n"
  "///             5. Pesquisar Fornecedores                                  ///\n"
  "///             0. Voltar                                                  ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n");
  printf("Informe a opção: "); 
  scanf("%d", &op); 
  fflush(stdin);
  printf("\n");
  getchar();
  return op;
}

void tela_encerramento(void){
  system("clear||cls");
  printf("\n"
	"//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///             Universidade Federal do Rio Grande do Norte                ///\n"
  "///                 Centro de Ensino Superior do Seridó                    ///\n"
  "///               Departamento de Computação e Tecnologia                  ///\n"
  "///                  Disciplina DCT1106 -- Programação                     ///\n"
	"///                SIG - Beer: Assinatura de Cervejas                      ///\n"
	"///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022    ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
  "///                                                                        ///\n"
  "///         = = = = Sistema de assinatura de cervejas = = = =              ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "///                       Encerrando o SIG-Beer                            ///\n"
  "///                                                                        ///\n"
  "///                                                                        ///\n"
  "//////////////////////////////////////////////////////////////////////////////\n"
	"\n");
}

void cadastrar_assinatura(void){
  char nome[50];
  char cpf[20];
  char endereco[50]; 
  char telefone[50];
  char codigo[50]; //Código da cerveja
  char email[30];
  //char cod_assinatura[20]; //Criar algum meio para a cada assinatura, criar um código diferente

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]s",nome);
  getchar();
  printf("CPF: ");
  scanf("%[0-9.-]s",cpf);
  getchar();
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]s",endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]s",telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]s",email);
  getchar();
  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]s", codigo);
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
}

void atualizar_assinatura(void){
  char nome[50];
  char cpf[20];
  char endereco[50]; 
  char telefone[50];
  char codigo[50]; //Código da cerveja
  char email[30];
  char assinatura[20];

  printf("Código da assinatura a atualizar: ");
  scanf("%[A-Za-z0-9]s", assinatura);
  getchar();

  printf("Nome do Cliente (APENAS LETRAS): ");
  scanf("%[A-Z a-z]s",nome);
  getchar();
  printf("CPF: ");
  scanf("%[0-9.-]s",cpf);
  getchar();
  printf("Endereço: ");
  scanf("%[A-z a-z., -0-9]s",endereco);
  getchar();
  printf("Telefone: ");
  scanf("%[0-9-]s",telefone);
  getchar();
  printf("Email: ");
  scanf("%[A-z a-z.@0-9]s",email);
  getchar();
  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]s", codigo);
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
}

void buscar_assinatura(void){
  char nome[50];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]s",nome);
  getchar();

  printf(nome);
}

void apagar_assinatura(void){
  char nome[50];
  char cpf[20];
  char endereco[50]; 
  char telefone[50];
  char codigo[50]; //Código da cerveja
  char email[30];
  char assinatura[20];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]s",nome);
  fflush(nome);
  fflush(cpf);
  fflush(endereco);
  fflush(telefone);
  fflush(codigo);
  fflush(email);
  fflush(assinatura);

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
}

void recuperar_assinatura(void){
  char nome[50];

  printf("Nome a ser pesquisado (APENAS LETRAS): ");
  scanf("%[A-Z a-z]s",nome);
  getchar();
  system("clear||cls");

  printf(nome);
  printf ("EM DESENVOLVIMENTO ...");
}


void cadastrar_cerveja(void){
  char nome[20];
  char codigo[50]; //Código da cerveja
  char fornecedor[20];

  printf("Nome da cerveja (APENAS LETRAS): ");
  scanf("%[A-Z a-z]s",nome);
  getchar();
  printf("Código da Cerveja: ");
  scanf("%[A-Za-z0-9]s", codigo);
  getchar();
  printf("Fornecedor: ");
  scanf("%[A-Za-z0-9]s", fornecedor);
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
}