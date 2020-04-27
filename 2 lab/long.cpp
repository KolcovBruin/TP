#include <iostream>
#include "long.h"
using namespace std;

LONG::LONG()
{
    value = 0;
}

LONG::LONG(int x)
{
value = x;
}

LONG& LONG::operator --()
{
    
    value=value-user;
    return *this;
}
LONG LONG::operator --(int)
{
    --value;
    return *this;
}
LONG& LONG::operator !()
{
    value=0-value;
    return *this;
}


LONG operator ++ (LONG &x, int)
{
    ++x.value;
    return x;
}
LONG operator ++ (LONG &x)
{
    x.value=x.value+x.user;
   
    return x;
}

void LONG::show()
{
    cout << value;
}
void LONG::push(long int data)
{
   value=data;
}
void LONG::push_usr(long int value)
{
   user=value;
}
