#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){

  fstream file("C:\\Users\\RIDDHI\\Desktop\\newfile.txt", ios_base::in | ios_base::out);

  string str;

  file >> str;

  cout << str;

  file << "I am overwriting this file";

  

}