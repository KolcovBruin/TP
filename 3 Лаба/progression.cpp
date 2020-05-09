#include "progression.h"
#include <iostream>
using namespace std;

int Progression::counter = 0;
Progression::~Progression() {
    cout << "Вызван виртуальный диструктор" << endl;
}
int Progression::getCounter() {
    return counter;
}
void Progression::set()
{
    arr[0]=5;
    for (int i=1;i<10;i++)
    {
        arr[i]=1+arr[i-1];
    }
}
