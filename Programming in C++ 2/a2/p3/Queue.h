/*
    CH08-320143
    a2 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#ifndef QUEUE_H
#define QUEUE_H
 
#include <iostream>
 
template <class T>
class Queue
{
    private:
        int entries;
        int size;
        int head;
        int tail;
        T *queue;
    public:
        Queue()
        {
            size     = 10;
            head    =  0;
            entries =  0;
            tail     = -1;
            queue = new T[10];
        }
        //copy constructor
        Queue(const Queue& q)
        {
            size    = q.size;
            entries = q.entries;
            tail     = q.tail;
            head    = q.head;
            queue   = q.queue;
        }
        Queue(int size)
        {
            this->size = size;
            entries    =  0;
            tail        = -1;
            head         =  0;
            queue = new T[this->size];
        }
        //destructor
        ~Queue()
        {
            delete []queue;
        }
        // helpul methods
        bool isEmpty()
        {
            return entries == 0;
        }
        bool isFull()
        {
            return entries == size;
        }
        /*MAIN METHODS*/
        //to push the element to the queue
        bool push(T element)
        {
            if(this->isFull())
                return false;
            tail++;
            queue[tail % size] = element;
            entries++;
            return true;
        }
        //pops an element and stores it in out
        bool pop (T& out)
        {
            if(this->isEmpty())
                return false;
            out = queue[head++ % size];
            entries--;
            return true;
        }
        //returns the data at the end of the queue
        T back(void)
        {
            if(isEmpty())
                return 0;
            return queue[tail % size];
        }
        //returns the data at beginning of the queue
        T front(void)
        {
            if(isEmpty())
                return 0;
            return queue[head % size];
        }
        //returns number of entries at given moment
        int getNumEntries()
        {
            return entries;
        }
        //prints the queue so that testing is easy
        void print()
        {
            if(!isEmpty())
            {
                for(int i = head; i<=tail; i++)
                    std::cout << queue[i % size] << " ";
                std::cout << std::endl;
            }
        }
        // the 2 other methods of problem 3
        int getSize()
        {
            return size;
        }
        //resizes the queue
        void resize(int newsize)
        {
            size = newsize;
            //create array to store elements
            T* array = new T[entries];
            for(int i = head; i<= tail; i++)
                array[i % size] = queue[i % size];
            //delete the queue we have
            delete [] queue;
            //create new one with the desire size
            queue = new T[newsize];
            //reput the elements in the queue
            for(int i= 0; i<newsize; i++)
            {
                if (i >= entries)
                    break;
                queue[i] = array[i];
            }
            //set head and tail to proper values
            head = 0; 
            if (entries < newsize)
                tail = entries - 1;
            else 
            {
                entries = newsize;
                tail = newsize - 1;
            }
        }
};
 
#endif