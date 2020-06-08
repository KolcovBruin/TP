#include "Class.h"
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;
void EXMP::set_num(int a)
{
    number=a;
}
void EXMP::view()
{
    cout<<number<<"   ";
    cout<<endl;
}

int EXMP::get_num()
{
 return number;
}
