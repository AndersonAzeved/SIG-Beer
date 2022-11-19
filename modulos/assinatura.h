struct assinatura{
    char nome[101];
    char cpf[51];
    char endereco[101]; 
    char telefone[51];
    char email[51];
    char codigo[51];
    char cerveja_mes[21];
    char nivel;
    char status;
};

typedef struct assinatura Assinatura;

struct data_sorteio{
    int codigo;
    int mes;
    int dia;
    int ano;
    char cerveja_sort[21];
};

typedef struct data_sorteio Data_sorteio;


char tela_assinaturas(void);
void cadastrar_assinatura(void);
void atualizar_assinatura(void);
void buscar_assinatura(void);
void apagar_assinatura(void);
void recuperar_assinatura(void);
Assinatura* buscar_ass(char *);
void exibe_assinatura(Assinatura*, char );
int cpf_esta(char *);
char escolhe_nivel(void);

void preenche_data_sorteio(void);
int sorteio_numero(int );
void preenche_assinaturas(void);
char* sortear_cerveja(void);
int quant_cervejas_cadas(void);