#include "octal.h"
#include <iostream>
#define BIN "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/Bin_out"
#include <fstream>

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


void octal::view()
{
    ofstream octa;
    int_arr::view();
    octa.open(BIN,ios::app);
    cout<<"Вывод элементов массива в восьмеричной системе счисления"<<endl;
    octa<<"Вывод элементов массива в восьмеричной системе счисления"<<endl;
    for (int i=0;i<size;i++)
    {
    cout<<"Значение, которое необходимо перевести:"<<get(i)<<endl;
    octa<<"Значение, которое необходимо перевести:"<<get(i)<<endl;
    cout<<"Значение в двоичной форме:";
    octa<<"Значение в двоичной форме:";
    int size_lc=oct[i][0]-1;
    int flag=0;
      //  cout<<"size_lc= "<<size_lc<<endl;
    while (size_lc-3>0)
        size_lc-=3;
    
    for(int j=0;j<oct[i][0];j++)
    {
        cout<<oct[i][j+1];
        octa<<oct[i][j+1];
        if (j==size_lc&&flag==0)
        {
            //cout<<" ";
            flag=1;
        }
        if((j==0)||(((j-size_lc)%3==0)&&(flag==1)))
            cout<<" ";
            octa<<" ";
    }
    cout<<endl;
    octa<<endl;
    }
    octa<<endl<<endl;
    octa.close();
}
octal::~octal()
{
     cout<<"Дестр oct"<<endl;
}
