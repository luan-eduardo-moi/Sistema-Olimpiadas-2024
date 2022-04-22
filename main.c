#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <C:\Users\junio\OneDrive - UNIP\PIM\Codigo\Olimpiadas 2024\menus.c>
#include <C:\Users\junio\Onedrive - UNIP\PIM\Codigo\Olimpiadas 2024\limparTela.c>
#include <C:\Users\junio\OneDrive - UNIP\PIM\Codigo\Olimpiadas 2024\leitor.c>


int main()
{
    setlocale(LC_ALL,"");
    int opcaoPrincipal;
    int opcaoSecundario;
    int pesquisaUsuario;

    do
    {
        gerarMenuPrincipal();
        scanf("%d", &opcaoPrincipal);
        limparTela();
        if (opcaoPrincipal == 1)
        {
            do
            {
                gerarMenuAtletas();
                scanf("%d", &opcaoSecundario);
                limparTela();
                switch (opcaoSecundario)
                {
                case 1:
                    do
                    {
                        gerarEscolhaPais();
                        scanf("%d", &pesquisaUsuario);
                        switch (pesquisaUsuario)
                        {
                        case 1:
                            limparTela();
                            lerArquivos(1);
                            limparTela();
                            break;
                        case 2:
                            limparTela();
                            lerArquivos(2);
                            limparTela();
                            break;
                        case 3:
                            limparTela();
                            lerArquivos(3);
                            limparTela();
                            break;
                        case 4:
                            limparTela();
                            lerArquivos(4);
                            limparTela();
                            break;
                        case 5:
                            limparTela();
                            lerArquivos(5);
                            limparTela();
                            break;
                        case 6:
                            limparTela();
                            break;
                        default:
                            limparTela();
                            printf("\nOpção inválida!!!");

                        }
                    }
                    while (pesquisaUsuario !=6);
                    break;
                case 2:
                    do
                    {
                        gerarEscolhaModalidade();
                        scanf("%d", &pesquisaUsuario);
                        switch (pesquisaUsuario)
                        {
                        case 1:
                            limparTela();
                            lerArquivos(6);
                            limparTela();
                            break;
                        case 2:
                            limparTela();
                            lerArquivos(7);
                            limparTela();
                            break;
                        case 3:
                            limparTela();
                            lerArquivos(8);
                            limparTela();
                            break;
                        case 4:
                            limparTela();
                            lerArquivos(9);
                            limparTela();
                            break;
                        case 5:
                            limparTela();
                            lerArquivos(10);
                            limparTela();
                            break;
                        case 6:
                            limparTela();
                            lerArquivos(11);
                            limparTela();
                            break;
                        case 7:
                            limparTela();
                            break;
                        default:
                            limparTela();
                            printf("\nOpção inválida!!!");
                        }
                    }
                    while (pesquisaUsuario != 7);
                    break;
                case 3:
                    break;
                default:
                    printf("\nOpção inválida!!!");
                }
            }
            while (opcaoSecundario != 3);
        }
        else if (opcaoPrincipal == 2)
        {
            do
            {
                gerarMenuJogos();
                scanf("%d", &opcaoSecundario);
                limparTela();
                switch (opcaoSecundario)
                {
                case 1:
                    do
                    {
                        gerarEscolhaData();
                        scanf("%d", &pesquisaUsuario);
                        switch (pesquisaUsuario)
                        {
                        case 1:
                            limparTela();
                            lerArquivos(12);
                            limparTela();
                            break;
                        case 2:
                            limparTela();
                            lerArquivos(13);
                            limparTela();
                            break;
                        case 3:
                            limparTela();
                            lerArquivos(14);
                            limparTela();
                        case 4:
                            limparTela();
                            break;
                        default:
                            limparTela();
                            printf("\nOpção inválida!!!");
                        }
                    }
                    while (pesquisaUsuario != 4);
                    break;
                case 2:
                    do
                    {
                        gerarEscolhaModalidade();
                        scanf("%d", &pesquisaUsuario);
                        switch (pesquisaUsuario)
                        {
                        case 1:
                            limparTela();
                            lerArquivos(15);
                            limparTela();
                            break;
                        case 2:
                            limparTela();
                            lerArquivos(16);
                            limparTela();
                            break;
                        case 3:
                            limparTela();
                            lerArquivos(17);
                            limparTela();
                            break;
                        case 4:
                            limparTela();
                            lerArquivos(18);
                            limparTela();
                            break;
                        case 5:
                            limparTela();
                            lerArquivos(19);
                            limparTela();
                            break;
                        case 6:
                            limparTela();
                            lerArquivos(20);
                            limparTela();
                            break;
                        case 7:
                            limparTela();
                            break;
                        default:
                            limparTela();
                            printf("\nOpção inválida!!!");
                        }
                    }
                    while (pesquisaUsuario != 7);
                    break;
                case 3:
                    break;
                default:
                    limparTela();
                    printf("\nOpção inválida!!!");
                }
            }
            while (opcaoSecundario != 3);
        }
        else if (opcaoPrincipal == 3)
        {
            do
            {
                gerarPodioMedalhas();
                scanf("%d", &opcaoSecundario);
                limparTela();
                switch (opcaoSecundario)
                {
                case 1:
                    limparTela();
                    lerArquivos(21);
                    limparTela();
                    break;
                case 2:
                    limparTela();
                    lerArquivos(22);
                    limparTela();
                    break;
                case 3:
                    break;
                default:
                    limparTela();
                    printf("\nOpção inválida!!!");
                }
            }
            while (opcaoSecundario != 3);
        }
        else if (opcaoPrincipal > 4 || opcaoPrincipal <= 0)
        {
            printf("\nOpção inválida!!!");
        }

}
while (opcaoPrincipal != 4);

}
