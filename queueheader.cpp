#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    // queue insertion (enqueue)
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
     cout << "Front element: " << q.front() << endl;  
    cout << "Back element: " << q.back() << endl;    
    cout << "Queue size: " << q.size() << endl;  
     // Check if queue is empty
    if (q.empty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
      // display of queue implements(copy method)
    queue<int> temp = q;
    cout << "Queue elements: ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    // pop deletion- dequeue
      q.pop();  
    cout << " new front is: " << q.front() << endl;  
     queue<int> temp1 = q;
    cout << "Queue elements: ";
    while (!temp1.empty()) {
        cout << temp1.front() << " ";
        temp1.pop();
   }
   queue<int> another;
    another.push(100);
    another.push(200);

    cout << "\n Before swap:" << endl;
    cout << "q front: " << q.front() << ", another front: " << another.front() << endl;

    q.swap(another);  // or use std::swap(q, another);

    cout << "After swap:" << endl;
    cout << "q front: " << q.front() << ", another front: " << another.front() << endl;
return 0;
}