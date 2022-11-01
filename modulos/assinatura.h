char tela_assinaturas(void);
void cadastrar_assinatura(void);
void atualizar_assinatura(void);
void buscar_assinatura(void);
void apagar_assinatura(void);
void recuperar_assinatura(void);

struct assinatura{
    char nome[100];
    char cpf[50];
    char endereco[50]; 
    char telefone[50];
    char email[50];
    char assinatura[50]; // trocar nome
    char nivel[10];
};

typedef struct assinatura Assinatura;