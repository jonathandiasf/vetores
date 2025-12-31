#include <stdio.h>

int main() {
    int vendas[5];
    int soma = 0;
    
    // Leitura dos valores
    printf("Digite a quantidade de vendas em 5 dias:\n");
    for (int i = 0; i < 5; i++) {
	printf("Dia %d: ", i + 1);
        scanf("%d", &vendas[i]);
        soma += vendas[i];
    }

    // Exibição dos valores 
    printf("\nVendas registradas:\n");
    for (int i = 0; i < 5; i++) {
	printf("Dia %d: %d\n", i + 1, vendas[i]);
    }

    // Soma total 
    printf("\nTotal de vendas no periodo: %d\n", soma);

    return 0;
}

