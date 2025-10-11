#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    //destructor
    ~node()
    {
        int value = this->data;
        while (this->next != NULL)
        {
            delete next; // free memory of each node
            this->next = NULL;
        }
        cout << "Memory is free for node with data : " << value << endl;
    }
};

int lengthLL(node *head)
{
    node *temp = head;
    int ctr = 0;
    while (temp != NULL)
    {
        ctr++;
        temp = temp->next;
    }
    return ctr;
    // cout<<"Length of the Linked List : "<<ctr<<endl;
}

void inserAthead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAttail(node *&tail, int data)
{
    node *temp = new node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtpos(node *&head, node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        inserAthead(head, data);
        return;
    }
    else
    {
        int l = lengthLL(head);
        if (l + 1 == pos)
        {
            insertAttail(tail, data);
            return;
        }
        node *point = head;
        int ctr = 1;
        while (ctr < pos)
        {
            point = point->next;
            ctr++;
        }
        node *temp = new node(data);
        temp->next = point;
        temp->prev = point->prev;
        point->prev->next = temp;
        point->prev = temp;
    }
}

void delAtpos(node* &head,node* &tail, int pos)
{
    if(pos==1)
    {
        node* temp = head;
        temp->next->prev=NULL;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else
    {
        int l = lengthLL(head);
        if (l == pos)
        {
            node* x = tail;
            x->prev->next = NULL;
            tail = x->prev;
            x->prev=NULL;
            delete x;
            return;
        }
        node *point = head;
        int ctr = 1;
        while (ctr < pos)
        {
            point = point->next;
            ctr++;
        }
        point->prev->next = point->next;
        point->next->prev = point->prev;
        point->next=NULL;
        point->prev=NULL;
        delete point;

    }
}

void print(node *&head)
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
    node *newnode = new node(10);
    node *head = newnode;
    node *tail = newnode;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "Length : " << lengthLL(head) << endl;
    // cout<<newnode->data<<endl;
    cout << "-----------------------------------------------" << endl;
    inserAthead(head, 11);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    inserAthead(head, 12);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    insertAttail(tail, 2);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    insertAttail(tail, 4);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    insertAtpos(head, tail, 3, 90);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    insertAtpos(head, tail, 7, 78);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    insertAtpos(head, tail, 6, 84);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    delAtpos(head,tail,1);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    delAtpos(head,tail,3);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    delAtpos(head,tail,6);
    print(head);
    cout << "Length : " << lengthLL(head) << endl;
    cout << "Head ---> " << head->data << endl;
    cout << "Tail ---> " << tail->data << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}