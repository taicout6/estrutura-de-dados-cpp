#include <iostream>

int n1;
int n2;

int main() {
    std::cout << "Digite o primeiro número: ";
    std::cin >> n1;
    std::cout << "Digite o segundo número: ";
    std::cin >> n2;

    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int multiplicacao = n1 * n2;
    int divisao = n1 / n2;
    int resto = n1 % n2;

    std::cout << soma;
    std::cout << subtracao;
    std::cout << multiplicacao;
    std::cout << divisao;
    std::cout << resto;

    return 0;
}
