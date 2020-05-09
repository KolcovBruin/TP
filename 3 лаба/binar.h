#pragma once
#include "array.h"
//#include "array.cpp"
class binar:public int_arr
{
    int **bin;
    //int work_el;
    int size;
public:
    void view() override;
    binar(int **ptr, int N);
//    void safe_up(int i) override;
//    void set_size() override;
//    void convert() override;
    ~binar();
};
