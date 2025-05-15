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
        current - next->prev = newNode; // step 9c

    void hapus()
    {
        if (START == NULL)
    }
    cout << "\nList is empty" << endl;
    return;
}

    cout
    << "\nEnter the roll number of the student whose record is to be deleted: ";
int rollNo;
cin >> rollNo;

Node *current = START;

// Step 1: traverse the list to find the node
while (current != NULL && current->noMhs != rollNo)
    current = current->next;

if (current == NULL)
{
    cout << "Record not found" << endl;
    return;
}
// step 2: if node is at the beginning
if (current == START)
{
    START = current->next; // step 2a :START=START.next
    if (START != NULL)
        START->prev = NULL; // Step 2b: START.prev=NULL
}
else
{

    // step 3 :Link previous node to next of current
    current->prev->next = current->next;

    // step 4: If current is not the last node
    if (current->next != NULL)
        current->next->prev = current->prev;
}
// step 5 dalete the node
dalete current;
cout << "Record with roll number" << "deleted" << endl;
}

void traverse()
{
    if (START == NULL)
    {
        cout << "\nList is empty" >> endl;
        return;
    }

    // step1 :mark first node as currentNode
    Node *currentNode = START;

    // Step 2: repeat untuill currendNode == NULL
    cout << "\nRecord in accending order of roll number are:\n";
    int i = 0;
    while (currentNode != NULL)
    {
        cout << i + 1 << ". " << currentNode->noMhs << " " << endl;

        // step 3:Move to next node
        currentNode = currentNode->next;
        i++;
    }
}

public:
void revtraverse()
{
    if (START == NULL)
    {
        cout << "nList is empty" << endl;
        return;
    }
    // step1 :move to last node
    Node *currentNode = START;
    int i = 0;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        i++;
    }
}
// step 2 traverse backward
cout << "\nRecord in descending order of roll number aer:\n";
while (currentNode != NULL)
{
    cout << i + 1 << ". " << currentNode->noMhs << " " << endl;

    // step 3 :move to previous node
currentNode = currentNode->prev

              public : void
                       SearcData()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        int rollNo : cout << "\nEnter the roll number to search: ";
        cin >> rollNo;

        Node *current = START;

        // STEP 1: traverse to find matching roll number
        while (current != NULL && current->noMhs != rollNo)
            current = current->next;

        // step 2 :output result
        if (current == NULL)
        {
            cout << "Record not found\n";
        }
        else
        {
            cout << "Record found\n";
            cout << "Roll Number: " << current->noMhs << endl;

            int main()
            {
                DoubleLinkedList list;
                char choice;

                do
                {

                    cout << "\nMenu:\n";
                    cout << "1. Add Record\n";
                    cout << "2. Delete Record\n";
                    cout << "3. View Ascending\n";
                    cout << "4. View Descending\n";
                    cout << "5. Search Record\n";
                    cout << "6. Exit\n";
                    cout << "Enter your choice: ";

                    cin >> choice;

                    switch (choice)
                    {
                    case '1':
                        list.addNode();
                        break;
                    case '2':
                        list.hapus();
                        break;
                    case '3':
                        list.traverse();
                        break;
                    case '4':
                        list.revtraverse();
                        break;
                    case '5':
                        list.SearchData();
                        break;
                    case '6':
                        return 0;
                    default:
                        cout << "Invalid option\n";
                    }
                    cout << "n\nPress Enter to continue...";
                    cin.ignore();
                    cin.get();
                    cout << endl;
                    system("clear");
                } while (choice != '6');
            }
        }
    }