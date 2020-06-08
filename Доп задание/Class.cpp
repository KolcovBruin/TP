#include "Class.h"
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;
void EXMP::new_el(int a,int b)
{
    number=a;
    type=b;
}
void EXMP::view()
{
    cout<<type<<"   "<<number;
    cout<<endl;
}

int EXMP::get_num()
{
 return number;
}
