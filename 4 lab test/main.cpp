#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

template <class T_el, class T_cl>
void workWithClass(T_cl *queue,T_el buffer) {         /*ШАБЛОННАЯ ФУНКЦИЯ ДЛЯ ЗАДАНИЕ 2*/
    int Work_menu; //выбор
    int counter = 0;   //номер очереди, в которой работаем
    int counterEnd = 1; // номер последней созданной очереди
    int order; // выбор очереди
    int Menu = 1;
    while (Menu)
    {

        //T_el buffer;
        cout << "Используется очередь № " << counter + 1 << endl;
        cout << "|0| - Выход" << endl;
        cout << "|1| - Добавление элемента очереди" << endl;
        cout << "|2| - ==" << endl;
        cout << "|3| - !=" << endl;
        cout << "|4| - Выбор очереди" << endl;
        cout << "|5| - Слияние очередей" << endl;
        cout << "|6| - Выбор другой очереди" << endl;
        cout << "|7| - Добавить к каждому элементу очереди число" << endl;
        cout << "|8| - Вычесть из каждого элемента очереди число" << endl;
        cin >> Work_menu;
        T_el value=0;
        switch (Work_menu)
        {
        case 1:
            /*cout << "Введите значение: ";
            cin >> value;*//*
            queue[counter].push(value);*/
                cout<<"Введите значение, которое хотите добавить:"<<endl;
                cin>>value;
                queue[counter]+value;
            cout << "Элемент добавлен" << endl;
            system("pause");
            system("cls");
             
            break;
        case 2:
                
                if (queue[0].get_size()==queue[1].get_size())
                {
                queue[0]==queue[1];
                }
                else cout<<"Невозможно сравнить"<<endl;
            break;
//        case 3:
//            /*if (queue[counter].isEmpty())*/
//            if (!queue[counter])
//            {
//                system("pause");
//                system("cls");
//                break;
//            }
//            cout << "Очередь состоит из" << endl;
//            /*queue[counter].showQueue();*/
//            cout << queue[counter];
//            system("pause");
//            system("cls");
//            break;
        case 4:
            cout << "Номер очереди, на которую следует переключиться: (1 - 2)"<<endl;
                       cin >> order; order--;
                if (order==0||order==1)
                 counter = order;
                else cout<<"Не корректно введент номер очереди"<<endl;
            break;
//        case 5:
//            /*if (queue[counter].isEmpty())*/
//            if (!queue[counter])
//            {
//                system("pause");
//                system("cls");
//                break;
//            }
//            if (counterEnd == 1)
//            {
//                cout << "Существует только одна очередь" << endl;
//                break;
//            }
//            cout << "С какой очередью будет произведено слияние? (1 - " << counterEnd << ") : ";
//            cin >> order; order--;
//            if ((order < 0) || (order == counter) || (order >= counterEnd))
//            {
//                cout << "Некорректное значение. Объединение не произведено" << endl;
//                break;
//            }
//            queue[counterEnd].merge(queue[counter], queue[order]);
//            cout << "Объединение произведено. Номер очереди результата: " << counterEnd++ << endl;
//            break;
//        case 6:
//            if (counterEnd == 1)
//            {
//                cout << "существует только одна очередь" << endl;
//                break;
//            }
//            cout << "Номер очереди, на которую следует переключиться: (1 - " << counterEnd << ") : ";
//            cin >> order; order--;
//            if ((order < 0) || (order == counter) || (order >= counterEnd))
//                cout << "Некорректное значение. Переключение не выполнено" << endl;
//            else
//                counter = order;
//            break;
//        case 7:
//            cout << "С какой очередью сложить? (1 - " << counterEnd << ") : ";
//            cin >> order; order--;
//            if ((order < 0) || (order == counter) || (order >= counterEnd))
//            {
//                cout << "Некорректное значение. Сложение не произведено" << endl;
//                break;
//            }
//            queue[counter]+queue[order];
//
//            system("pause");
//            system("cls");
//            break;
//        case 8:
//            cout << "С какой очередью вычесть? (1 - " << counterEnd << ") : ";
//            cin >> order; order--;
//            if ((order < 0) || (order == counter) || (order >= counterEnd))
//            {
//                cout << "Некорректное значение. Вычитание не произведено" << endl;
//                break;
//            }
//            queue[counter] - queue[order];
//            system("pause");
//            system("cls");
//            break;
        case 0:
            Menu = 0;
            break;
        default:
            cout << "некорректный ввод";
            break;
        }
    }
}

template <typename T>
int Sort_Shel()
{
    cout<<sizeof(T);
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
//                for (int i=0;i<size;i++)
//                {
//                    cout<<arr[0][i]<<"  ";
//                }
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
        cout<<arr[0][i]<<"  "; //5 3 8 0 7 4 9 1 6 2
    }
    return -1;

}

int main()
{
    setlocale(LC_ALL, "Rus");
    system("chcp 1251");
    system("cls");
    cout << "Задание №2 создать параметризованную очередь" << endl;
    int menu_type=1; //выбор
    int n=2;
    cout << "Создано 2 очереди" << endl;
  //  cin >> n;
    Queue<int> *queue1 = 0; int x1=0;
    Queue<float> *queue2 = 0; float x2 = 0;
    Queue<double> *queue3 = 0; double x3 = 0;
    Queue<char> *queue4 = 0; char x4 = 0;
   // cout<<sizeof(queue4)<<endl;
   // Queue<char*> *queue5 = 0; char* x5 =nullptr;
  //  cout<<sizeof(queue5)<<endl;
  //  Queue<> *queue6 = 0; int x6 = 0;
    while (menu_type)
    {
        cout << "С каким типом будет работать класс?" << endl;
        cout << "|0| - Выход" << endl;
        cout << "|1| - int" << endl;
        cout << "|2| - float" << endl;
        cout << "|3| - double" << endl;
        cout << "|4| - char" << endl;
        cout << "|5| - Выбирайте сами, мне лень" << endl;
        cin >> menu_type;

        switch (menu_type)
        {
        case 0: break;
        case 1:  queue1 = new Queue<int>[n]; workWithClass(queue1,x1); delete[] queue1; break;
        case 2:  queue2 = new Queue<float>[n]; workWithClass(queue2,x2 ); delete[] queue2; break;
        case 3:  queue3 = new Queue<double>[n]; workWithClass(queue3, x3); delete[] queue3; break;
        case 4:  queue4 = new Queue<char>[n]; workWithClass(queue4, x4); delete[] queue4; break;
       // case 5:  queue5 = new Queue<char*>[n]; workWithClass(queue5, x5); delete[] queue3; break;
        default:
            cout << "некорректный ввод";
            break;
        }
    }

    cout << "Задание №1 Написать функцию шаблон двоичного поиска" << endl;
    int Menu_1=-1;
    int Work_menu_1=-1;
   
     while (Menu_1)
        {

            cout<<"Выберите тип данных"<<endl;
            cout<<"1-int;2-float;3-double;4-char"<<endl;
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
