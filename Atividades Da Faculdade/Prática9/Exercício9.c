//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    float preco_compra, preco_venda, lucro;
    float total_compra = 0, total_venda = 0, total_lucro = 0;
    int count_lucro_ate_10 = 0, count_lucro_10_20 = 0, count_lucro_maior_20 = 0;

    do {
        printf("Digite o preço de compra: R$");
        scanf("%f", &preco_compra);
        if (preco_compra == 0) {
            break; // interrompe o laço caso o preço de compra seja igual a zero
        }
        printf("Digite o preço de venda: R$");
        scanf("%f", &preco_venda);

        lucro = preco_venda - preco_compra;
        total_compra += preco_compra;
        total_venda += preco_venda;
        total_lucro += lucro;

        if (lucro < preco_compra * 0.1) {
            count_lucro_ate_10++;
        } else if (lucro <= preco_compra * 0.2) {
            count_lucro_10_20++;
        } else {
            count_lucro_maior_20++;
        }

    } while (preco_compra != 0);

    printf("\nTotal de mercadorias com lucro inferior a 10%%: %d\n", count_lucro_ate_10);
    printf("Total de mercadorias com lucro entre 10%% e 20%%: %d\n", count_lucro_10_20);
    printf("Total de mercadorias com lucro superior a 20%%: %d\n", count_lucro_maior_20);
    printf("\nValor total de compra: R$%.2f\n", total_compra);
    printf("Valor total de venda: R$%.2f\n", total_venda);
    printf("Lucro total: R$%.2f\n", total_lucro);

    return 0;
}
