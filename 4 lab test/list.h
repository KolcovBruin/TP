#include <iostream>
using namespace std;


template <typename T = int>
struct element {
    T value = 0; //значение элемента очереди
    element<T> *prevEl = 0; //ссылка на предыдущий элемент очереди
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

    void push(T value) { //добавление элементов в конец очереди
        
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
//        cout<<tail->value<<endl;
//        cout<<head->value<<endl;
        //cout<<head->nextE->value<<endl;
    };

void operator+(T value)
    
    {
        push(value);
    }
   void operator==(const Queue<T> & it)
    {
        for (int i=0;i<size;i++)
        {
            
        }
    }
    int get_size()
    {
        return size;
    }
};
