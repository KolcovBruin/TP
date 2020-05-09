#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "array.h"
#include "binar.h"
#include "octal.h"
#define DATA "/Users/my/Desktop/Учеба 4 сем/Технология программирования/Код лабы/oct/oct/Data"
using namespace std;
int main ()
{
    
    int **ptr;
    int a=1;
    int i=0;
    int_arr **ptr_arr;
   // int cnt_arr=0;
    int_arr **ptr_buf;
    ptr_arr=new int_arr*[0];
    ptr_buf=new int_arr*[0];
//    int **ptr= new int*[10];
//    for (int i=0;i<10;i++)
//    {
//    ptr[i]=new int[5];
//
//    }
    ptr=new int*[2];
    ptr[0]=new int[i];
    ptr[1]=new int[i];
    int ir=0;
    int test=0;
    ifstream data(DATA);
    
    int out=0;
//    while (a!=5)
//    {
//        for (int ii=0;ii<ir;ii++)
//               {
//                //    cout<<ptr[0][ii]<<endl;
//                   ptr_buf[ii]=ptr_arr[ii];
//               }
//
////        cout<<"ENTR"<<endl;
////        cin>>a;
//        while (a!=5)
//        {
//            for (int ii=0;ii<i;ii++)
//                   {
//                    //    cout<<ptr[0][ii]<<endl;
//                       ptr[1][ii]=ptr[0][ii];
//                   }
//            cout<<"Выберите способ создания массива:"<<endl;
//            cout<<"'1' - Считывание с клавиатуры"<<endl;
//            cout<<"'2' - Считывание из файла"<<endl;
//            cin>>out;
//            if(out==1)
//            {
//            cout<<"Введите новый элемент массива: "<<endl;
//
//            cin>>a;
//            }
//            else if (out==0)
//            {
//                cout<<"Считывание из файла";
//                data>>a;
//            }
//            i++;
//            ptr[0]=new int[i];
//            for (int ii=0;ii<i-1;ii++)
//            {
//               // cout<<ptr[1][ii]<<endl;
//                ptr[0][ii]=ptr[1][ii];
//            }
//            ptr[1]=new int[i];
//            ptr[0][i-1]=a;
//
//        }
//        a=0;
//
//        ir++;
//        ptr_arr=new int_arr*[ir];
//        for (int ii=0;ii<ir-1;ii++)
//        {
//           // cout<<ptr[1][ii]<<endl;
//            ptr_arr[ii]=ptr_buf[ii];
//        }
//         ptr_buf=new int_arr*[ir];
//        ptr_arr[ir-1]=new binar(ptr,i);
////         ptr_arr[ir-1]->safe_up(1);
////         ptr_arr[ir-1]->set_size();
////         ptr_arr[ir-1]->convert();
//        cout<<"Переход к новому массиву"<<endl;
//        cin>>a;
//        i=0;
//    }
//    ptr_arr[0]->view();
    int menu=-1;
    int menu_inp=0;
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
                cin>>menu_inp;
                switch (menu_inp)
                {
                    case 1:
                        while (a!=5)
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
                        }
                        break;
                    case 2:
                        while (a!=5)
                        {
                        for (int ii=0;ii<i;ii++)
                                {
                                    ptr[1][ii]=ptr[0][ii];
                                }
                        
                             cout<<"Считывание из файла"<<endl;
                             data>>a;
                            cout<<a<<endl;
                         i++;
                         ptr[0]=new int[i];
                         for (int ii=0;ii<i-1;ii++)
                         {
                             ptr[0][ii]=ptr[1][ii];
                         }
                         ptr[1]=new int[i];
                         ptr[0][i-1]=a;
                        }
                        break;
                }
                
                break;
            case 2:
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
              
                break;
                case 3:
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
                  
                    break;
        }
    }
//     ptr_arr[1]->view();
//     ptr_arr[2]->view();
//    binar workl(ptr,i);
//    workl.safe_up(1);
//    workl.set_size();
//    workl.convert();
//    workl.view();
    for (i=0;i<ir;i++)
    {
        cout<<"Вывод массива №"<<i<<endl;
        ptr_arr[i]->view();
    }
    return 0;
}

