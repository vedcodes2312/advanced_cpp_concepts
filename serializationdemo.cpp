//serialization
#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
    public:
    string name;
    int roll;
    string branch;
    // Serialize function
    void writeToFile(ofstream& ofs) const {
        ofs << name << endl;
        ofs << roll << endl;
        ofs << branch << endl;
     // deseralize function  
    // void readFromFile(ifstream& ifs) {
    //     getline(ifs, name);
    //     ifs >> roll;
    //     ifs.ignore(); // consume newline after roll
    //     getline(ifs, branch);
    // }
    // void display() const {
    //     cout << "Name: " << name << endl;
    //     cout << "Roll: " << roll << endl;
    //     cout << "Branch: " << branch << endl;
    // }
    }
};

int main() {
    Student s1;
    s1.name = "Rahul"; s1.roll=10; s1.branch="CSE";
    ofstream ofs("Student.txt",ios::trunc);
    if(!ofs) {
        cerr << "Error opening file for writing.\n";
        return 1;
    }
    s1.writeToFile(ofs);
     ofs << s1.name << endl;
    ofs << s1.roll << endl;
    ofs << s1.branch << endl;
    ofs.close();

    // Student s2;
    // ifstream ifs("Student.txt");
    // if (!ifs) {
    //     cerr << "Error opening file for reading.\n";
    //     return 1;
    // }
    // s2.readFromFile(ifs);
    // ifs.close();

     // Display read values
    // cout << "Deserialized student info:\n";
    // s2.display();

    return 0;
}