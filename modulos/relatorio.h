// Assinaturas das funções do módulo relatório
typedef struct ass_din Ass_din;
struct ass_din{
    char *nome;
    char *cpf;
    char *endereco; 
    char *telefone;
    char *email;
    char *cerveja_mes;
    int *data;
    char nivel;
    char status;
    Ass_din* prox;
};

char tela_relatorio(void);
char relatorio_cerveja(void);
char relatorio_assinatura(void);
char relatorio_fornecedor(void);
void rela_ordem_alfa_ass(void);
void rela_por_nivel_ass(void);
void rela_ass_ativas(void);
void rela_ass_inativas(void);
void rela_ass_ultmes(void);
void rela_ordem_alfa_cer(void);
void rela_todas_cervejas(void);
void rela_todas_ass(void);
void rela_cer_ativas(void);
void rela_cer_inativas(void);
void rela_todos_forne(void);
void rela_ordem_alfa_forne(void);
void rela_forne_ativos(void);
void rela_forne_inativos(void);
void exibe_ass_din(Ass_din*, char);