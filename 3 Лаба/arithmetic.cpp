#include "arithmetic.h"
#include <iostream>
using namespace std;

double Arithmetic::summa(double n) {
    return (2 * a1 + d*(n - 1)) / 2 * n;
}
Arithmetic::Arithmetic():a1(0),d(0) {
    counter++;
    cout << "Количество прогрессий: " << counter << endl;
}
Arithmetic::~Arithmetic() {
    cout << "вызван диструктор АП" << endl;;
}
void Arithmetic::set() {
    cout << "Ведите первый элемент арифметической прогрессии" << endl;
    cin >> a1;
    cout << "Ведите постоянное отношение арифметической прогрессии" << endl;
    cin >> d;
}
