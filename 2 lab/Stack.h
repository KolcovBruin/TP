#pragma once
#include "Unit.h"
#include <iostream>
using namespace std;
class STACK // класс стека
{
public:
    STACK();
    ~STACK();
    
    void push(int value);  //добавление нового значения в стек
    
    void clear();  //очистка стека
    
    void ptr_last();// указатель на последний элемент ???
    int size();
     void ptr_move();
    void out();
    int get_value();  //вывод знаяения
    // Перегрузить операции половину как дружественные функции, половину как методы +, +=, -, -=, *, *=, /, /= для работы с числами
    friend int operator + (int X, const STACK& right);
    int operator += (int X);
    friend int operator - (int X, const STACK& right);
   int operator -= (int X);
    friend int operator * (int X, const STACK& right);
    int operator *= (int X);
    friend int operator / (int X, const STACK& right);
    int operator /= (int X);
    
private:
    int NUM; // Кол-во э-т стека
    Unit *END; //Указатель на конец стека
    Unit *ptr; //Указатель на текущий элемент стека
};
