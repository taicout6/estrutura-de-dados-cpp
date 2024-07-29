#include <iostream>

using namespace std;

int main() {
    int count;
    int n;
    int sum;

    do {
        cout << "Insira um novo número: " << endl;
        cin >> n;

        sum += n;
        count++;
    } while (n != 0);
}
