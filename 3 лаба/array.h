#pragma once
//#include "binar.h"
class int_arr
{
private:
    int *arr;
    int size;
public:
 //   virtual void push(int a, int i);
    virtual void view();
    int_arr(int **ptr,int N);
   // void
    int get(int i);
    ~int_arr();
    int_arr();
//  virtual  void safe_up(int i);
//      virtual void set_size();
//     virtual  void convert();
//     int_arr();
  //  void set_sz(int i);
  //  int get_sz(int i);
};
