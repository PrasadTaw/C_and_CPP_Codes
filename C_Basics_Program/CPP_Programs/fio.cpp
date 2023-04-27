//Program to read and write into a file
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Student{
    int sid;
    string sname;

    public:
    
    void displayStudent(){
        cout<<"ID: "<<sid<<endl;
        cout<<"Name: "<<sname<<endl;
    }

    void acceptDetails(){
        cout<<"Enter Student id and name"<<endl;
        cin >> sid >> sname;
    }

};

int main(){
    
    Student s;

    fstream file;
    string str;
    file.open("C:\\Users\\RIDDHI\\Desktop\\pat2.txt", ios_base::out | ios::in);
    //file << "Tring something new"<<endl;
    file >> str;
    cout << str;
    file << "Overwriting after cout"<< endl;
    file.close();

}