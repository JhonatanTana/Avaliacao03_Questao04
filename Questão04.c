#include <stdio.h>
#include <locale.h>

int main() {
    int linhas, colunas;
    int matriz[linhas][colunas];
    int transposta[colunas][linhas];
    
    setlocale (LC_ALL,"");

    printf("Quantas linhas a matriz possui: ");
    scanf("%d", &linhas);
    printf("Quantas colunas a matriz possui: ");
    scanf("%d", &colunas);

    printf("Quais os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("A matriz transposta é:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}