// Assinaturas das funções do módulo cervejas
typedef struct cerveja Cerveja;
struct cerveja{
  char nome[51];
  char codigo[51];
  char fornecedor[51];
  char status;
  Cerveja *prox;
};

char tela_cervejas(void);
void cadastrar_cerveja(void);
void atualizar_cerveja(void);
void apagar_cerveja(void);
void recuperar_cerveja(void);
void buscar_cerveja(void);
int cer_esta(char *);
void exibe_cerveja(Cerveja*,char );
void grava_cerveja(Cerveja*);
Cerveja* buscar__cer(char *);
int quant_cervejas_cadas(char);
void limpa_exibe_lista_cer(Cerveja *, Cerveja *, char);