#pragma once
class LONG
{
public:
   void push(long int data);
    void push_usr(long int value);
    LONG();
    explicit LONG(int x = 0); // параметр по умолчанию, без инициализации присвоит классу значение value = 0
    LONG&  operator --(); // пре
    LONG operator--(int); //пост
    friend LONG operator ++(LONG &x); //пре
    friend LONG operator ++(LONG &x,  int); //пост
    LONG& operator !();//пре
    void show();
   
private:
   long int value;
    long int user;
};
