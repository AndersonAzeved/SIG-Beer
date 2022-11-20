typedef struct fornecedor Fornecedor;
struct fornecedor{
  char empresa[51];
  char cpfempresa[51];
  char telefoneempresa[51];
  char emailempresa[51];
  char cnpj[51];
  char status;
};

char tela_fornecedores(void);
void cadastrar_fornecedor(void);
void atualizar_fornecedor(void);
void apagar_fornecedor(void);
void recuperar_fornecedor(void);
void buscar_fornecedor(void);
int cnpj_esta(char *);
void grava_fornecedor(Fornecedor*);
void exibe_fornecedor(Fornecedor*, char);
Fornecedor* buscar_forne(char *);