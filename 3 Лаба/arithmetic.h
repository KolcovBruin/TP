#pragma once
#include "progression.h"
class Arithmetic:public Progression {
private:
    double a1;
    double d;
protected:
public:
    double summa(double n) override;
    Arithmetic(); //конструктор очереди
    ~Arithmetic();//диструктор
    void set() override;
};
