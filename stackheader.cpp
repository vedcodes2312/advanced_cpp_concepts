// stacker header file STL
#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;

    //push elements (insertion)
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // Display all elements (copy stack to preserve original)
    stack<int> temp1 = st;
    cout << "Stack elements: ";
    while (!temp1.empty()) {
        cout << temp1.top() << " ";
        temp1.pop();
    }
    cout << endl;
     cout << "Top element: " << st.top() << endl;  // 30
    cout << "Stack size: " << st.size() << endl;  // 3
     st.pop();  // Removes 30
    cout << "Top after pop: " << st.top() << endl;  // 20

     if (st.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
 // Display all elements (copy stack to preserve original)
    stack<int> temp = st;
    cout << "Stack elements: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    
 //Swap with another stack
    stack<int> another;
    another.push(100);
    another.push(200);

    cout << "Before swap:" << endl;
    cout << "st top: " << st.top() << ", another top: " << another.top() << endl;

    st.swap(another);  // or use std::swap(st, another);

    cout << "After swap:" << endl;
    cout << "st top: " << st.top() << ", another top: " << another.top() << endl;

    return 0;
}




/*

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // Declare a stack of strings
    stack<string> st;

    // Push strings onto the stack
    st.push("Apple");
    st.push("Banana");
    st.push("Cherry");

    // Access and display top element
    cout << "Top element: " << st.top() << endl;  // Cherry

    // Pop the top element
    st.pop();
    cout << "After pop, top element: " << st.top() << endl;  // Banana

    // Check size
    cout << "Stack size: " << st.size() << endl;  // 2

    // Check if stack is empty
    cout << (st.empty() ? "Stack is empty" : "Stack is not empty") << endl;

    // Display all elements by copying
    stack<string> temp = st;
    cout << "Stack contents from top to bottom: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
                      */