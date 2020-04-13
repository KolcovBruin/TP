#include"Son.h"
#include"Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

template <class tmpl>

void workWithClass(tmpl* queue) //шаблон класса  для работы c разными наследниками в основной функции, передаём указатель на класс
{
    int choise;
    int number = 0;            // Номер обрабатываемой очереди
    int count = 1;            // Количество очередей с которыми работает пользователь
    int value;               //введенное значение
    int Menu, flag = 1;      //Работа меню

    do
    {
        //текст меню
        cout << "Используется очередь № " << number << endl;
        cout << "'1' - Добавление элемента очереди" << endl;
        cout << "'2' - Извлечение элемента из очереди" << endl;
        cout << "'3' - Вывод очереди на экран" << endl;
        cout << "'4' - Подсчет числа элементов, значение которых превышает значение предыдущего элемента" << endl;
        cout << "'5' - Создание копии очереди" << endl;
        cout << "'6' - Слияние очередей" << endl;
        cout << "'7' - Выбор другой очереди" << endl;
        cout << "'8' - Выход" << endl;
        cin >> Menu;
        
        //работа меню
        switch (Menu)
        {
        case 1:
            cout << "Введите значение: ";
            cin >> value;
            queue[number].push(value);  //внесение значения в очередь
            cout << "Элемент добавлен" << endl;
            break;

        case 2:
            if (!queue[number].check()) break;  //проверка очереди
            value = queue[number].pop();   //извлечение из выбранной очереди
            cout << "Извлечён элемент:" << value << endl;
            break;

        case 3:
            if (!queue[number].check()) break;
            cout << "Очередь состоит из:" << endl;
            queue[number].out();  //вывод на экран выбранной очереди
            break;

        case 4:
            if (!queue[number].check()) break;
            cout << queue[number].cnt_high_el() << endl; //Задание 13
            break;

        case 5:
            if (!queue[number].check()) break;
            queue[count].copy(queue[number]);   //копирование выбранной очереди
            cout << "Очередь скопирована. Номер очереди: " << count++ << endl;
            break;

        case 6:
            if (count == 1)
            {
                cout << "Существует только одна очередь" << endl;
                break;
            }

            cout << "С какой очередью будет произведено слияние? (0 - " << count - 1 << ") :  ";
            cin >> choise;

            if ((choise < 0) || (choise == number) || (choise >= count))
            {
                cout << "Некорректное значение. Объединение не произведено" << endl;
                break;
            }

            queue[count].merger(queue[number], queue[choise]);
            cout << "Объединение произведено. Номер очереди результата: " << count << endl;
            count++;
            break;

        case 7:
            if (count == 1)
            {
                cout << "Существует только одна очередь" << endl;
                break;
            }

            cout << "Номер очереди, на которую следует переключиться: (0 - " << count - 1 << ") :  ";
            cin >> choise;
            if ((choise < 0) || (choise == number) || (choise >= count))
            {
                cout << "Некорректное значение. Переключение не выполнено" << endl;
            }
            else
            {
                number = choise;
            }
            break;

        case 8:
            flag = 0;
        }
    } while (flag == 1);
}

int main()
{
    int Number_Q=3;
    int Type_son;
    int guide;
    cout << "Вам нужна инструкция по использованию программы?"<< endl;
    cout << "Да - введите '1'"<< endl;
    cout << "Нет - введите '2'"<< endl;
    cin >> guide;
    if (guide==1)
    {
        
        cout << "Данная программа выполняет функции:"<< endl;
        cout << "- Добавление элемента очереди"<< endl;
        cout << "- Извлечение элемента очереди"<< endl;
        cout << "- Вывод очереди на экран"<< endl;
        cout << "- Подсчет числа элементов, значение которых превышает значение предыдущего элемента  (Задание №13)"<< endl;
        cout << "- Создание копии очереди"<< endl;
        cout << "- Слияние оригинальной очереди с копией и вывод результата на экран"<< endl;
        cout << "- Выход из программы"<< endl;
        cout << "Программа реализована с функцией выбора типа наследовния"<< endl;
        cout << "Также для реализации копирования и слияния при запуски программы создается три очереди, которые могут оставаться пустыми"<< endl;
    }
    cout << "Введите количество очередей" << endl;
    cin >> Number_Q;
    sub1* Object1=NULL;
    sub2* Object2=NULL;
    sub3* Object3=NULL;

    cout << "Выбирете тип наследования" << endl;
    cout << "'1' - Public" << endl;
    cout << "'2' - Protected" << endl;
    cout << "'3' - Private" << endl;
    cin  >> Type_son;

    switch (Type_son)
    {
    case 1:
            Object1 = new sub1[Number_Q];
            workWithClass(Object1);
            delete[] Object1;
            break;
        
    case 2:
            Object2 = new sub2[Number_Q];
            workWithClass(Object2);
            delete[] Object2;
            break;
    case 3:
            Object3 = new sub3[Number_Q];
            workWithClass(Object3);
            delete[] Object3;
            break;
    default:
            cout << "некорректный ввод";
            break;
    }

    return 0;
}
