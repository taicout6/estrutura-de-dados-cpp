#include <iostream>

using namespace std;

int main() {
    int total;
    for (int n = 2; n <= 20; n += 2) {
        total += n;
    }
    cout << "A soma da série é" << total << endl;
    return 0;
}
