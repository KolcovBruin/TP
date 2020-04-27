#include "functions.h"
int main()
{
    int menu = 0; // переменная меню
    int X = 0;

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
           cout << " '0': Изменение значения. Рабочее знаечние сейчас: "; work.show(); cout << endl;
           cout << " '1': Оператор --(префикс, метод), вычитание введенного значение из рабочего значения. work-Y"<<endl;
           cout << " '2': Оператор ++(префикс, дружественная ф-я), увеличение рабочего значения на введенное значение. work+Y"<<endl;
           cout << " '3': Оператор --(пост, метод), уменьшение на 1. work--"<<endl;
           cout << " '4': Оператор ++(пост, дружественная ф-я), увеличение на 1. work++"<<endl;
           cout << " '5': Оператор!, отрицательное значение рабоченго значения. !work"<<endl;
           cout << " '6': Переход ко второму заданию" << endl;
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
    int num_; // для размера стека
    int rez=0;
    while (menu != 11)
    {
        cout << " Задание 2. Бинарная операция. Работа со стеком.\n";
        cout << " Введите номер одного из нижеперечисленных пунктов меню.\n";
        cout << " Меню:\n";
        cout << " '00': Изменение значения X-Число6 с которым производятся операции; X=" << X << endl;
        cout << " '01': Создание стека"<<endl;
        cout << " '02': Вывод стека"<<endl;
        cout << " '03': Стек+Х"<<endl;
        cout << " '04': Стек+=Х"<<endl;
        cout << " '05': Стек-Х"<<endl;
        cout << " '06': Стек-=X"<<endl;
        cout << " '07': Стек*X"<<endl;
        cout << " '08': Стек*=X"<<endl;
        cout << " '09': Стек/Х"<<endl;
        cout << " '10': Стек/=Х"<<endl;
        cout << " '11': Завершение работы программы " << endl;
        cout << " ";
        cin >> menu;
      
        switch (menu)
        {
            case 0: cout <<"Введите Х"<<endl;
                cin>>X;
                break;
            case 1: cout <<"Введите размер стека"<<endl;
                cin>>num_;
                stack_create(STACK_name,num_);
                STACK_name.out();
                
                break;
            case 2:
                cout<<"Стек состоит из:"<<endl;
                STACK_name.out();
            case 3:
                STACK_name.ptr_last();
                for (int i=0;i<STACK_name.size();i++)
                {
                    cout<<"Элемент стека №"<<i<<"+"<<X<<"=";
                
                rez=X+STACK_name;
                cout<<rez<<endl;
                    STACK_name.ptr_move();
                }
                break;
                case 4:
                    STACK_name.ptr_last();
                    for (int i=0;i<STACK_name.size();i++)
                    {
                        cout<<"Элемент стека №"<<i<<"+="<<X<<"=";
                   
                    rez=STACK_name+=X;
                    cout<<rez<<endl;
                         STACK_name.ptr_move();
                    }
                    break;

                case 5:
                    STACK_name.ptr_last();
                    for (int i=0;i<STACK_name.size();i++)
                    {
                        cout<<"Элемент стека №"<<i<<"-"<<X<<"=";
                    rez=X-STACK_name;
                    cout<<rez<<endl;
                         STACK_name.ptr_move();
                    }
                    break;
                    case 6:
                        STACK_name.ptr_last();
                        for (int i=0;i<STACK_name.size();i++)
                        {
                            cout<<"Элемент стека №"<<i<<"-="<<X<<"=";
                        rez=STACK_name-=X;
                        cout<<rez<<endl;
                             STACK_name.ptr_move();
                        }
                        break;
                

                case 7:
                    STACK_name.ptr_last();
                    for (int i=0;i<STACK_name.size();i++)
                    {
                        cout<<"Элемент стека №"<<i<<"*"<<X<<"=";
                    rez=X*STACK_name;
                    cout<<rez<<endl;
                         STACK_name.ptr_move();
                    }
                    break;
                    case 8:
                        STACK_name.ptr_last();
                        for (int i=0;i<STACK_name.size();i++)
                        {
                            cout<<"Элемент стека №"<<i<<"*="<<X<<"=";
                        rez=STACK_name*=X;
                        cout<<rez<<endl;
                             STACK_name.ptr_move();
                        }
                        break;
                        

                        case 9:
                            STACK_name.ptr_last();
                            for (int i=0;i<STACK_name.size();i++)
                            {
                                cout<<"Элемент стека №"<<i<<"/"<<X<<"=";
                            rez=X/STACK_name;
                            cout<<rez<<endl;
                                 STACK_name.ptr_move();
                            }
                            break;
                            case 10:
                                STACK_name.ptr_last();
                                for (int i=0;i<STACK_name.size();i++)
                                {
                                    cout<<"Элемент стека №"<<i<<"/="<<X<<"=";
                                rez=STACK_name/=X;
                                cout<<rez<<endl;
                                     STACK_name.ptr_move();
                                }
                                break;
                
           
        
        case 11: cout << " Завершение работы программы." << endl; break;
        default:
            cout << " Введено неверное значение." << endl;
            break;
        }
    }
    
    return 0;
}
