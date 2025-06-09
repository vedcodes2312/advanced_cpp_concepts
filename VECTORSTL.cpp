#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse
using namespace std;

// struct Student {
//     string name;
//     int age;
//     float marks;
// };

// class Student {
//     string name;
//     int age;
//     float marks;

// public:
//     // Function to take input
//     void getData() {
//         cout << "Enter name: ";
//         cin >> name;
//         cout << "Enter age: ";
//         cin >> age;
//         cout << "Enter marks: ";
//         cin >> marks;
//     }

//     // Function to display data
//     void displayData() const {
//         cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
//     }
// };


int main() {
    vector<int> demo;  // Declare a vector named demo

    // 1. Push elements
    demo.push_back(10);
    demo.push_back(20);
    demo.push_back(30);
    demo.push_back(40);
    demo.push_back(50);

    cout << "Initial vector: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 2. Insert at specific position
    demo.insert(demo.begin() + 2, 25); // Insert 25 at index 2
    cout << "After insert at index 2: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 3. Accessing elements
    cout << "Element at index 3: " << demo[3] << "\n";
    cout << "Front element: " << demo.front() << "\n";
    cout << "Back element: " << demo.back() << "\n";

    // 4. Size and capacity
    cout << "Size: " << demo.size() << "\n";
    cout << "Capacity: " << demo.capacity() << "\n";

    // 5. Pop last element
    demo.pop_back();
    cout << "After pop_back: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 6. Erase element at position
    demo.erase(demo.begin() + 1);
    cout << "After erase at index 1: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 7. Sorting
    sort(demo.begin(), demo.end());
    cout << "After sorting: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 8. Reversing
    reverse(demo.begin(), demo.end());
    cout << "After reversing: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 9. Find element
    auto it = find(demo.begin(), demo.end(), 25);
    if (it != demo.end())
        cout << "Element 25 found at index: " << it - demo.begin() << "\n";
    else
        cout << "Element 25 not found\n";

    // 10. Resize
    demo.resize(3); // Keep first 3 elements
    cout << "After resize to 3 elements: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 11. Clear the vector
    demo.clear();
    cout << "After clear, size = " << demo.size() << "\n";

    // 12. Check if empty
    if (demo.empty())
        cout << "Vector is empty.\n";
    else
        cout << "Vector is not empty.\n";

    // 13. Assign values
    demo.assign(5, 100); // 5 elements with value 100
    cout << "After assign: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    // 14. Swap with another vector
    vector<int> temp = {1, 2, 3};
    demo.swap(temp);
    cout << "After swap with temp: ";
    for (int x : demo)
        cout << x << " ";
    cout << "\n";

    return 0;
}


// vector<int> demo23; // Vector declaration
//     int n, element;

//     cout << "Enter the number of elements you want to insert in vector demo23: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; ++i) {
//         cin >> element;
//         demo23.push_back(element); // Add element to vector
//     }

//     cout << "\nElements in vector demo23 are: ";
//     for (int i = 0; i < demo23.size(); ++i) {
//         cout << demo23[i] << " ";
//     }


    // int n;
    // cout << "Enter the number of students: ";
    // cin >> n;

    // vector<Student> demo23; // Vector of Student struct

    // for (int i = 0; i < n; ++i) {
    //     Student s;
    //     cout << "\nEnter details for student " << i + 1 << ":\n";
    //     cout << "Name: ";
    //     cin >> s.name;
    //     cout << "Age: ";
    //     cin >> s.age;
    //     cout << "Marks: ";
    //     cin >> s.marks;
    //     demo23.push_back(s); // Add student to vector
    // }

    // // Display all student details
    // cout << "\n--- Student Details in demo23 ---\n";
    // for (int i = 0; i < demo23.size(); ++i) {
    //     cout << "Student " << i + 1 << ": ";
    //     cout << "Name: " << demo23[i].name << ", Age: " << demo23[i].age << ", Marks: " << demo23[i].marks << endl;
    // }


    // int n;
    // cout << "Enter the number of students: ";
    // cin >> n;

    // vector<Student> demo23(n); // Vector of class objects

    // // Input for each student
    // for (int i = 0; i < n; ++i) {
    //     cout << "\nEnter details for student " << i + 1 << ":\n";
    //     demo23[i].getData();
    // }

    // // Display all students
    // cout << "\n--- Student Details in demo23 ---\n";
    // for (int i = 0; i < n; ++i) {
    //     cout << "Student " << i + 1 << ": ";
    //     demo23[i].displayData();
    // }
