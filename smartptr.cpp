//smart pointers
//pointers - access heap memory
// automatically garbage management by smart pointers
//no need to deallocate memory manually
#include<iostream>
#include<memory>
using namespace std;

class Rectangle {
    private:
    int length, breadth;
    public:
    //constructor using initializer list
    //  Rectangle(int l, int b) : length(l), breadth(b) {}
    // using constructor to initialize data members
    Rectangle(int l, int b) {
    length = l;
    breadth = b;
    }

    int area() {
        return length * breadth;
    }

     ~Rectangle() {    //destructor 
        cout << "Rectangle destroyed\n";
    }
};

int main() {   //template pointers
    // smart pointer - unique_ptr 
    //only one object
   unique_ptr<Rectangle> ptr(new Rectangle(10, 20));
   cout << "Area of rectangle: " << ptr->area() << endl;
   
   // unique_ptr<Rectangle> ptr2=ptr;
   // ptr2 = ptr; //error - only one object
   // unique_ ptr<Rectangle> ptr2(ptr);   error
   //call to implicitly deleted copy constructor of 'unique_ptr<Reactangle>' 
   unique_ptr<Rectangle> ptr2;
   ptr2 = move(ptr);    //transfer of ownership
    if (ptr == nullptr) {    // ptr lost ownership
        cout << "ptr is now nullptr after move." << endl;  
    }
   cout << ptr2->area() << endl;

   //smart pointer - shared_ptr
   //multiple objects 
   shared_ptr<Rectangle> ptr3(new Rectangle(10, 20));
   cout << "Area of rectangle: by ptr3 " << ptr3->area() << endl;
   shared_ptr<Rectangle> ptr4;
   ptr4 = ptr3;  // no need of move()
    if (ptr4 == nullptr) {
        cout << "ptr is now nullptr after move." << endl;  
    }
    cout << " Area of rectangle: by ptr4 " << ptr4->area() << endl;
    cout << ptr3.use_count() << endl; 

    //smart pointer weak ptr
    weak_ptr<Rectangle> ptr5 = ptr3;

    cout << "Is ptr5 expired? " << (ptr5.expired() ? "Yes" : "No") << endl;

    shared_ptr<Rectangle> ptr6 = ptr5.lock();
    if (ptr6) {
        cout << "Area via ptr6 (locked from ptr5): " << ptr6->area() << endl;
        cout << "Use count after locking: " << ptr6.use_count() << endl;
    }

    /*   shared_ptr<Rectangle> ptr6 = ptr5.lock();
    cout << (ptr6 ? 
        "Area of rectangle via ptr6 (locked from ptr5): " + to_string(ptr6->area()) + "\nUse count after locking: " + to_string(ptr6.use_count()) :
        "ptr5 (weak_ptr) is expired."
    // ) << endl;                           */


    return 0;
}

 