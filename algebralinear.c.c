#include <stdio.h>

// Função auxiliar para calcular o determinante de uma submatriz
int calcularDeterminanteSubmatriz(int ordem, int submatriz[ordem][ordem]);

// Função principal para calcular o determinante de uma matriz NxN
int calcularDeterminante(int ordem, int matriz[ordem][ordem]) {
    // Condição de parada da recursão
    if (ordem == 1) {
        return matriz[0][0];
    }

    int determinante = 0;

    // Loop para percorrer os elementos da primeira linha (ou coluna)
    for (int j = 0; j < ordem; j++) {
        int submatrizMenor[ordem - 1][ordem - 1];

        // Criando a submatriz eliminando a primeira linha
        for (int k = 0; k < ordem - 1; k++) {
            for (int l = 0; l < ordem - 1; l++) {
                submatrizMenor[k][l] = matriz[k + 1][(l < j) ? l : l + 1];
            }
        }

        // Adicionando ou subtraindo o cofator da submatriz
        determinante += ((j % 2 == 0) ? 1 : -1) * matriz[0][j] * calcularDeterminanteSubmatriz(ordem - 1, submatrizMenor);
    }

    return determinante;
}

// Função auxiliar para calcular o determinante de uma submatriz
int calcularDeterminanteSubmatriz(int ordem, int submatriz[ordem][ordem]) {
    // Condição de parada da recursão
    if (ordem == 2) {
        return submatriz[0][0] * submatriz[1][1] - submatriz[0][1] * submatriz[1][0];
    } else {
        int determinante = 0;

        // Loop para percorrer os elementos da primeira linha (ou coluna)
        for (int j = 0; j < ordem; j++) {
            int submatrizMenor[ordem - 1][ordem - 1];

            // Criando a submatriz eliminando a primeira linha
            for (int k = 0; k < ordem - 1; k++) {
                for (int l = 0; l < ordem - 1; l++) {
                    submatrizMenor[k][l] = submatriz[k + 1][(l < j) ? l : l + 1];
                }
            }

            // Adicionando ou subtraindo o cofator da submatriz
            determinante += ((j % 2 == 0) ? 1 : -1) * submatriz[0][j] * calcularDeterminanteSubmatriz(ordem - 1, submatrizMenor);
        }

        return determinante;
    }
}

int main() {
    int ordem;

    // Preenchendo a ordem e a matriz (exemplo)
    printf("Digite a ordem da matriz: ");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];
    printf("Digite os elementos da matriz %dx%d:\n", ordem, ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Chamando a função para calcular o determinante
    int resultado = calcularDeterminante(ordem, matriz);

    // Exibindo o resultado
    printf("O determinante da matriz é: %d\n", resultado);

    return 0;
}