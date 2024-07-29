#include <iostream>

using namespace std;

int main() {
    int n1;
    int counter = 0;
    int amount = 0;

    while (counter < 10) {
        cout << "Digite um número (" << counter << ")" << endl;
        cin >> n1;

        if (n1 < 5) {
            amount++;
        }
        counter++;
    }
}
