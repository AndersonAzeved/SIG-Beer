char tela_fornecedores(void);
void cadastrar_fornecedor(void);
void atualizar_fornecedor(void);
void apagar_fornecedor(void);
void recuperar_fornecedor(void);
void buscar_fornecedor(void);

struct fornecedor{
  char empresa[20];
  char cpfempresa[12];
  char telefoneempresa[10];
  char emailempresa[20];
  char cnpj[15];
};

typedef struct fornecedor Fornecedor;