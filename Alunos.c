#include <stdio.h>
#include <stdlib.h>

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

void meu_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void removerQuebraLinha(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

struct Aluno {
    char *nome;
    int idade;
    float media;
};

void cadastrarAluno(struct Aluno **alunos, int *total);
void lista_de_Alunos(struct Aluno *alunos, int total);
void lista_de_Aprovados(struct Aluno *alunos, int total);
void Memoria(struct Aluno *alunos, int total);

int main() {
    struct Aluno *alunos = NULL;
    int total = 0;
    int opcao;

    do {
        printf("\n========= Menu =========\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Lista de todos os alunos\n");
        printf("3. Lista de todos os aprovados\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch(opcao) {
            case 1:
                cadastrarAluno(&alunos, &total);
                break;
            case 2:
                lista_de_Alunos(alunos, total);
                break;
            case 3:
                lista_de_Aprovados(alunos, total);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 4);

    Memoria(alunos, total);
    return 0;
}

void cadastrarAluno(struct Aluno **alunos, int *total) {
    char buffer[100];

    *alunos = realloc(*alunos, (*total + 1) * sizeof(struct Aluno));

    if (*alunos == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }

    printf("Nome do aluno: ");
    fgets(buffer, 100, stdin);
    removerQuebraLinha(buffer);

    int tamanho = meu_strlen(buffer) + 1;
    (*alunos)[*total].nome = malloc(tamanho);
    if ((*alunos)[*total].nome == NULL) {
        printf("Erro ao alocar memoria pro nome!\n");
        exit(1);
    }
    meu_strcpy((*alunos)[*total].nome, buffer);

    printf("Idade: ");
    scanf("%d", &(*alunos)[*total].idade);

    printf("Media: ");
    scanf("%f", &(*alunos)[*total].media);
    getchar();

    (*total)++;
    printf("Aluno cadastrado com sucesso!\n");
}

void lista_de_Alunos(struct Aluno *alunos, int total) {
    printf("\n--- Lista de Alunos ---\n");
    int i;
    for (i = 0; i < total; i++) {
        printf("Nome: %s | Idade: %d | Media: %.2f\n",
               alunos[i].nome, alunos[i].idade, alunos[i].media);
    }
}

void lista_de_Aprovados(struct Aluno *alunos, int total) {
    printf("\n--- Alunos Aprovados ---\n");
    int i;
    for (i = 0; i < total; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s | Media: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

void Memoria(struct Aluno *alunos, int total) {
    int i;
    for (i = 0; i < total; i++) {
        free(alunos[i].nome);
    }
    free(alunos);
}
