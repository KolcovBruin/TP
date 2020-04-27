#include "functions.h"


void stack_create (STACK &STACK_name, int size)
{
 int stack_el=0;
    for (int i=0;i<size;i++)
    {
        cout<<"Введите элемент стека. Номер элемента стека:"<<i<<endl;
        cin>>stack_el;
        STACK_name.push(stack_el);
    }
    return;
}
