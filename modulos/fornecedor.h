struct fornecedor{
  char empresa[51];
  char cpfempresa[51];
  char telefoneempresa[51];
  char emailempresa[51];
  char cnpj[51];
  char status;
};
typedef struct fornecedor Fornecedor;

char tela_fornecedores(void);
void cadastrar_fornecedor(void);
void atualizar_fornecedor(void);
void apagar_fornecedor(void);
void recuperar_fornecedor(void);
void buscar_fornecedor(void);
<<<<<<< HEAD
int cnpj_esta(char *);
void grava_fornecedor(Fornecedor*);
void exibe_fornecedor(Fornecedor*);
Fornecedor* buscar_forne(char *);
=======
int cnpj_esta(char *);
>>>>>>> a5cb62f (atualização em fornecedor)
