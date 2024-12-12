#include<iostream>
using namespace std;

class node {
public:
    int Roll_No;
    node* next;
};

class SLL {
public:
    node* create();
    void insert(node* &head);
    void display(node* head);
    void intersection(node* A, node* B);
    void union_set(node* A, node* B, node* &unionAB);
    void neither_set(node* U, node* unionAB);
};

node* SLL::create() {
    return NULL; // Initialize the list as empty
}

void SLL::insert(node* &head) {
    int k;
    cout << "\nEnter the No. of members in class: ";
    cin >> k;

    for (int i = 0; i < k; i++) {
        node* n = new node();
        cout << "\nEnter the Roll No. of Member " << i + 1 << ": ";
        cin >> n->Roll_No;
        n->next = NULL;

        if (head == NULL) {
            head = n;
        } else {
            node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = n;
        }
    }
}

void SLL::display(node* head) {
    while (head != NULL) {
        cout << head->Roll_No << " ";
        head = head->next;
    }
    cout << "\n";
}

void SLL::intersection(node* A, node* B) {
    node* tempA = A;
    while (tempA != NULL) {
        node* tempB = B;
        while (tempB != NULL) {
            if (tempA->Roll_No == tempB->Roll_No)
                cout << tempA->Roll_No << " ";
            tempB = tempB->next;
        }
        tempA = tempA->next;
    }
    cout << "\n";
}

void SLL::union_set(node* A, node* B, node* &unionAB) {
    unionAB = NULL;
    node* tempA = A;
    node* tempB = B;

    // Add all elements of A to the union set
    while (tempA != NULL) {
        node* n = new node();
        n->Roll_No = tempA->Roll_No;
        n->next = NULL;

        if (unionAB == NULL) {
            unionAB = n;
        } else {
            node* tempUnion = unionAB;
            while (tempUnion->next != NULL)
                tempUnion = tempUnion->next;
            tempUnion->next = n;
        }
        tempA = tempA->next;
    }

    // Add unique elements of B to the union set
    while (tempB != NULL) {
        node* tempUnion = unionAB;
        bool found = false;
        while (tempUnion != NULL) {
            if (tempB->Roll_No == tempUnion->Roll_No) {
                found = true;
                break;
            }
            tempUnion = tempUnion->next;
        }
        if (!found) {
            node* n = new node();
            n->Roll_No = tempB->Roll_No;
            n->next = NULL;

            node* tempUnion = unionAB;
            while (tempUnion->next != NULL)
                tempUnion = tempUnion->next;
            tempUnion->next = n;
        }
        tempB = tempB->next;
    }
}

void SLL::neither_set(node* U, node* unionAB) {
    cout << "\nSet of Students who like neither Vanilla nor Butterscotch:\n";
    node* tempU = U;

    while (tempU != NULL) {
        node* tempUnion = unionAB;
        bool found = false;

        while (tempUnion != NULL) {
            if (tempU->Roll_No == tempUnion->Roll_No) {
                found = true;
                break;
            }
            tempUnion = tempUnion->next;
        }

        if (!found) {
            cout << tempU->Roll_No << " ";
        }
        tempU = tempU->next;
    }
    cout << "\n";
}

int main() {
    SLL s1;
    node* U, * A, * B, * unionAB;

    cout << "\nUNIVERSAL Set of Class\n";
    U = s1.create();
    s1.insert(U);
    s1.display(U);

    cout << "\n ==========================================\n";
    cout << "\nSet of Students who like Vanilla Ice-cream\n";
    A = s1.create();
    s1.insert(A);
    s1.display(A);

    cout << "\n ==========================================\n";
    cout << "\nSet of Students who like Butterscotch Ice-cream\n";
    B = s1.create();
    s1.insert(B);
    s1.display(B);

    cout << "\nSet of Students who like both Vanilla and Butterscotch:\n";
    s1.intersection(A, B);

    cout << "\nSet of Students who like either Vanilla or Butterscotch:\n";
    s1.union_set(A, B, unionAB);
    s1.display(unionAB);

    s1.neither_set(U, unionAB);

    return 0;
}