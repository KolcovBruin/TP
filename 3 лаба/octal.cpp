#include "octal.h"
#include <iostream>
using namespace std;
octal::octal(int **ptr, int N): int_arr(ptr, N)
{
    size=N;
    oct=new int*[size];
   // int i=0;
   int work_el=0;
    int work_sz=0;
    for (int i=0;i<N;i++)
    {
        work_sz=2; //2, тк есть знаковый разряд и 0 эл это размер "строки"
        work_el=get(i);
        do
        {
            work_el/=8;
            work_sz++;
        }
        while(work_el!=0);
        
        oct[i]=new int[work_sz];
        oct[i][0]=work_sz-1;
        work_el=get(i);
        if (work_el<0)
            oct[i][1]=1;
        else  oct[i][1]=0;
        for (int j=work_sz-1;j>1;j--)
        {
            oct[i][j]=work_el%8;
          //  cout<<bin[i][j]<<endl;
            work_el/=8;
        }
    }
}

//void binar::safe_up(int i)
//{
//    safe=get(i);
//
//}
//void binar::set_size()
//{
//   // int cnt=0;
//    int check_value=safe;
//    size=1;
//    do
//    {
//        check_value/=2;
//        size++;
//    }while(check_value!=0);
//
//}
//void binar::convert()
//{
//    int work_value=safe;
//    bin=new int[size];
//    if (work_value<0)
//        bin[0]=1;
//    else bin[0]=0;
//    for(int i=size-1;i>=1;i--)
//    {
//        bin[i]=work_value%2;
//        work_value/=2;
//    }
//}
void octal::view()
{
    cout<<"Вывод элементов массива в двоичной системе счисления"<<endl;
    for (int i=0;i<size;i++)
    {
    cout<<"Значение, которое необходимо перевести:"<<get(i)<<endl;
    cout<<"Значение в двоичной форме:";
    int size_lc=oct[i][0]-1;
    int flag=0;
        cout<<"size_lc= "<<size_lc<<endl;
    while (size_lc-3>0)
        size_lc-=3;
    
    for(int j=0;j<oct[i][0];j++)
    {
        cout<<oct[i][j+1];
        if (j==size_lc&&flag==0)
        {
            //cout<<" ";
            flag=1;
        }
        if((j==0)||(((j-size_lc)%3==0)&&(flag==1)))
            cout<<" ";
    }
    cout<<endl;
    }
}
octal::~octal()
{
     cout<<"Дестр binar"<<endl;
}
