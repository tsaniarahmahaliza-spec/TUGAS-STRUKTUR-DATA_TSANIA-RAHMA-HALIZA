
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int stackData[MAX_SIZE];
int topIndex = -1;

// Fungsi Push
void push(int value) {
    if (topIndex == MAX_SIZE - 1) {
        cout << "Stack Overflow! Stack is full.\n";
    } else {
        topIndex++;
        stackData[topIndex] = value;
        cout << value << " inserted successfully.\n";
    }
}

// Fungsi Pop
void pop() {
    if (topIndex == -1) {
        cout << "Stack Underflow! Stack is empty.\n";
    } else {
        cout << stackData[topIndex] << " removed successfully.\n";
        topIndex--;
    }
}

// Fungsi Peek
void peek() {
    if (topIndex == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Top element: " << stackData[topIndex] << "\n";
    }
}

// Fungsi Display
void display() {
    if (topIndex == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack (top to bottom): ";
        for (int i = topIndex; i >= 0; i--) {
            cout << stackData[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push  2. Pop  3. Peek\n";
        cout << "4. Display  5. Exit\n";
        cout << "Choose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            push(value);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            peek();
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
