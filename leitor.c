#include <stdio.h>
#include <conio.h>
#include <locale.h>
void lerArquivos(int opcao)
{

    FILE *pont_arq;
    char texto_str[500];
    if (opcao == 1)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Atletas Paises\\AtletasArgentina.txt", "r");
    }
    else if (opcao == 2)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Atletas Paises\\AtletasBrasil.txt", "r");
    }
    else if (opcao == 3)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Atletas Paises\\AtletasEspanha.txt", "r");
    }
    else if (opcao == 4)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Atletas Paises\\AtletasFrança.txt", "r");
    }
    else if (opcao == 5)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Atletas Paises\\AtletasJapão.txt", "r");
    }
    else if (opcao == 6)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Modalidades\\atletismo.txt", "r");
    }
    else if (opcao == 7)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Modalidades\\boxe.txt", "r");
    }
    else if (opcao == 8)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Modalidades\\ginastica artistica.txt", "r");
    }
    else if (opcao == 9)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Modalidades\\skate.txt", "r");
    }
    else if (opcao == 10)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Modalidades\\surfe.txt", "r");
    }
    else if (opcao == 11)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\Modalidades\\tenis.txt", "r");
    }
    else if (opcao == 12)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\26_07_2024.txt", "r");
    }
    else if (opcao == 13)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\27_07_2024.txt", "r");
    }
    else if (opcao == 14)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\28_07_2024.txt", "r");
    }
    else if (opcao == 15)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\atletismo.txt", "r");
    }
    else if (opcao == 16)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\boxe.txt", "r");
    }
    else if (opcao == 17)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\ginastica.txt", "r");
    }
    else if (opcao == 18)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\skate.txt", "r");
    }
    else if (opcao == 19)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\surfe.txt", "r");
    }
    else if (opcao == 20)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\datas jogos\\tenis.txt", "r");
    }
    else if (opcao == 21)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\podio\\podioatual.txt", "r");
    }
    else if (opcao == 22)
    {
        pont_arq = fopen("C:\\Users\\junio\\OneDrive - UNIP\\PIM\\Codigo\\Olimpiadas 2024\\dados\\podio\\ultimopodio.txt", "r");
    }
    while(fgets(texto_str, 500, pont_arq) != NULL)
    {
        setlocale(LC_ALL,"");
        printf("%s", texto_str);
    }


    fclose(pont_arq);

    getch();
    return(0);
}
