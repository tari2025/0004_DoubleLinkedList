#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        string nm;
        cout << "\nEnter the roll number of the student";
        cin >> nim;

        // Step 1: Allcate memory for new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data fields
        newNode->noMhs = nim;

        // Step 3 insert at beginning if list is empty or nim is smallest
        if (START == NULL || nim <= START->noMhs)
        {

            if (START != NULL && nim == START->noMhs)

                cout << "\nDuplicate number not allowed" << endl;
        }
        // step 4: newNode.next =  START
        newNode->next = START;

        // step 5: start.prev = newNode (if start exist)
        if (START != NULL)
            START->prev = newNode;

        // step 6: newNode.prev = NULL
        newNode->prev = NULL;

        // Step 7: START = newNode
        START = newNode;
        return;
    }

    // insert in between node
    // step 8 : locate polition for insertion
    Node *current = START;
    while (current->next != NULL && current->next->noMhs < nim)
    {
        current = current->next;
    }

    if current->next !=NULL && nim current->next->noMhs)
        {
            cout << "nDuplicate roll number not allowed" << endl;
            return;
        }

    // step 9 : insert between current and current->next
    newNode->next = current->next; // step 9a
    newNode->prev = current;       // step 9b

    // insert last node
    if (current->next != NULL)
}
}
}
}