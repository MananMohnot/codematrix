#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }

    Node *nodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
                temp = ptr;
            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with the key value" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node Appended";
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node appended" << endl;
            }
        }
    }

    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
            cout << "node already exists" << endl;
        else
        {
            n->next = head;
            head = n;
            cout << "Node prepended" << endl;
        }
    }
};

int main()
{

    return 0;
}