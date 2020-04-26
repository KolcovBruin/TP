
#include <stdio.h>
#include "Son.h"
#include <iostream>

using namespace std;

float sub1::cnt_high_el()  //Подсчет числа элементов, значение которых превышает значение предыдущего элемента
{
    float cnt_ex=0;
    Unit* last=get_last();
    int size_f=size;
    while (size_f>1)
    {
        if ((last->value)>(last->prev->value))
            cnt_ex++;
        last=last->prev;
        size_f--;
    }
    return cnt_ex;
}


float sub2::cnt_high_el()//Подсчет числа элементов, значение которых превышает значение предыдущего элемента
{
    float cnt_ex=0;
    Unit* last=get_last();
    int size_f=size;
    while (size_f>1)
    {
        if ((last->value)>(last->prev->value))
            cnt_ex++;
        last=last->prev;
        size_f--;
    }
    return cnt_ex;
}

int sub2::pop()
{
    return Queue::pop();
}

void sub2::push(int Value)
{
    return Queue::push(Value);
}

void sub2::out()
{
    return Queue::out();
}

void sub2::copy(sub2& ob)
{
    return Queue::copy(ob);
}

void sub2::merger(sub2& ob1, sub2& ob2)
{
    return Queue::merger(ob1, ob2);
}

bool sub2::check()
{
    return Queue::check();
}

float sub3::cnt_high_el()   //Подсчет числа элементов, значение которых превышает значение предыдущего элемента
{
   float cnt_ex=0;
    Unit* last=get_last();
    int size_f=size;
    while (size_f>1)
    {
        if ((last->value)>(last->prev->value))
            cnt_ex++;
        last=last->prev;
        size_f--;
    }
    return cnt_ex;
}

int sub3::pop()
{
    
    return Queue::pop();
}

void sub3::push(int Value)
{
    return Queue::push(Value);
}

void sub3::out()
{
    return Queue::out();
}

void sub3::copy(sub3& ob)
{
    return Queue::copy(ob);
}

void sub3::merger(sub3 &ob1, sub3 &ob2)
{
    return Queue::merger(ob1, ob2);
}

bool sub3::check()
{
    return Queue::check();
}
