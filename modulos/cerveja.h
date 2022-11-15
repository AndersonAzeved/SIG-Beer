// Assinaturas das funções do módulo cervejas
typedef struct cerveja Cerveja;

char tela_cervejas(void);
void cadastrar_cerveja(void);
void atualizar_cerveja(void);
void apagar_cerveja(void);
void recuperar_cerveja(void);
void buscar_cerveja(void);
int cer_esta(char *);
Cerveja* buscar__cer(char *); 


struct cerveja{
  char nome[21];
  char codigo[51];
  char fornecedor[21];
  char status;
};




