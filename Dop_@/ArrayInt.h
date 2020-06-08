#ifndef ARRAYINT_H
#define ARRAYINT_H
 using namespace std;
#include <cassert> // для assert()

class TRAIN{
    char target;
    int number;
    int time;
public:
    
    void set(char a,int b, int c)
    {
        target=a;
        number=b;
        time=c;
    }
    void view()
    {
        cout<<"Назначение:"<<target<<endl;
        cout<<"Номер:"<<number<<endl;
        cout<<"Время:"<<time<<endl;
    }
    int get_num()
    {
        return number;
    }
    int get_time()
    {
        return time;
    }
    TRAIN()
    {
        
    }
};

class ArrayInt
{
private:
  //  TRAIN *a;
    int m_length;
    TRAIN *m_data;
 
public:
    ArrayInt()
    {
    }
 
    ArrayInt(int length):
        m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new TRAIN[length];
        else
            m_data = nullptr;
    }
 int comp1 ( TRAIN & a,  TRAIN & b)
 {
    // int a;
     
     return ( a.get_num()<b.get_num());
 }
    ~ArrayInt()
    {
        delete[] m_data;
    }
 
    void erase()
    {
        delete[] m_data;
        // Здесь нужно указать m_data значение nullptr, чтобы на выходе не было висячего указателя
        m_data = nullptr;
        m_length = 0;
    }
 
    TRAIN& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

 
    // Функция resize изменяет размер массива. Все существующие элементы сохраняются. Процесс медленный
    void resize(int newLength)
    {
        // Если массив нужной длины, то выполняем return
        if (newLength == m_length)
            return;
 
        // Если нужно сделать массив пустым, то делаем это и затем выполняем return
        if (newLength <= 0)
        {
            erase();
            return;
        }
 

 
        // Выделяем новый массив
        TRAIN *data = new TRAIN[newLength];
 
        // Затем нам нужно разобраться с количеством копируемых элементов в новый массив
        // Мы хочем скопировать столько элементов, сколько их есть в меньшем из массивов
        if (m_length > 0)
        {
            int elementsToCopy = (newLength > m_length) ? m_length : newLength;
 
            // Поочерёдно копируем элементы
            for (int index=0; index < elementsToCopy ; ++index)
                data[index] = m_data[index];
        }
 
        // Удаляем старый массив, так как он нам уже не нужен
        delete[] m_data;
 

        m_data = data;
        m_length = newLength;
    }
 
    void insertBefore(char value_tar,int value_time, int number, int index)
    {
        // Проверка корректности передаваемого индекса
        assert(index >= 0 && index <= m_length);
 
        // Создаём новый массив на один элемент больше старого массива
        TRAIN *data = new TRAIN[m_length+1];
 
        // Копируем все элементы аж до index-а
        for (int before=0; before < index; ++before)
            data [before] = m_data[before];
 
        //Вставляем наш новый элемент в наш новый массив
    
        data [index].set(value_tar, value_time, number);
 
        // Копируем все значения после вставляемого элемента
        for (int after=index; after < m_length; ++after)
            data[after+1] = m_data[after];
 
        // Удаляем старый массив и используем вместо него новый массив
        delete[] m_data;
        m_data = data;
        ++m_length;
    }
 

    void out(int index)
    {
        m_data[index].view();
    }
//    void sort_arr()
//    {
//        sort(m_data,m_data+4,comp1);
//    }
       void remove(int index)
       {
           // Проверка на корректность передаваемого индекса
           assert(index >= 0 && index < m_length);
    
           // Если это последний элемент массива, то делаем массив пустым и выполняем return
           if (m_length == 1)
           {
               erase();
               return;
           }
    
           // Cоздаём новый массив на один элемент меньше нашего старого массива
           TRAIN *data = new TRAIN[m_length-1];
    
           // Копируем все элементы аж до index-а
           for (int before=0; before  < index; ++before)
               data[before] = m_data[before];
    
           // Копируем все значения после удаляемого элемента
           for (int after=index+1; after < m_length; ++after )
               data[after-1] = m_data[after];
    
           // Удаляем старый массив и используем вместо него новый массив
           delete[] m_data;
           m_data = data;
           --m_length;
       }
    int getLength() { return m_length; }
    void search(int value)
    {
        for(int i=0;i<m_length;i++)
        {
            if (m_data[i].get_time()<value)
            {
                out(i);
            }
        }
    }
};


#endif
