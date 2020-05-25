#include "array.h"
#include <iostream>
#include <fstream>
#define BIN "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/Bin_out"
using namespace std;
int_arr::int_arr(int **ptr,int N)
{
    cout<<endl;
    size=N;
    arr=new int[size];
    for (int i=0;i<size;i++)
    {
        arr[i]=ptr[0][i];
    }
}
 int int_arr:: get(int i)
{
    return arr[i];
}
void int_arr::view()
{
    ofstream arra;
    arra.open(BIN,ios::app);
    cout<<"Исходный массив: "<<endl;
    arra<<"Исходный массив: "<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
        arra<<arr[i]<<"  ";
    }
    cout<<endl;
    arra<<endl;
    //arra<<endl<<endl;
    arra.close();
}
int_arr::~int_arr()
{
    cout<<"Дестр int_arr"<<endl;
}
int_arr::int_arr()
{
    cout<<"Конструктор"<<endl;
}
