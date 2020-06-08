
#include <iostream>
#include "ArrayInt.h"
 #include <stdlib.h>
 #include <stdio.h>
 #include <iostream>
using namespace std;
int main()
{
    char target;
    int number;
    int time;
    int num;
    ArrayInt array(0);
//    for (int i=0; i<10; i++)
    int menu=0;
    int index=0;
    do{
        std::cin>>menu;
        switch(menu){
                case 1:
                cout<<endl<<"Введите назначение поезда:";
                cin >>target;
                cout<<endl<<"Введите номер ";
                cin >>number;
                cout<<endl<<"Введите время отправления ";
                cin >>time;
                cout<<endl<<"Каким номером добавить поезд ";
                cin >>num;
                array.insertBefore(target,number,time,num);
                
                break;
            case 2:
                cout<<endl;
                for (int i=0;i<2;i++)
                {
                    array.out(i);
                    cout<<endl;
                }
                break;
            case 3:
                cout<<endl<<"Удалить элемент с номером: ";
                cin>>index;
                array.remove(index);
            case 4:
                cout<<endl<<"Найти поезда с отправдением раньше: ";
                cin>> time;
                array.search(time);
            case 0:
                break;
                
        }
    
    }while (menu!=0);

    return 0;
}
