#include "Stack.h"

STACK::STACK()
{
    NUM = 0;
    END = nullptr;
    ptr = nullptr;
}

STACK::~STACK()
{
    while (NUM != 0)
    {
        Unit *tmp = END;
        END = tmp->prev;
        delete tmp;
        --NUM;
    }
}


void STACK::push(int value)
{
    Unit* newelmt = new Unit; // новый элемент
//    if (START == nullptr)
//    {
//        START = newelmt;
//    }
    if (END != nullptr)
    {
        newelmt->prev=END;
    }
   // newelmt->prev = END;
    END = newelmt;
    newelmt->value = value;
    NUM++;
}



void STACK::clear()
{

    
    while (NUM != 0)
    {
        Unit* tmp = END;
        if (tmp->prev == nullptr)
        {
            delete tmp;
            END = nullptr;
          //  START = nullptr;
            NUM--;
        }
        else
        {

            END=tmp->prev;
            delete tmp;
            tmp->prev=nullptr;
            NUM--;
        }
    }
    
    cout << "| Очищение списка завершено.\n";
}





void STACK::ptr_last()
{
    if (END==nullptr)
    {
        cout << "Стек пуст."<<endl;
        return;
    }
    ptr=END;
}

 void STACK::ptr_move()
{
    if (END==nullptr)
    {
        cout << "| Список пуст.\n";
        return;
    }
   
        if (ptr->prev==nullptr)
        {
            cout << "| Достигнут конец стека"<<endl;
        }
        else
        {
            ptr=ptr->prev;
        }
    
}

int STACK::get_value()
{
    return ptr->value;
}

int STACK::size()
{
    return NUM;
}

void STACK::out()
{
    cout<<"Стек состоит из:"<<endl;
    Unit* tmp = END;
    while (tmp->prev!=nullptr) //?
    {
        cout <<tmp->value<<endl;
        tmp=tmp->prev;
      
    }
     cout <<tmp->value<<endl;
    
}
int operator + (int X, const STACK& right)
{
    
    return X+right.ptr->value;
}
int STACK::operator += (int X)
{
    return X+ptr->value;

}
int operator -(int X, const STACK& right)
{
    
    return X-right.ptr->value;
}
int STACK::operator -= (int X)
{
    return X-ptr->value;

}

int operator *(int X, const STACK& right)
{
    
    return X*right.ptr->value;
}
int STACK::operator *= (int X)
{
    return X*ptr->value;

}
int operator /(int X, const STACK& right)
{
    
    return int(X/right.ptr->value);
}
int STACK::operator /= (int X)
{
    return int(X/ptr->value);

}
