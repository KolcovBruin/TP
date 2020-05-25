#pragma once
//#include "binar.h"
class int_arr
{
private:
    int *arr;
    int size;
public:
 //   virtual void push(int a, int i);
    virtual void view();
    int_arr(int **ptr,int N);
   // void
    int get(int i);
   virtual ~int_arr();
    int_arr();
    int_arr(const int_arr& arr);
};

