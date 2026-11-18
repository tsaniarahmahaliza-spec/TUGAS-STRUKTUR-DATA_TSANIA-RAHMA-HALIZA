
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int queueData[MAX_SIZE];
int frontIndex = -1;
int rearIndex = -1;

// Fungsi Enqueue
void enqueue(int value) {
    if (rearIndex == MAX_SIZE - 1) {
        cout << "Queue Overflow! Queue is full.\n";
    } else {
        if (frontIndex == -1) {
            frontIndex = 0;
        }

        rearIndex++;
        queueData[rearIndex] = value;

        cout << value << " inserted successfully.\n";
    }
}

// Fungsi Dequeue
void dequeue() {
    if (frontIndex == -1) {
        cout << "Queue Underflow! Queue is empty.\n";
    } else {
        cout << queueData[frontIndex]
             << " removed successfully.\n";

        if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else {
            frontIndex++;
        }
    }
}

// Fungsi Front
void showFront() {
    if (frontIndex == -1) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Front element: "
             << queueData[frontIndex] << "\n";
    }
}

// Fungsi Display
void display() {
    if (frontIndex == -1) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue: ";

        for (int i = frontIndex; i <= rearIndex; i++) {
            cout << queueData[i] << " ";
        }

        cout << "\n";
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== QUEUE MENU =====\n";
        cout << "1. Enqueue  2. Dequeue\n";
        cout << "3. Front  4. Display  5. Exit\n";
        cout << "Choose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            showFront();
        } else if (choice == 4) {
            display();
        } else if (choice == 5) {
            cout << "Program finished.\n";
        } else {
            cout << "Invalid menu choice.\n";
        }

    } while (choice != 5);

    return 0;
}
