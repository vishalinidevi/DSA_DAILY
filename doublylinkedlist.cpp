#include<iostream>

using namespace std;
class Node{
    public:
        int key;
        int data;
        Node* prev;
        Node* next;

        Node()
        {
            key = 0;
            data = 0;
            prev = NULL;
            next = NULL;
        }

        Node(int k,int d)
        {
            key = k;
            data = d;
            prev = NULL;
            next = NULL;
        }
};

class DoublyLinkedList
{
    public:
        Node* head;
        DoublyLinkedList()
        {
            head = NULL;
        }

        DoublyLinkedList(Node *n)
        {
            head = n;
        }


        //check the node is exist with key value
        Node* checkIfNodeExist(int k)
        {
            Node* temp = NULL; 
            Node* ptr = head;
            while(ptr != NULL)
            {
                if(ptr->key == k)
                {
                    temp = ptr;
                }
                ptr= ptr->next;

            }
            return temp;
        }

        //Append thenode to the last

        void appendNode(Node* n)
        {
            if(checkIfNodeExist(n->key)!=NULL)
            {
                cout <<"Node already exist with the key value " << n->key << endl;
            }
            else{
                if(head == NULL)
                {
                    head = n;
                    cout << " Node is apended as head " << endl;
                }
                else 
                {
                    Node* ptr = head;
                    while(ptr->next != NULL)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    n->prev = ptr;
                    cout << "Node Appended" << endl;
                }
            }
        }

        //append the node at first
        void prpendNode(Node* n)
        {
            if(checkIfNodeExist(n->key)!=NULL)
            {
                cout <<"Node already exist with the key value " << n->key << endl;
            }
            else{
                head->prev = n;
                n->next = head;
                head= n;
                cout <<"Node appended"<<endl;
            }
        }
};

int main()
{

   
    return 0;
}

