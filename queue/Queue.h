#pragma once

//struct Element
//{
//    int data;// значение текущего элемента
//    Element* prev = 0;// указатель на предыдущий эл-т
//};
//
//class pch
//{
//    Element* e = 0;//Указатель на конец очереди
//
//protected:
//    int size;
//    Element* getE();//Возвращаем указатель на последний элемент для наследников
//
//public:
//    pch();
//    ~pch();
//    void push(int n);//добавление элемента в очередь
//    int pop();// извлечения элемента
//    void out();// вывод на экран
//    void copy(pch& ob);// Копирование очереди
//    void slian(pch& ob1, pch& ob2); // Слияние очереди
//    bool prov();//Проверяем на пустоту очередь
//};
//
//

struct Unit
{
    int value;// значение текущего элемента
    Unit* prev = 0;// указатель на предыдущий эл-т
};


class Queue
{
    Unit* last = 0;//Указатель на конец очереди

protected:
    int size;
    Unit* get_last();//Возвращаем указатель на последний элемент для наследников

public:
    Queue();
    ~Queue();
    void push(int data);//добавление элемента в очередь
    int pop();// извлечения элемента
    void out();// вывод на экран
    void copy(Queue& ob);// Копирование очереди
    void merger(Queue& ob1, Queue& ob2); // Слияние очереди
    bool check();//Проверяем на пустоту очередь
};

