
//      FUNÇÕES MÓDULO ASSINATURA 



void cadastrar_fornecedor(void){
  char empresa[20];
  char cpfempresa[12];
  char telefoneempresa[10];
  char emailempresa[20];
  char cnpj[15];

  printf("Nome jurídico da empresa : ");
  scanf(empresa);
  getchar();
  printf("CPF do dono da empresa : ");
  scanf("%[A-Za-z0-9]", cpfempresa);
  getchar();
  printf("Telefone: ");
  scanf("%[A-Za-z0-9]", telefoneempresa);
  getchar();
  printf("E-mail da empresa : ");
  scanf("%[A-z a-z.@0-9]",emailempresa);
  getchar();
  printf("CNPJ da empresa : ");
  scanf(cnpj);
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


void atualizar_fornecedor(void){
  char empresa[20];
  char cpfempresa[12];
  char telefoneempresa[10];
  char emailempresa[20];
  char cnpj[15];

  printf("Nome jurídico da empresa : ");
  scanf("%[A-Za-z0-9]", empresa);
  getchar();
  printf("CPF do dono da empresa : ");
  scanf("%[A-Za-z0-9]", cpfempresa);
  getchar();
  printf("Telefone: ");
  scanf("%[A-Za-z0-9]", telefoneempresa);
  getchar();
  printf("E-mail da empresa : ");
  scanf("%[A-z a-z.@0-9]",emailempresa);
  getchar();
  printf("CNPJ da empresa : ");
  scanf(cnpj);
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

void apagar_fornecedor(void){
  char empresa[20];
  char cpfempresa[12];
  char telefoneempresa[10];
  char emailempresa[20];
  char cnpj[15];


  printf("Nome a ser pesquisado : ");
  scanf("%[A-Z a-z]",empresa);
  fflush(empresa);
  fflush(cpfempresa);
  fflush(telefoneempresa);
  fflush(emailempresa);
  fflush(cnpj);

}



void recuperar_fornecedor(void){
  char cnpj[50];

  printf("CNPJ a ser pesquisado : ");
  scanf("%[A-Za-z0-9]",cnpj);
  getchar();
  system("clear||cls");

  printf(cnpj);
  printf ("EM DESENVOLVIMENTO ...");
}


void buscar_fornecedor(void){
  char cnpj[0];

  printf("CNPJ a ser pesquisado : ");
  scanf("%[A-Z a-z]",cnpj);
  getchar();

  printf(cnpj);
}
