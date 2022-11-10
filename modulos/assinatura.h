struct assinatura{
    char nome[101];
    char cpf[51];
    char endereco[101]; 
    char telefone[51];
    char email[51];
    char codigo[51];
    char nivel[11];
    char status;
};

typedef struct assinatura Assinatura;


char tela_assinaturas(void);
void cadastrar_assinatura(void);
void atualizar_assinatura(void);
void buscar_assinatura(void);
void apagar_assinatura(void);
void recuperar_assinatura(void);
Assinatura* buscar_ass(char *);
void exibe_assinatura(Assinatura* );
int cpf_esta(char *);
char escolhe_nivel(void);