#pragma once
#include <iostream>
#include "array.h"
#include <fstream>
//#include "array.cpp"

class binar:public int_arr
{
    int **bin;
    //int work_el;
    int size;
public:
   
    void view() override;
    binar(int **ptr, int N);
    ~binar();
};

