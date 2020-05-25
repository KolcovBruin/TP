#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "array.h"
#include "binar.h"
#include "octal.h"
#define DATA "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/Data"
#define BIN "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/Bin_out"

//#define OCT "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/oct_out"
//#define ALL "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/all_out"
using namespace std;
int main ()
{
    
    int **ptr;
    int a=1;
    int i=0;
    int_arr **ptr_arr;
    int_arr **ptr_buf;
    ptr_arr=new int_arr*[0];
    ptr_buf=new int_arr*[0];

    ptr=new int*[2];
    ptr[0]=new int[i];
    ptr[1]=new int[i];
    int ir=0;
    int test=0;
    ifstream data;
    ofstream del;
    del.open(BIN);
    del.close();
   // ifstream oct;
   // ifstream all;
    int out=0;
    int menu=-1;
    int menu_inp=0;
    int menu_new=-1;
    while (menu!=0)
    {
        cout<<"1-new; 2-bin; 3-oct; 0-ext"<<endl;
        cin>>menu;
        switch (menu)
        {
            case 1:
                i=0;
                a=0;
                cout<<"1-keyboar;2-file"<<endl;
                cout<<"Для того чтобы обновить значения нового массива из файла, необходимо открыть файл Data и внести в него новые элементы"<<endl;
                cin>>menu_inp;
                switch (menu_inp)
                {
                    case 1:
                        
                        while (menu_new!=0)
                        {
                            
                        for (int ii=0;ii<i;ii++)
                               {
                                   ptr[1][ii]=ptr[0][ii];
                               }
                       
                        cout<<"Введите новый элемент массива: "<<endl;
                        cin>>a;
                        i++;
                        ptr[0]=new int[i];
                        for (int ii=0;ii<i-1;ii++)
                        {
                            ptr[0][ii]=ptr[1][ii];
                        }
                        ptr[1]=new int[i];
                        ptr[0][i-1]=a;
                            cout<<"Добавить еще один элемент:"<<endl;
                            cout<<"'1'-да'"<<endl;
                            cout<<"'0'-нет'"<<endl;
                            cin>>menu_new;
                        }
                        break;
                    case 2:
                        data.open(DATA);
                        data>>a;
                        while (!data.eof())
                        {
                        for (int ii=0;ii<i;ii++)
                                {
                                    ptr[1][ii]=ptr[0][ii];
                                }
                        
                             cout<<"Считывание из файла"<<endl;
                            
                           
                            cout<<a<<endl;
                         i++;
                         ptr[0]=new int[i];
                         for (int ii=0;ii<i-1;ii++)
                         {
                             ptr[0][ii]=ptr[1][ii];
                         }
                         ptr[1]=new int[i];
                         ptr[0][i-1]=a;
                            data>>a;
                        }
                        cout<<"Файл закончился"<<endl;
                       // cout<<data.eof();
                         data.close();
                        break;
                }
                
                break;
            case 2:
                cout<<"Перевод исходного массива в двоичную систему"<<endl;
//                cout<<"Исходный массив"<<endl;
//                for(int ii=0;ii<i;ii++)
//                {
//                    cout<<ptr[0][ii]<<"  ";
//                }
                 for (int ii=0;ii<ir;ii++)
                               {
                                   ptr_buf[ii]=ptr_arr[ii];
                               }
                 ir++;
                        ptr_arr=new int_arr*[ir];
                        for (int ii=0;ii<ir-1;ii++)
                        {
                            ptr_arr[ii]=ptr_buf[ii];
                        }
                         ptr_buf=new int_arr*[ir];
                         ptr_arr[ir-1]=new binar(ptr,i);
                         ptr_arr[ir-1]->view();
              
                break;
                case 3:
                cout<<"Перевод исходного массива в восьмеричную систему"<<endl;
//                cout<<"Исходный массив"<<endl;
//                for(int ii=0;ii<i;ii++)
//                {
//                    cout<<ptr[0][ii]<<"  ";
//                }
                     for (int ii=0;ii<ir;ii++)
                                   {
                                       ptr_buf[ii]=ptr_arr[ii];
                                   }
                     ir++;
                            ptr_arr=new int_arr*[ir];
                            for (int ii=0;ii<ir-1;ii++)
                            {
                                ptr_arr[ii]=ptr_buf[ii];
                            }
                             ptr_buf=new int_arr*[ir];
                             ptr_arr[ir-1]=new octal(ptr,i);
                             ptr_arr[ir-1]->view();
                    break;
        }
    }
    for (int cnt=0;cnt<=1;cnt++)
        delete []ptr[cnt];
    delete []ptr;
  for (i=0;i<ir;i++)
       delete ptr_arr[i];
   delete []ptr_arr;
     delete []ptr_buf;
    
    return 0;
}

