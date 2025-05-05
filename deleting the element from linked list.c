// Assuming you have a linked list node structure like:
struct Node {
    int data;
    Node* next;
};

// Function to delete a node with a specific value
Node* deleteNode(Node* head, int value) {
    if (head == NULL) {
        return head; // List is empty
    }

    // If the head node contains the value to delete
    if (head->data == value) {
        Node* temp = head;
        head = head->next; // Update head to the next node
        delete temp; // Free memory
        return head;
    }

    // Find the previous node of the node to be deleted
    Node* prev = NULL;
    Node* current = head;
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If the value is not found in the list
    if (current == NULL) {
        return head; // No changes
    }

    // Update the previous node's next pointer to skip the deleted node
    prev->next = current->next;

    // Free memory
    delete current;

    return head;
}
