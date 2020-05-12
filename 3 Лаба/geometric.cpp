#include "geometric.h"
#include <iostream>
#include <cmath>
using namespace std;

double Geometric::summa(double n) {
    return (b1*(1- pow(q, n)))/(1-q);
}
Geometric::Geometric():b1(0), q(0) {
    counter++;
    cout << "Количество прогрессий: " << counter << endl;
}
Geometric::~Geometric() {
    cout << "вызван диструктор ГП" << endl;;
}
void Geometric::set() {
    cout<<"Ведите первый элемент геометрической прогрессии"<<endl;
    cin >> b1;
    cout<<"Ведите постоянное отношение геометрической прогрессии"<<endl;
    cin >> q;
}
