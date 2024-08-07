#include "queue.h"
#include <iostream>
#include <ostream>

using namespace std;

int main() {
    ItemType character;
    Queue queue;
    ItemType queueItem;

    cout << "Adicione uma String" << endl;
    cin.get(character);

    while (character != '\n' and !queue.isFull()) {
        queue.enqueue(character);
        cin.get(character);
    }

    while (!queue.isEmpty()) {
        queueItem = queue.dequeue();
        cout << queueItem;
    }

    cout << endl;

}
