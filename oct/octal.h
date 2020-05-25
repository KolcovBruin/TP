#pragma once
#include "array.h"
class octal:public int_arr
{
    int **oct;
    //int work_el;
    int size;
public:
    void view() override;
    octal(int **ptr, int N);
    ~octal();
};

