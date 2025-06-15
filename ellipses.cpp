// ellipses - variable no. of arguments in function 
#include<iostream>
#include<cstdarg>
using namespace std;

int sum(int n,...) {
    va_list list;
    va_start(list, n);

    int x;
    int sum = 0;  //initialize to zero
    for(int i=0; i<n; i++) {
        x = va_arg(list, int);
        sum += x;  
    }
    va_end(list);
    return sum;
}

int main() {    //the first digit tells no. of arguments
    // like sum(2,5,10); 2-> no. of arguments(5,10)   ...  sum = 5+10=15
    cout << sum(3,10, 20, 30) << endl;  // prints 60
    cout << sum(5,100, 200, 300, 400, 500) << endl;  // prints 1500
    cout << sum(2,5,10) << endl;  // prints 15
    return 0; // end of program          
}         