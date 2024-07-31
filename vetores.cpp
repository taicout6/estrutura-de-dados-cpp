#include <iostream>

using namespace std;

const int NUM_ELEM = 10;

int main() {
    int c[NUM_ELEM];

    for (int index = 0; index < NUM_ELEM; index += 1) {
        c[index] = 2 * index;
    }

    for (int index = 0; index < NUM_ELEM; index += 1) {
        cout << "c[" << index << "] = " << c[index] << "\n";
    }
    return 0;
}
