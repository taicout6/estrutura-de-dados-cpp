#include <iostream>

using namespace std;

int main() {
    int num_elem;

    cout << "Digite o tamanho do vetor: ";
    cin >> num_elem;

    int *c = new int[num_elem];

    for (int index = 0; index < num_elem; index += 1) {
        c[index] = 2 * index;
    }

    for (int index = 0; index < num_elem; index += 1) {
        cout << "c[" << index << "] = " << c[index] << "\n";
    }
    return 0;
}
