#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char nome[30];
    long populacao;
    float area;
    float pib; // PIB em bilhões
    int pontos_turisticos;
};

int main() {

    struct Carta carta1 = {
        'A',
        "A01",
        "São Paulo",
        12325000,
        1521.11,
        699.28,
        50
    };

    struct Carta carta2 = {
        'B',
        "B02",
        "Rio de Janeiro",
        6748000,
        1200.25,
        300.50,
        30
    };

    int opcao;

    printf("===== SUPER TRUNFO - ESTACIO =====\n\n");

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nCidade: %s\n\n",
           carta1.estado, carta1.codigo, carta1.nome);

    printf("Carta 2:\nEstado: %c\nCódigo: %s\nCidade: %s\n\n",
           carta2.estado, carta2.codigo, carta2.nome);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch (opcao) {

        case 1:
            printf("População: %ld x %ld\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedora: %s\n", carta1.nome);
            else
                printf("Vencedora: %s\n", carta2.nome);
            break;

        case 2:
            printf("Área: %.2f km² x %.2f km²\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedora: %s\n", carta1.nome);
            else
                printf("Vencedora: %s\n", carta2.nome);
            break;

        case 3:
            printf("PIB: %.2f bi x %.2f bi\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedora: %s\n", carta1.nome);
            else
                printf("Vencedora: %s\n", carta2.nome);
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n",
                   carta1.pontos_turisticos, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedora: %s\n", carta1.nome);
            else
                printf("Vencedora: %s\n", carta2.nome);
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
