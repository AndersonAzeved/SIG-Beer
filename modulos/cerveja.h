// Assinaturas das funções do módulo cervejas

char tela_cervejas(void);
void cadastrar_cerveja(void);
void atualizar_cerveja(void);
void apagar_cerveja(void);
void recuperar_cerveja(void);
void buscar_cerveja(void);

struct cerveja{
  char nome[20];
  char codigo[50];
  char fornecedor[20];
};