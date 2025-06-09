 #include<iostream>
 #include<fstream>
using namespace std;  
int main() {
    ofstream outfile("demo.txt");
    ifstream infile("demo2.txt");
    //infile.open("demo2.txt");
    if(!infile.is_open()) {
        cout << "file cannot be opened";
        return 1;
    }
   // infile.open("demo2.txt");
    string str;
    int x;
    infile >> str;
    infile >> x;
    cout << str << " " << x << endl;
    if(infile.eof()) cout << "end of file";
    infile.close();
    outfile << "Hello, world!" << endl;
    outfile.close();
    return 0;
}

