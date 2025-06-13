// lambda expression - unnamed function

#include<iostream>
using namespace std;

template<typename T>
void demo(T n)
{
    n();
}

int main() {
   []() {cout << "hello" << endl;}(); // lambda expression immediately invoked

   [](int x, int y) {cout <<"sum =" << x+y << endl;}(10,20);//with paramters

   cout <<  ([](int x, int y) {return x+y;}(10,20)) << endl;//with paramters return

   int a = [](int x, int y) ->int{return x+y;}(10,20); //with return type

   cout << a;

   int p=10;

   int q=20;
   [p,q](){cout << p << q <<endl;}();  //a is captured by value
   auto f = [p,q](){cout << p << q <<endl;};
   f();
   a++;
   f();
   auto m = [&p,&q](){cout << ++p << ++q <<endl;};
   m();
   demo(m);     //lambda expression passed to a function
   demo(m);
   return 0; 
}