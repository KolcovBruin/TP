#pragma once
class CEIL
{
public:
    CEIL();
    explicit CEIL(int x = 0); // параметр по умолчанию, без инициализации присвоит классу значение value = 0
    CEIL& operator --(); // prefix
    CEIL& operator ++();
    friend CEIL operator ++(CEIL &x, int); // int is postfix
    friend CEIL operator --(CEIL &x, int); // ptr as friend
    CEIL& operator ()(int x); // перегрузка чтоб принималась ф-я
    void show();
private:
    int value;;
};

class LONG
{
public:
   void push(long int data);
    void push_usr(long int value);
    LONG();
    explicit LONG(int x = 0); // параметр по умолчанию, без инициализации присвоит классу значение value = 0
    LONG&  operator --(); // prefix
    LONG operator--(int);
    friend LONG operator ++(LONG &x);
    friend LONG operator ++(LONG &x,  int); // int is postfix
 //   CEIL& operator ()(int x); // перегрузка чтоб принималась ф-я
     LONG& operator !();
    void show();
   
private:
   long int value;
    long int user;
};
