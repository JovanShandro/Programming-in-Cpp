/*
    CH08-320143
    a2 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#ifndef LINKED_H
#define LINKED_H
 
#include <iostream>
 
template <class T>
class LinkedList 
{
    private:
        typedef struct node 
        {
            T data;
            struct node * next;
            struct node * prev;
        }Node;
 
        Node * head;
        Node * tail;
    public:
        //basic constructor
        LinkedList()
        {
            head = NULL;
            tail = NULL;
        }
        //copy constructor
        LinkedList(const LinkedList& l)
        {
            head = l.head;
            tail = l.tail;
        }
        ~LinkedList()
        {
            Node* elem = head;
            while(head != NULL)
            {
                elem = head -> next;
                free(head);
                head = elem;
            }
        }
        //returns the first item
        T first()
        {
            return head->data;
        }
        //return and remove the fist item
        T first_rem()
        {
            //get the value
            T item = head->data;
            //get rid of first node
            Node* n = new Node;
            n = head ->next;
            free(head);
            head = n;
            //return the value
            return item;
        }
        //returns the last item
        T last()
        {
            return tail->data;
        }
        //return and remove the last item
        T last_rem()
        {
            //get the value
            T item = tail->data;
            //get rid of first node
            Node* n = new Node;
            n = tail -> prev;
            free(tail);
            tail = n;
            //return the value
            return item;
        }
        //adds newelem to the end of the list
        void add_end(T newelem)
        {
            Node* newel = new Node;
            newel -> data = newelem;
            newel ->next = NULL;
 
            if(head == NULL && tail == NULL)
            {
                newel ->prev = NULL;
                head = newel;
                tail = newel;
                return;
            }
            tail ->next = newel;
            newel-> prev = tail;
            tail = newel;
 
        }
        //adds newelem to the beginning of the list
        void add_beg(T newelem)
        {
            Node* newel = new Node;
            newel -> data = newelem;
            newel ->prev = NULL;
 
            if(head == NULL && tail == NULL)
            {
                newel -> next = NULL;
                head = newel;
                tail = newel;
                return;
            }
            newel -> next = head;
            head -> prev = newel;
            head = newel;
        }
        //returns the number of elements
        int getSize()
        {
            int count = 0;
            if(head == NULL && tail == NULL)
                return 0;
            Node* n = new Node;
            n = head;
            while(n != tail)
            {
                n = n->next;
                count++;
            }
            return ++count;
        }
        void print()
        {
            Node* n= head;
            while( n!= tail)
            {
                std::cout << n->data << " ";
                n = n-> next;
            }
            std::cout << tail->data << " ";
            std::cout << std::endl;
        }
};
 
#endif