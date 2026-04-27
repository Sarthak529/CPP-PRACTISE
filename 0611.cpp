#include <iostream>
#include <cstdlib> 

using namespace std;

class Node 
{	public:
        int data;
        Node* next;
};

Node* head = nullptr;

void beginInsert();
void lastInsert();
void randomInsert();

void beginDelete();
void lastDelete();
void randomDelete();

void display();
void search();

int main() 
{
    int choice = 0;
    while(choice != 9) 
	{
        cout << "\n\n**Main Menu";
        cout << "\nChoose one option from the following list ...";
        cout << "\n===============================================\n";
        cout << "\n1. Insert in beginning\n2. Insert at last\n3. Insert at any random location\n4. Delete from Beginning";
        cout << "\n5. Delete from last\n6. Delete node after specified location\n7. Search for an element\n8. Show\n9. Exit\n";
        cout << "\nEnter your choice? ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                beginInsert();
                break;
            case 2:
                lastInsert();
                break;
            case 3:
                randomInsert();
                break;
            case 4:
                beginDelete();
                break;
            case 5:
                lastDelete();
                break;
            case 6:
                randomDelete();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
            default:
                cout << "Please enter a valid choice..\n";
        }
    }

    return 0;
}

void beginInsert() 
{  cout<<"Code for beginInsert()"<<endl; 
   Node *ptr = new Node;
}

void lastInsert() 
{ cout<<"Code for lastInsert()"<<endl;
}

void randomInsert() 
{  cout<<"Code for randomInsert()"<<endl;
}

void beginDelete() 
{	cout<<"Code for beginDelete()"<<endl;
}

void lastDelete() 
{cout<<"Code for lastDelete()"<<endl;
}

void randomDelete() 
{cout<<"Code for randomDelete()"<<endl;
}

void search() 
{cout<<"Code for search()"<<endl;
}

void display() 
{ 
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}