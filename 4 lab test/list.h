#include <iostream>
using namespace std;


template <typename T = int>
class element {
    

public:
    T value = 0;
    element<T> *prevEl = 0; 
    element<T> *nextEl = 0;
    
};


template <typename T = int>
class Queue {
private:
    element<T> *tail = 0;//конец очереди
    element<T> *head = 0;
protected:
    int size; //размер очереди
    element<T>* qetTail() {
        return tail;
    };
    element<T>* qetHead() {
        return head;
    };
public:
    
    Queue() { //конструктор очереди
        size = 0;
    };

    ~Queue() { //диструктор очереди
        while (this->size > 0)
        {
            element<T> *buffer = tail;
            tail = buffer->prevEl;
            delete buffer;
            size--;
        }
    };

    void push(T value) {
        
        element<T> *newEl = new(element<T>); //выделила память под новый элемент
        if (size==0)
        {
            head=newEl;
        }
        
        if (tail!=nullptr)
        {
            tail->nextEl=newEl;
        }
        newEl->prevEl = tail;//ссылка на предыдущий элемент
        newEl->value = value;
        tail=newEl;
        newEl->nextEl=nullptr;
        size++;

    };

void operator+(T value)
    
    {
        push(value);
    }
   bool operator==(const Queue<T> & it)
    {
        element<T> *buffer_1 = tail;
        element<T> *buffer_2 = it.tail;
        for (int i=0;i<size;i++)
        {
            if ((buffer_1->value)!=(buffer_2->value))
            {
                return false;
            }
            buffer_1=buffer_1->prevEl;
            buffer_2=buffer_2->prevEl;
            
        }
        return true;
    }
    bool operator!=(const Queue<T> & it)
    {
        element<T> *buffer_1 = tail;
        element<T> *buffer_2 = it.tail;
        for (int i=0;i<size;i++)
        {
            if ((buffer_1->value)==(buffer_2->value))
            {
                return false;
            }
            buffer_1=buffer_1->prevEl;
            buffer_2=buffer_2->prevEl;
            
        }
        return true;
    }
    int get_size()
    {
        return size;
    }
    void view()
    {
        int lc_size=size;
         element<T> *buffer = tail;
      while (lc_size > 0)
        {
           
            cout<<buffer->value<<"  ";
            buffer=buffer->prevEl;
            
            lc_size--;
        }
        cout<<endl;
    };
    
};
