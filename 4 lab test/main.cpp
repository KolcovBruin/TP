//5 3 8 0 7 4 9 1 6 2
//2.8 2.4  1.2  4.5
//b n m d a e t u
// dce bvb bva abc
#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

template <class T_el, class T_cl>
void workWithClass(T_cl *list,T_el buffer) {         /*ШАБЛОННАЯ ФУНКЦИЯ ДЛЯ ЗАДАНИЕ 2*/
    int Work_menu; //выбор
    int counter = 0;

    int order; // выбор очереди
    int Menu = -1;
    while (Menu)
    {

        //T_el buffer;
        cout << "Используется очередь № " << counter + 1 << endl;
        cout << "'0' - Выход" << endl;
        cout << "'1' - Добавление элемента списка" << endl;
        cout << "'2' - ==" << endl;
        cout << "'3' - !=" << endl;
        cout << "'4' - Выбор списка" << endl;
        cout << "'5' - Вывод выбранного списка" << endl;
        cin >> Work_menu;
        T_el value=0;
        switch (Work_menu)
        {
            case 1:
           
            
                    cout<<"Введите значение, которое хотите добавить:"<<endl;
                    cin>>value;
                    list[counter]+value;
                cout << "Элемент добавлен" << endl;
                    
                 
                break;
            case 2:
                
                try{
                    if (list[0].get_size()!=list[1].get_size())
                        throw "warning";
                    if ((list[0]==list[1])==true)
                        cout<<"Списки равны"<<endl;
                    else
                        cout<<"Списки не равны"<<endl;
                    }
                catch(const char* war)
            {
                cout<<war;
                cout<<": Невозможно выполнить операцию, тк размеры очередей не равны"<<endl;
            }
                   
                break;
            case 3:
                    try
            {
                    if (list[0].get_size()!=list[1].get_size())
                        throw "warning";
                   if ((list[0]!=list[1])==true)
                       cout<<"Списки не равны"<<endl;
                   else
                       cout<<"Списки равны"<<endl;
                    }
                    catch(const char* war)
                               {
                                   cout<<war;
                                   cout<<": Невозможно выполнить операцию, тк размеры очередей не равны"<<endl;
                               }
                break;

        case 4:
            cout << "Номер списка, на которую следует переключиться: (1 - 2)"<<endl;
                       cin >> order; order--;
                if (order==0||order==1)
                 counter = order;
                else cout<<"Не корректно введент номер списка"<<endl;
            break;
        case 5:
                try
                {
                        if (list[counter].get_size()==0)
                            throw "warning";
                   cout << "Вывод элементов списка: "<<endl;
                list[counter].view();
                }
                catch(const char* war)
                {
                    cout<<war;
                    cout<<": Невозможно выполнить операцию, тк список пуст"<<endl;
                }
                   break;
            
                
        case 0:
            Menu = 0;
            break;
        default:
            cout << "некорректный ввод";
            break;
        }
        cout<<endl<<endl;
    }
}

template <typename T>
int Sort_Shel()
{
  //  cout<<strcmp("abc","bca");
    if (strcmp(typeid(T).name(),"Pc")!=0)
    {
    T **arr;
    arr=new T*[2];
    int size=0;
   int menu_new=-1;
    while (menu_new)
    {
        cout<<"Добавить элемент в массив?"<<endl;
        cout<<"'1' - Да"<<endl;
        cout<<"'2' - Нет"<<endl;
        cin>>menu_new;
        switch (menu_new) {
            case 1:
                for (int i=0;i<size;i++)
                        {
                            arr[1][i]=arr[0][i];
                        }
                 cout<<"Введите новый элемент массива: "<<endl;
                 size++;
                 arr[0]=new T[size];
                 for (int i=0;i<size-1;i++)
                 {
                     arr[0][i]=arr[1][i];
                 }
                arr[1]=new T[size];

                cin>> arr[0][size-1];
                break;
            case 2:

                menu_new=0;
                break;
            default:
                break;
        }
    }
    int sort_size=size/2;
    T safe=0;
    while (sort_size)
    {

        for(int i=0;i<size-sort_size;i++)
        {
            if (arr[0][i]>arr[0][i+sort_size])
            {
                safe =arr[0][i+sort_size];
                arr[0][i+sort_size]=arr[0][i];
                arr[0][i]=safe;
            }
        }
        sort_size/=2;
    }
    for (int i=0;i<size;i++)
    {
        cout<<arr[0][i]<<"  ";
    }
    }
    else if (strcmp(typeid(T).name(),"Pc")==0)
    {
        char** string = nullptr ;
        char** string_buf = nullptr;
       //  arr=new T*[2];
            int size=1;
        int size_str=0;
           int menu_new=-1;
            while (menu_new)
            {
                cout<<"Добавить элемент в массив?"<<endl;
                cout<<"'1' - Да"<<endl;
                cout<<"'2' - Нет"<<endl;
                cin>>menu_new;
                switch (menu_new) {
                    case 2:
                        for(int i=0;i<size;i++)
                        {
                            cout<<string[i];

                        }
                        menu_new=0;
                        break;
                    case 1:
                        for (int i=0;i<size-1;i++)
                                {
                                    string_buf[i]=string[i];
                                }
                        
                         size++;
                         string=new char*[size];
                         for (int i=0;i<size-2;i++)
                         {
                             string[i]=string_buf[i];
                         }
                        string_buf=new char*[size];
                        int menu_str=-1;
                        size_str=0;
                        while (menu_str)
                        {
                            
                            cout<<"Добавить элемент в массив?"<<endl;
                                           cout<<"'1' - Да"<<endl;
                                           cout<<"'2' - Нет"<<endl;
                                           cin>>menu_str;
                                           switch (menu_str)
                                           {
                                                   case 1:
                                                               string[size-1]=string[size-2];
                                                  
                                                           
                                                    cout<<"Введите новый элемент массива: "<<endl;
                                                    size_str++;
                                                    string[size-2]=new char[size_str];
                                                   if (size_str>1)
                                                        string[size-2]=string[size-1];
                                                    
                                                   string[size-1]=new char[size_str];
                                                  // cout<<sizeof(string[0][0]);
//                                                   **string='a';
                                                   cin>> string[size-2][size_str-1];
                                                 //  cout<<string[size-2];
                                                   break;
                                               case 2:
                                                   menu_str=0;
                                                   break;
                                           }
                        }
                        break;
                }
            }
            size-=1;
            int sort_size=size/2;
            char* safe=nullptr;
        safe=string[0];
            while (sort_size)
            {

                for(int i=0;i<size-sort_size;i++)
                {
                    if (strcmp(string[i],string[i+sort_size])>0)
                    {
                        safe =string[i+sort_size];
                        string[i+sort_size]=string[i];
                        string[i]=safe;
                    }
                }
                sort_size/=2;
            }
        cout<<endl<<endl;
            for (int i=0;i<size;i++)
            {
                cout<<string[i]<<endl; //5 3 8 0 7 4 9 1 6 2
            }
    }
   return -1;

}

int main()
{
    cout << "Задание №2 создать параметризованный двухсвязный список" << endl;
    int menu_type=1; //выбор
    int n=2;
    cout << "Создано 2 списка" << endl;
  //  cin >> n;
    Queue<int> *queue1 = 0; int x1=0;
    Queue<float> *queue2 = 0; float x2 = 0;
    Queue<double> *queue3 = 0; double x3 = 0;
    Queue<char> *queue4 = 0; char x4 = 0;
    while (menu_type)
    {
        cout << "С каким типом будет работать класс?" << endl;
        cout << "|0| - Выход" << endl;
        cout << "|1| - int" << endl;
        cout << "|2| - float" << endl;
        cout << "|3| - double" << endl;
        cout << "|4| - char" << endl;
       // cout << "|5| - Выбирайте сами, мне лень" << endl;
        cin >> menu_type;

        switch (menu_type)
        {
        case 0: break;
        case 1:  queue1 = new Queue<int>[n]; workWithClass(queue1,x1); delete[] queue1; break;
        case 2:  queue2 = new Queue<float>[n]; workWithClass(queue2,x2 ); delete[] queue2; break;
        case 3:  queue3 = new Queue<double>[n]; workWithClass(queue3, x3); delete[] queue3; break;
        case 4:  queue4 = new Queue<char>[n]; workWithClass(queue4, x4); delete[] queue4; break;
        default:
            cout << "некорректный ввод";
            break;
        }
    }

    cout << "Задание №1 Сортировка методом Шелла" << endl;
    int Menu_1=-1;
    int Work_menu_1=-1;
   
     while (Menu_1)
        {

            cout<<"Выберите тип данных"<<endl;
            cout<<"1-int;2-float;3-double;4-char;5-char*;0-ext"<<endl;
            cin >> Work_menu_1;
            
            switch (Work_menu_1)
            {
            case 1:
                    Sort_Shel<int>();
                break;
            case 2:
                    Sort_Shel<float>();
                break;
            case 3:
                    Sort_Shel<double>();
                break;
            case 4:
                    Sort_Shel<char>();
                break;
                case 5:
                    Sort_Shel<char*>();
                    break;
            case 0:
                    Menu_1=0;
                break;
            default:
                cout << "некорректный ввод";
                break;
            }
        }
    
    return 1;
}
