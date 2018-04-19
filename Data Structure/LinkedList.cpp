#include<iostream>
using namespace std;

class Node
{
    public :
        int data;
        Node *next;

        Node(int data)
        {
            cout<<"A node is Created."<<endl;
            this->data = data;
            next = NULL;
        }
};

class LinkedList
{
    public :
        Node *head;

        LinkedList()
        {
            cout<<"Linked List is Created."<<endl;
            head = NULL;
        }

        //Adding a Node at the last position of Linked List.
        void addNode(int data)
        {
            if(head == NULL)
            {
                head = new Node(data);
            }
            else
            {
                Node *node = head;
                while(node->next != NULL)
                {
                    node = node->next;
                }
                node->next = new Node(data);
            }

            cout<<"Node with Value "<<data<<" is added at the end of Linked List."<<endl;
        }

        //Adding Node at specific position.
        void addNode(int position, int data)
        {
            if(position == 1)
            {
                if(head == NULL)
                {
                    head = new Node(data);
                }

                else
                {
                    Node *node = head;
                    head = new Node(data);
                    head->next = node;
                }
            }

            else
            {
                int counter = 1;
                Node *node = head;
                while(counter != position-1)
                {
                    node = node->next;
                    counter++;
                }
                Node *node1 = node->next;
                node->next = new Node(data);
                (node->next)->next = node1;

            }

            cout<<"Node with Value "<<data<<" is inserted at "<<position<<"th position of Linked List."<<endl;
        }

        //Deleting Node from the last position of LinkedList.
        void deleteNode()
        {
            if(head == NULL)
                cout<<"List is Already Empty."<<endl;

            else
            {
                Node *temp = head;
                if(temp->next == NULL)
                {
                    head = NULL;
                }

                else
                {
                    while((temp->next)->next != NULL)
                    {
                        temp = temp->next;
                    }
                    temp->next = NULL;
                }

                cout<<"Last node of List has been deleted."<<endl;
            }
        }

        //Deleting Node from the given position in LinkedList.
        void deleteNode(int d)
        {
            if(head == NULL)
                cout<<"List is Already Empty."<<endl;

            else
            {
                Node *temp = head;
                if(temp->data == d)
                {
                    head = head->next;
                    cout<<"A node of List having value "<<d<<" has been deleted."<<endl;
                }

                else
                {
                    while((temp->next)->data != d)
                    {
                        temp = temp->next;
                    }
                    if(temp->next != NULL)
                    {
                        temp->next = (temp->next)->next;
                        cout<<"A node of List having value "<<d<<" has been deleted."<<endl;
                    }

                    else
                        cout<<"No Such Element found in List."<<endl;
                }
            }
        }

        //Printing the LinkedList.
        void print(Node *node)
        {
            if(node == NULL)
                return;
            else
            {
                cout<<node->data<<endl;
                print(node->next);
            }
        }

        //Printing LinkedList in Reverse Order.
        void printReverse(Node *node)
        {
            if(node == NULL)
                return;
            else
            {
                printReverse(node->next);
                cout<<node->data<<endl;
            }
        }

        //Checking for Loops.
        void findLoop(Node *node)
        {
            Node *node1 = node;
            Node *node2 = node;
            while((node1->next == NULL)||(node2->next == NULL))
            {
                node1 = node1->next;
                node2 = (node2->next)->next;

                if(node1 == node2)
                {
                    cout<<"There is a Loop."<<endl;
                    return;
                }
            }
            cout<<"There is no Loop."<<endl;
        }

};

int main()
{
    LinkedList linkedList;
    linkedList.addNode(1);
    linkedList.addNode(3);
    linkedList.print(linkedList.head);
    linkedList.addNode(2,2);
    linkedList.print(linkedList.head);
    linkedList.addNode(5);
    linkedList.addNode(4,4);
    linkedList.addNode(6);
    linkedList.print(linkedList.head);
    linkedList.deleteNode();
    linkedList.deleteNode(4);
    linkedList.print(linkedList.head);
    return 0;
}
