
#include <iostream>
#define MAX 10
using namespace std;

struct queue {
    int data[MAX];
    int front, rear;
};

class Queue {
    struct queue q;

public:
    Queue() {
        q.front = q.rear = -1;
    }

    int isempty() {
        return (q.front == -1) ? 1 : 0;
    }

    int isfull() {
        return ((q.rear + 1) % MAX == q.front) ? 1 : 0;
    }

    void enqueueFront(int x) {
        if (isfull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isempty()) {
            q.front = q.rear = 0;
        } else if (q.front == 0) {
            q.front = MAX - 1;
        } else {
            q.front--;
        }
        q.data[q.front] = x;
    }

    void enqueueRear(int x) {
        if (isfull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isempty()) {
            q.front = q.rear = 0;
        } else {
            q.rear = (q.rear + 1) % MAX;
        }
        q.data[q.rear] = x;
    }

    int dequeueFront() {
        if (isempty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int removed = q.data[q.front];
        if (q.front == q.rear) {
            q.front = q.rear = -1;
        } else {
            q.front = (q.front + 1) % MAX;
        }
        return removed;
    }

    int dequeueRear() {
        if (isempty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int removed = q.data[q.rear];
        if (q.front == q.rear) {
            q.front = q.rear = -1;
        } else if (q.rear == 0) {
            q.rear = MAX - 1;
        } else {
            q.rear--;
        }
        return removed;
    }

    void display() {
        if (isempty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        int i = q.front;
        while (true) {
            cout << q.data[i] << " ";
            if (i == q.rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    Queue obj;
    int ch, x;
    do {
        cout << "\n1. Insert Job at Front \n2. Insert Job at Rear \n3. Delete Job from Front \n4. Delete Job from Rear \n5. Display \n6. Exit \nEnter your Choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "Enter Data: ";
            cin >> x;
            obj.enqueueFront(x);
            break;

        case 2:
            cout << "Enter Data: ";
            cin >> x;
            obj.enqueueRear(x);
            break;

        case 3:
            x = obj.dequeueFront();
            if (x != -1)
                cout << "Deleted Element from Front = " << x << endl;
            break;

        case 4:
            x = obj.dequeueRear();
            if (x != -1)
                cout << "Deleted Element from Rear = " << x << endl;
            break;

        case 5:
            cout << "Queue contains: ";
            obj.display();
            break;

        case 6:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (ch != 6);

    return 0;
}
