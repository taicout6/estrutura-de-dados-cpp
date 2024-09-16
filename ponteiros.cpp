#include <iostream>

int main () {
  int x = 2049;
  int *px = &x;
  printf("O tamanho de x: %d bytes\n", sizeof(int));
  printf("O valor de x: %d\n", x);
  printf("O endereço de x: %d\n", px);
  printf("O ponteiro de x: %d\n", *px);

  return 0;
}

