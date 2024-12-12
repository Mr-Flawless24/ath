
#include <iostream>
using namespace std;

class PizzaParlor {
    int front, rear, size;
    int* queue;

public:
    // Constructor to initialize the PizzaParlor with a maximum size
    PizzaParlor(int M) {
        size = M;
        front = rear = -1;
        queue = new int[size];
    }

    // Check if the queue is full
    bool isFull() {
        return (rear + 1) % size == front;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Place a new order in the queue
    void placeOrder(int orderNumber) {
        if (isFull()) {
            cout << "Pizza parlor is full! Cannot accept more orders." << endl;
            return;
        }
        if (front == -1) { // If queue is empty, initialize front
            front = 0;
        }
        rear = (rear + 1) % size;
        queue[rear] = orderNumber;
        cout << "Order " << orderNumber << " placed successfully." << endl;
    }

    // Serve the oldest order in the queue
    void serveOrder() {
        if (isEmpty()) {
            cout << "No orders to serve!" << endl;
            return;
        }
        cout << "Serving order " << queue[front] << endl;
        if (front == rear) { // Queue becomes empty after serving
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    // Display all orders currently in the queue
    void displayOrders() {
        if (isEmpty()) {
            cout << "No orders to display!" << endl;
            return;
        }
        cout << "Orders in the queue: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break; // Stop after displaying the last order
            i = (i + 1) % size;
        }
        cout << endl;
    }

    // Destructor to clean up dynamically allocated memory
    ~PizzaParlor() {
        delete[] queue;
    }
};

int main() {
    int M;

    // Get the maximum number of orders the queue can accept
    cout << "Enter the maximum number of orders the pizza parlor can accept: ";
    cin >> M;

    // Ensure the input size is positive
    if (M <= 0) {
        cout << "Invalid size. Please enter a positive number." << endl;
        return 1;
    }

    PizzaParlor parlor(M);

    int choice, orderNumber;
    do {
        cout << "\n1. Place Order\n2. Serve Order\n3. Display Orders\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter order number to place: ";
            cin >> orderNumber;
            parlor.placeOrder(orderNumber);
            break;
        case 2:
            parlor.serveOrder();
            break;
        case 3:
            parlor.displayOrders();
            break;
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
