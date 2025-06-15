/* In C++, the functional header is part of the Standard Library and provides utilities for function objects (functors), function wrappers, 
and utilities like std::function, std::bind, and predefined function objects such as std::plus, std::greater, etc.    */
/*   A polymorphic function wrapper in C++ is a type that can store any callable object—like 
functions, lambdas, functors, or member function pointers—and call them with a uniform interface.     
A function object (or functor) is any object that can be called as if it were a function, usually by 
overloading the function call operator operator() in a class or struct. 
In C++, the function call operator (operator()) is a special operator that allows an object of a class to be called like a function.     */
#include<iostream>
#include<functional>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void greet(string name, int age) {
    cout << "Hello " << name << ", Age: " << age << '\n';
}

int main() {

    //storing a regular function
    function<int(int,int)>ops = add;
    //    ops = add; // This line is not necessary because the above line already does the sam
    cout << ops(5, 7) << endl;

    //storing a lambda expression
    //auto lambda = [](int a, int b) { return a + b; };
    function<void()> greet1 = []() { cout << "Hello from lambda\n";};
    greet1();

    // std :: bind demo
    auto greetJohn = bind(greet, "John", placeholders::_1);
    greetJohn(25);           // Output: Hello John, Age: 25

    // pre-defined function objects(pre-defined functors)
    //compparison functors
   greater<int> gt;
   cout << gt(10,5) << endl;   //output: 1(true,10>5)
   cout << gt(1,3) << endl;   //output: 0(false)
   
   less<int> isLess;
      cout << isLess(10,5) << endl;   //output : 0   (false)
      cout << isLess(1,3) << endl;    //output : 1 (true, 1<3)
    int a = 10, b = 20;

    if (isLess(a, b)) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is NOT less than " << b << endl;
    }

    //arithmetic functors
    std::plus<int> add;

    int result = add(10, 5);  // equivalent to 10 + 5
    std::cout << "Sum: " << result << std::endl;
}