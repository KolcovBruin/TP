#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Class.h"
using namespace std;
int comp1 ( EXMP & a,  EXMP & b)
{
   // int a;
    
    return ( a.get_num()<b.get_num());
}
int main ()
{
    
    srand(time(NULL));
    int a=0,b=0;
    EXMP* ptr;
    ptr= new EXMP[10];
    for ( int i=0;i<10;i++)
    {
        a=rand()%10000;
        b=rand()%10;
        ptr[i].new_el(a,b);
    }
    for ( int i=0;i<10;i++)
    {
        //a=rand()%10000;
        ptr[i].view();
    }
    sort(ptr,ptr+10,comp1);
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    for ( int i=0;i<10;i++)
       {
           //a=rand()%10000;
           ptr[i].view();
       }
   // qsort (ptr, 10, sizeof(EXMP), comp1);
    return 0;
}
