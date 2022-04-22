#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void gerarMenuPrincipal(){
    printf("\n|...............::Menu Principal::...............|");
    printf("\n|1 - Pesquisa por Atletas                        |");
    printf("\n|2 - Tabela de Jogos                             |");
    printf("\n|3 - Pódio de Medalhas                           |");
    printf("\n|4 - Sair                                        |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarMenuAtletas(){
    printf("\n|................::Menu Atletas::................|");
    printf("\n|1 - Pesquisar por países                        |");
    printf("\n|2 - Pesquisar por modalidade                    |");
    printf("\n|3 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarMenuJogos(){
    printf("\n|..............::Tabela de jogos::...............|");
    printf("\n|1 - Pesquisar por data                          |");
    printf("\n|2 - Pesquisar por modalidade                    |");
    printf("\n|3 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarMenuPaises(){
    printf("\n|................::Menu Países::.................|");
    printf("\n|1 - Pesquisar por Modalidade                    |");
    printf("\n|2 - Pesquisar por Atleta                        |");
    printf("\n|3 - Pesquisar por Classificação                 |");
    printf("\n|4 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarPodioMedalhas(){
    printf("\n|.............::Pódio de Medalhas::..............|");
    printf("\n| Medalha de Ouro - 30                           |");
    printf("\n| Medalha de Prata - 15                          |");
    printf("\n| Medalha de Bronze - 7                          |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\n|1 - Pódio atual                                 |");
    printf("\n|2 - Ultima Olimpiada                            |");
    printf("\n|3 - voltar                                      |");
    printf("\n|...............::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarEscolhaPais()
{
    printf("\n|................::Escolha o País::.................|");
    printf("\n|1 - Argentina                                      |");
    printf("\n|2 - Brasil                                         |");
    printf("\n|3 - Espanha                                        |");
    printf("\n|4 - França                                         |");
    printf("\n|5 - Japão                                          |");
    printf("\n|6 - Cancelar Pesquisa                              |");
    printf("\n|...............:::::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarEscolhaModalidade()
{
    printf("\n|.............::Escolha a modalidade::..............|");
    printf("\n|1 - Atletismo                                      |");
    printf("\n|2 - Boxe                                           |");
    printf("\n|3 - Ginastica artística                            |");
    printf("\n|4 - Skate                                          |");
    printf("\n|5 - Surfe                                          |");
    printf("\n|6 - Tênis                                          |");
    printf("\n|7 - Cancelar pesquisa                              |");
    printf("\n|...............:::::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

void gerarEscolhaData ()
{
    printf("\n|...............::Escolha uma data::................|");
    printf("\n|1 - 26/07/2024                                     |");
    printf("\n|2 - 27/07/2024                                     |");
    printf("\n|3 - 28/07/2024                                     |");
    printf("\n|4 - Cancelar pesquisa                              |");
    printf("\n|...............:::::::::::::::::::::...............|");
    printf("\nEscolha uma opção: ");
}

