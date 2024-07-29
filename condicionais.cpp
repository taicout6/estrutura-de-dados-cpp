#include <iostream>

using namespace std;

int n1;
int n2;

int main() {
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;

    if (n1 == n2) {
        cout << n1 << "== " << n2 << endl;
    }

    if (n1 != n2) {
        cout << n1 << "!= " << n2 << endl;
    }

    if (n1 < n2) {
        cout << n1 << "< " << n2 << endl;
    }

    if (n1 > n2) {
        cout << n1 << "> " << n2 << endl;
    }
}
