#include <iostream>

// Function to insert a new node at front/beginning
void Insert(int x) {
    // Create a new node
    struct Node* temp = new Node;
    temp->data = x;

    // Adjust pointers to insert new node
    temp->next = first;
    first = temp;
}

int main() {
    // Assuming linked list is already created, and first is initialized
    struct Node* first = /* Initialize your linked list here */;

    // Example: Inserting 8 at front
    Insert(8);

    // Perform any additional operations or print updated linked list
    // Rest of your main code...

    return 0;
}
