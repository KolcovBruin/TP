#include "array.h"
#include <iostream>
using namespace std;
//void int_arr::push(int a, int i)
//{
//    arr[i]=a;
//}
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

//void int_arr:: set_sz(int i)
//{
//
//    size=i;
//}
//int int_arr::get_sz(int i)
//{
//    return size;
//}
//
 int int_arr:: get(int i)
{
    return arr[i];
}
void int_arr::view()
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int_arr::~int_arr()
{
    cout<<"Дестр int_arr"<<endl;
}
int_arr::int_arr()
{
    cout<<"Конструктор"<<endl;
}




//void int_arr::safe_up(int i)
//{
//    
//}
//void int_arr:: set_size()
//{
//    
//}
//void int_arr::convert()
//{
//    
//}
