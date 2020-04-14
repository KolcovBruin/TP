
#pragma once

#include"Queue.h"

class sub1 : public Queue
{
public:
    float cnt_high_el();
};

class sub2 : protected Queue
{
public:
    void push(int data);//добавление элемента в очередь
    int pop();// извлечения элемента
    void out();// вывод на экран
    void copy(sub2& ob);// Копирование очереди
    void merger(sub2& ob1, sub2& ob2);
    bool check();//Проверяем на пустоту
    float cnt_high_el();
};

class sub3 : private Queue
{
public:
  void push(int data);//добавление элемента в очередь
    int pop();// извлечения элемента
    void out();// вывод на экран
    void copy(sub3& ob);// Копирование очереди
    void merger(sub3& ob1, sub3& ob2);
    bool check();//Проверяем на пустоту
    float cnt_high_el();
};
