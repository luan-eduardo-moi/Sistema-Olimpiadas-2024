#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

struct Atleta
{
    char nome[100]
    char pais[100];
    char modalidade[100];
    float pontuacao;
    struct Atleta *prox;
};

typedef struct Atleta Atleta;

void inserir(Atleta novoAtleta, Atleta *listaAtleta)
{
    Atleta *p;

    p = malloc(sizeof(Atleta));

    p->pontuacao = novoAtleta.pontuacao;

    strcpy(p->nome, novoAtleta.nome);
    strcpy(p->pais, novoAtleta.pais);
    strcpy(p->modalidade, novoAtleta.modalidade);

    p->prox = listaAtleta->prox;
    listaAtleta->prox = p;
}

static Atleta *atletas;

void cadastrarAtleta()
{
    printf("\nCadastro de atleta");

    Atleta novoAtleta;

    printf("\nInforme o nome: ");
    scanf("%s", &novoAtleta.nome);

    printf("\nInforme o pais: ");
    scanf("%s", &novoAtleta.pais);

    printf("\nInforme a modalidade: ");
    scanf("%s", &novoAtleta.modalidade);

    printf("\nInforme a pontuacao: ");
    scanf("%f", &novoAtleta.pontuacao);

    if(atletas == NULL) {
        printf("\nENTROU INICIALIZACAO");
        atletas = malloc(sizeof(Atelta));
        atletas->prox = NULL;

        atletas->pontuacao = novoAtleta.pontuacao;
        strcpy(atletas->nome, novoAtleta.nome);
        strcpy(atletas->pais, novoAtleta.pais);
        strcpy(atletas->modalidade, novoAtleta.modalidade);
    } else {
        inserir(novoAtleta, atletas);
    }
}








