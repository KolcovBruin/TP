#include "functions.h"
int main()
{
    int menu = 0; // переменная меню
    int X = 0; // переменная для сравнения
    int Z = 5; // переменная для списка

    menu=0;
    LONG work(0);
    LONG res(0);
    long int value=0;
    long int Y=0;
    
       while (menu != 6)
       {
           cout << " Задание 1. Унарная операция. Работа с классом целых чисел (long)."<<endl;
           cout << " Введите номер одного из нижеперечисленных пунктов меню.\n";
           cout << " Меню:\n";
           cout << " [0]: Изменение значения. Рабочее знаечние сейчас"; work.show(); cout << endl;
           cout << " [1]: Оператор --(префикс, метод), вычитание введенного значение из рабочего значения. work-Y"<<endl;
           cout << " [2]: Оператор ++(префикс, дружественная ф-я), увеличение рабочего значения на введенное значение. work+Y"<<endl;
           cout << " [3]: Оператор --(пост, метод), уменьшение на 1. work--"<<endl;
           cout << " [4]: Оператор ++(пост, дружественная ф-я), увеличение на 1. work++"<<endl;
           cout << " [5]: Оператор!, отрицательное значение рабоченго значения. !work"<<endl;
           cout << " [6]: Переход ко второму заданию" << endl;
           cin >> menu;

           switch (menu)
           {
           case 0: cout << " Активирован пункт 0" << endl;
                   cout << " Введите новое значение:";
                   cin>>value;
                   work.push(value);
                    cout << endl;
               cout << "Значение изменено" << endl;
                   break;
               case 1:
                   cout << " Активирован пункт 1" << endl;
                    cout << "Введите число, которое хотите вычесть из рабочего значения" << endl;
                   cin>>Y;
                   work.push_usr(Y);
                   cout << "--work=";
                   work.show();
                   cout<<"-"<<Y<<"=";
                   res=--work;
                   res.show();
                   cout<<endl;
                   break;
               
               
               case 2:
                cout << " Активирован пункт 2" << endl;
                 cout << "Введите число, которое хотите прибавить к рабочему значению" << endl;
                cin>>Y;
                work.push_usr(Y);
                cout << "++work=";
                work.show();
                cout<<"+"<<Y<<"=";
                res=++work;
                res.show();
                cout<<endl;
                break;
               
               case 3:
                cout << " Активирован пункт 3" << endl;
                cout << "work--=";
                res=work--;
                res.show();
                cout<<endl;
                break;
                
               
               case 4:
                cout << " Активирован пункт 4" << endl;
                cout << "work++=";
                res=work++;
                res.show();
                cout<<endl;
                break;
                 
                
                case 5:
                 cout << " Активирован пункт 5" << endl;
                 cout << "!work=";
                 res=!work;
                 res.show();
                 cout<<endl;
                 break;
                   
           case 6: cout << "| Активирован пункт 5" << endl;
                   break;
           default:
               cout << "| Введено неверное значение." << endl;
               break;
           }
       }

    menu=0;
    STACK STACK_name;
    STACK_name.ptr_last();
    //list_size(LIST_NAME, 10); // устанавливаем первоначальный размер
    int num_; // для размера списка
    int rez=0;
    while (menu != 15)
    {
        system("cls");
        cout << " Задание 2. Бинарная операция. Работа со стеком.\n";
        cout << " Введите номер одного из нижеперечисленных пунктов меню.\n";
        cout << " Меню:\n";
        cout << " [00]: Изменение значения X; X=" << X << endl;
        cout << " [01]: Создание стека"<<endl;
        cout << " [02]: Вывод стека"<<endl;
        cout << " [03]: ДЛС < X\n";
        cout << " [04]: X < ДЛС\n";
        cout << " [05]: ДЛС > X\n";
        cout << " [06]: X > ДЛС\n";
        cout << " [07]: ДЛС == X\n";
        cout << " [08]: X == ДЛС\n";
        cout << " [09]: ДЛС != X\n";
        cout << " [10]: X != ДЛС\n";
        cout << " [11]: ДЛС <= X\n";
        cout << " [12]: X <= ДЛС\n";
        cout << " [13]: ДЛС >= X\n";
        cout << " [14]: X >= ДЛС\n";
        cout << " [15]: Завершение работы программы -->||<" << endl;
        cout << " ";
        cin >> menu;
        
        
        cin >> menu;
      
        switch (menu)
        {
        
            case 2: cout <<"Введите размер стека"<<endl;
                cin>>num_;
                stack_create(STACK_name,num_);
                STACK_name.out();
                STACK_name.ptr_move();
                rez=X+STACK_name;
                cout<<rez;
                 STACK_name.ptr_move();
                rez=STACK_name+=X;
                cout<<rez;
            break;
        
        case 17: cout << "| Завершение работы программы." << endl; break;
        default:
            cout << "| Введено неверное значение." << endl;
            break;
        }
    }
    
    return 0;
}
