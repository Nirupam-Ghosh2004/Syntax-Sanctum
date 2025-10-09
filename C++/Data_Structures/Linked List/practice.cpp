#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~node()
    {
        int value = this->data;
        while (this->next != NULL)
        {
            delete next; // free memory of each node
            this->next = NULL;
        }
        cout<<"Memory is free for node with data : "<<value<<endl;
    }
};

void insertAthead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtpos(node *&head, node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        insertAthead(head, d);
        return;
    }
    node *temp = head;
    int x = 1;
    while (x != pos - 1)
    {
        temp = temp->next;
        x++;
    }

    if (temp->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }

    node *nn = new node(d);
    nn->next = temp->next;
    temp->next = nn;
}

void delPos(node* &head, node* &tail, int pos)
{
    if(pos==1){
        node* temp =head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* prev = NULL;
        node* curr = head;
        int ctr = 1;
        while(ctr < pos)
        {
            prev = curr;
            curr = curr->next;
            ctr++;
        }
        prev->next = curr->next;
        if(curr->next == NULL)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;

    }

}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    print(head);

    insertAthead(head, 15);
    print(head);

    insertAthead(head, 20);
    print(head);

    insertAttail(tail, 5);
    print(head);

    insertAtpos(head, tail, 1, 56);
    print(head);

    insertAtpos(head, tail, 3, 59);
    print(head);

    insertAtpos(head, tail, 6, 90);
    print(head);

    insertAtpos(head, tail, 8, 98);
    print(head);
    
    cout<<"Head ---> "<<head->data<<endl;
    cout<<"Tail ---> "<<tail->data<<endl;
    
    delPos(head,tail,1);
    print(head);

    delPos(head,tail,3);
    print(head);

    cout<<"Head ---> "<<head->data<<endl;
    cout<<"Tail ---> "<<tail->data<<endl;

    delPos(head,tail,6);
    print(head);

    cout<<"Head ---> "<<head->data<<endl;
    cout<<"Tail ---> "<<tail->data<<endl;

    delPos(head,tail,5);
    print(head);

    cout<<"Head ---> "<<head->data<<endl;
    cout<<"Tail ---> "<<tail->data<<endl;
    return 0;
}
