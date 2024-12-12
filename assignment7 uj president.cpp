
#include <iostream>
#include <string>
using namespace std;

class node {
public:
    string name;
    node* next;
    string PRN;
};

class SLL {
public:
    node* create();
    void insert(node* head);
    void display(node* head);
    void computeTot(node* head);
    void delete_member(node* head);
    void concatenate(node* head1, node* head2);
};

node* SLL::create() {
    node* head = new node();
    cout << "\nEnter the name of the president of the club: ";
    cin >> head->name;
    cout << "Enter the PRN number: ";
    cin >> head->PRN;
    head->next = nullptr;
    return head;
}

void SLL::insert(node* head) {
    int k;
    cout << "\nEnter the number of members in the club: ";
    cin >> k;

    node* temp = head; // Temporary pointer for traversal
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    for (int i = 0; i < k; i++) {
        node* n = new node();
        cout << "\nEnter the name: ";
        cin >> n->name;
        cout << "Enter PRN number: ";
        cin >> n->PRN;
        n->next = nullptr;

        temp->next = n;
        temp = temp->next;
    }

    node* sec = new node();
    cout << "\nEnter the secretary's name: ";
    cin >> sec->name;
    cout << "Enter PRN number: ";
    cin >> sec->PRN;
    sec->next = nullptr;

    temp->next = sec;
}

void SLL::display(node* head) {
    if (head == nullptr) {
        cout << "The list is empty.\n";
        return;
    }

    while (head != nullptr) {
        cout << head->name << " (" << head->PRN << ") -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

void SLL::computeTot(node* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    cout << "\nTotal number of members in the club: " << count << endl;
}

void SLL::delete_member(node* head) {
    string delname;
    cout << "\nEnter the name of the member to be deleted: ";
    cin >> delname;

    node* prev = nullptr;
    node* curr = head;

    while (curr != nullptr && curr->name != delname) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr) {
        cout << "\nMember not found!\n";
        return;
    }

    if (prev != nullptr) {
        prev->next = curr->next;
    } else {
        cout << "\nCannot delete the head node (president) using this method.\n";
        return;
    }

    delete curr;
    cout << "\nMember " << delname << " deleted successfully.\n";
}

void SLL::concatenate(node* head1, node* head2) {
    if (head1 == nullptr) {
        cout << "\nFirst list is empty. Second list becomes the result.\n";
        return;
    }

    if (head2 == nullptr) {
        cout << "\nSecond list is empty. No concatenation needed.\n";
        return;
    }

    node* temp = head1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head2;
    cout << "\nLists concatenated successfully.\n";
}

int main() {
    SLL s1;

    cout << "Create list 1:\n";
    node* head1 = s1.create();
    s1.insert(head1);
    s1.display(head1);
    s1.computeTot(head1);

    cout << "\nDeleting a member from list 1:\n";
    s1.delete_member(head1);
    s1.display(head1);

    cout << "\nCreate list 2:\n";
    node* head2 = s1.create();
    s1.insert(head2);
    s1.display(head2);

    cout << "\nConcatenating list 1 and list 2:\n";
    s1.concatenate(head1, head2);
    s1.display(head1);

    return 0;
}
