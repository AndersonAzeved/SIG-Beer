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
<<<<<<< HEAD
int cnpj_esta(char *);
void grava_fornecedor(Fornecedor*);
void exibe_fornecedor(Fornecedor*);
<<<<<<< HEAD
<<<<<<< HEAD
Fornecedor* buscar_forne(char *);
=======
int cnpj_esta(char *);
>>>>>>> a5cb62f (atualização em fornecedor)
=======
int cnpj_esta(char *);
void grava_fornecedor(Fornecedor*);
void exibe_fornecedor(Fornecedor*);
>>>>>>> 9fc05c0 (função exibe_fornecedor criada)
=======
Fornecedor* buscar_forne(char *);
>>>>>>> c41d87c (função buscar_forne criada)
=======
Fornecedor* buscar_forne(char *);
void apagar_forne_auto(char *);
>>>>>>> 067f0ec (função apagar_forne_auto criada)
