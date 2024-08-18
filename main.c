#include <stdio.h>

// Função que executa a árvore de decisão
void decisionTree(int operation, double num1, double num2) {
    switch(operation) {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: Divisão por zero não é permitida.\n");
            break;
        default:
            printf("Operação inválida.\n");
    }
}

int main() {
    int operation;
    double num1, num2;

    printf("Escolha a operação desejada:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação: ");
    scanf("%d", &operation);

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // Chama a árvore de decisão com os números e a operação selecionada
    decisionTree(operation, num1, num2);

    return 0;
}
