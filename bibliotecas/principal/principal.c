// Bibloteca tela principal

#include <stdio.h>
#include <stdlib.h>


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