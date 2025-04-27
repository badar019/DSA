#include <iostream>
#include <vector>
using namespace std;
#define MAX 100

struct Element {
    int data;
    int priority;
};

class PQueue {
private:
    Element arr[MAX];
    int Size;
public:
    PQueue() {
        Size = 0;
    }

    void enqueue(int data, int priority) {
        if (Size == MAX) {
            cout << "Array is Full!!" << endl;
            return;
        }

        int i;
        for (i = Size - 1; i >= 0 && arr[i].priority > priority; i--) {
            arr[i + 1] = arr[i]; // FIXED: shift elements one position right
        }
        arr[i + 1] = {data, priority};
        Size++;
        cout << data << " Enqueued with priority |P" << priority << endl;
    }

    void dequeue() {
        if (Size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[0].data << " was dequeued" << endl;
        for (int i = 0; i < Size - 1; i++) {
            arr[i] = arr[i + 1]; // shift all elements left
        }
        Size--;
    }

    void display() {
        if (Size == 0) {
            cout << "Nothing to display!" << endl;
            return;
        }
        for (int i = 0; i < Size; i++) {
            cout << arr[i].data << "-->|P" << arr[i].priority << " ";
        }
        cout << "\n";
    }
};

int main() {
    PQueue pq;
    int choice, data, priority;
    do {
        cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the data & its priority: ";
                cin >> data >> priority;
                pq.enqueue(data, priority);
                break;
            case 2:
                pq.dequeue();
                break;
            case 3:
                pq.display();
                break;
            case 4:
                cout << "Exiting Program.." << endl;
                break;
            default:
                cout << "Invalid Input!!" << endl;
        }
    } while (choice != 4);
    return 0;
}
