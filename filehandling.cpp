#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
    {
    public:
    string name; int rno;

    public:
    void input()
    {
    cout<<endl<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll Number: ";
    cin>>rno;
    
    cout<<endl;
    }

    void display()
    {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<rno<<endl;
    }
};

int main()
{
    fstream file;
    file.open("sample.txt",ios::out);
    int n;
    cout<<"Enter Number of students: ";
    cin>>n;
    cout<<endl;
    Student s[n];
    for(int i=0;i<n;i++)
    {
    s[i].input();
    file<<"Name: "<<s[i].name<<endl<<"Roll Number: "<<s[i].rno<<endl;
    }
    file.close();
    string line;
    file.open("sample.txt",ios::in);
    do{
    file>>line;
    cout<<line<<" ";
    }
    while(!file.eof());
    cout<<"After clearing file"<<endl;
    file.open("sample.txt",std::ios::trunc);
    do{
    file>>line;
    cout<<line<<" ";
    }
    while(!file.eof());
    cout<<"Thank you"<<endl;
    return 0;
}

