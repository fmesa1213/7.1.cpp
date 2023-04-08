/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Homework E7.1

I wrote a program that receives two pointers and sorts the values to which they point.
*/


#include <iostream>
using namespace std;

void sort2(double* p, double* q);
int main()
{
   double x,y;
   cout << "Enter first value: "<< endl;
   cin >> x;
   cout << "Enter second value: " << endl;
   cin >> y;
  
   sort2(&x,&y);
   cout << x << y;
   return 0;
}

void sort2(double* p, double* q)
{

   if(*p > *q)
   {  
       double tmp = *p;
       *p = *q;
       *q = tmp;
   }
}
