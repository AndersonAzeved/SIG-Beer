struct assinatura{
    char nome[101];
    char cpf[51];
    char endereco[101]; 
    char telefone[51];
    char email[51];
    char codigo[51];
    char nivel;
    char status;
};

typedef struct assinatura Assinatura;


char tela_assinaturas(void);
void cadastrar_assinatura(void);
void atualizar_assinatura(void);
void buscar_assinatura(void);
void apagar_assinatura(void);
void recuperar_assinatura(void);
<<<<<<< HEAD
<<<<<<< HEAD
Assinatura* buscar_ass(char *);
void exibe_assinatura(Assinatura* );
<<<<<<< HEAD
int cpf_esta(char *);
char escolhe_nivel(void);
=======
Assinatura* buscar_ass(char *);
>>>>>>> c3c985b (função buscar_ass criada)
=======
Assinatura* buscar_ass(char *);
void exibe_assinatura(Assinatura* );
>>>>>>> 01a62b4 (função exibe_assinatura criada)
=======
int cpf_esta(char *);
>>>>>>> a11a0ff (atualização em cadastrar_assinatura)
