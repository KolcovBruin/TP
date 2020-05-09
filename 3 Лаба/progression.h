#pragma once
class Progression {
private:
protected:
    static int counter;
    int arr[10];
public:
    virtual double summa(double a) = 0;
    virtual void set() = 0;
    virtual    ~Progression();//диструктор
    int getCounter();
};
