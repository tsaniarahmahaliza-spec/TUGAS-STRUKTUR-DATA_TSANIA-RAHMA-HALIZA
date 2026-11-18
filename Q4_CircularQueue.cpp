
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int circularQueue[MAX_SIZE];
int frontIndex = -1;
int rearIndex = -1;
int itemCount = 0;

// Fungsi Enqueue
void enqueue(int value) {
    if (itemCount == MAX_SIZE) {
        cout << "Queue Overflow! Queue is full.\n";
    } else {
        if (itemCount == 0) {
            frontIndex = 0;
        }

        rearIndex = (rearIndex + 1) % MAX_SIZE;

        circularQueue[rearIndex] = value;
        itemCount++;

        cout << value << " inserted successfully.\n";
    }
}

// Fungsi Dequeue
void dequeue() {
    if (itemCount == 0) {
        cout << "Queue Underflow! Queue is empty.\n";
    } else {
        cout << circularQueue[frontIndex]
             << " removed successfully.\n";

        if (itemCount == 1) {
            frontIndex = -1;
            rearIndex = -1;
        } else {
            frontIndex = (frontIndex + 1) % MAX_SIZE;
        }

        itemCount--;
    }
}

// Fungsi Display
void display() {
    if (itemCount == 0) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue: ";

        for (int i = 0; i < itemCount; i++) {
            int index = (frontIndex + i) % MAX_SIZE;
            cout << circularQueue[index] << " ";
        }

        cout << "\n";
    }
}

int main() {
    cout << "===== CIRCULAR QUEUE TEST =====\n";

    cout << "\n1-5. Enqueue 10, 20, 30, 40, 50\n";

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    cout << "\n6-7. Dequeue twice\n";

    dequeue();
    dequeue();

    cout << "\n8-9. Enqueue 60, 70\n";

    enqueue(60);
    enqueue(70);

    cout << "\n10. Display Queue\n";

    display();

    return 0;
}
