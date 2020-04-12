#include"Son.h"
#include"Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>

void workWithClass(T* queue) //шаблон класса T для работы c разными наследниками в основной функции, передаём указатель на класс
{
    int choise;
    int number = 0;            // Номер обрабатываемой очереди
    int count = 1;            // Количество очередей
    int value;
    int v, flag = 1;

    do
    {
        cout << "Используется очередь № " << number << endl;
        cout << "|1| - Добавление элемента очереди" << endl;
        cout << "|2| - Извлечение элемента из очереди" << endl;
        cout << "|3| - Вывод очереди на экран" << endl;
        cout << "|4| - Среднее арифметическое" << endl;
        cout << "|5| - Создание копии очереди" << endl;
        cout << "|6| - Слияние очередей" << endl;
        cout << "|7| - Выбор другой очереди" << endl;
        cout << "|8| - Выход" << endl;
        cin >> v;

        switch (v)
        {
        case 1:
            cout << "Введите значение: ";
            cin >> value;
            queue[number].push(value);
            cout << "Элемент добавлен" << endl;
            break;

        case 2:
            if (!queue[number].check()) break;
            v = queue[number].pop();
            cout << "Извлечён элемент:" << v << endl;
            break;

        case 3:
            if (!queue[number].check()) break;
            cout << "Очередь состоит из:" << endl;
            queue[number].out();
            break;

        case 4:
            if (!queue[number].check()) break;
            cout << queue[number].cnt_high_el() << endl;
            break;

        case 5:
            if (!queue[number].check()) break;
            queue[count].copy(queue[number]);
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
   // setlocale(LC_ALL, "Rus");
    int N;
    int v;
    cout << "Введите количество очередей" << endl;
    cin >> N;

    
    //////
    sub1* Object1=NULL;
    sub2* Object2=NULL;
    sub3* Object3=NULL;

    cout << "Какой тип наследования будет у производного класса" << endl;
    cout << "|1| - Public" << endl;
    cout << "|2| - Protected" << endl;
    cout << "|3| - Private" << endl;
    cin >> v;

    switch (v)
    {
    case 1:
            Object1 = new sub1[N];
            workWithClass(Object1);
            delete[] Object1;
            break;
        
    case 2:
            Object2 = new sub2[N];
            workWithClass(Object2);
            delete[] Object2;
            break;
    case 3:
            //в цикле создавать новые new sub
            Object3 = new sub3[N];
            workWithClass(Object3);
            delete[] Object3;
            break;
    default:
            cout << "некорректный ввод";
            break;
    }

    return 0;
}
