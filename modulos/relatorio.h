// Assinaturas das funções do módulo relatório

char tela_relatorio(void);

typedef struct ass_dinamica Ass_dinamica;
struct ass_dinamica{
    char *nome;
    char *cpf;
    char *endereco; 
    char *telefone;
    char *email;
    char *codigo;
    char *cerveja_mes;
    char nivel;
    char status;
    Ass_dinamica* prox;
};

void lista_dinamica(void);