#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student{
    string name,clas,bg;
    int rollno;
    long teleno;
    public:
    student(){
        name="";
        clas="";
        bg="";
        rollno=0;
        teleno=0;
    }
    student(string name,string clas,string bg,int rollno, long teleno){
        this->name=name;
        this->clas=clas;
        this->bg=bg;
        this->rollno=rollno;
        this->teleno=teleno;
    }
    student(const student &stud1){
        name=stud1.name;
        clas=stud1.clas;
        bg=stud1.bg;
        rollno=stud1.rollno;
        teleno=stud1.teleno;
    }
    void input(){
        cout<<"Enter name:\n";
        cin>>name;
        cout<<"Class \n";
        cin>>clas;
        cout<<"Blood group \n";
        cin>>bg;
        cout<<"rollno \n";
        cin>>rollno;
        cout<<"Tele. no. :\n";
        cin>>teleno;
    }
    inline void display(){
        cout<<left<<setw(20)<<name<<setw(20)<<clas<<setw(20)<<bg<<setw(20)<<rollno<<setw(20)<<teleno<<endl;
    }
    ~student(){
        cout<<"destructor called"<<endl;
    }
    friend class Hello;
};
class Hello{
    public:
    Hello(){
        cout<<"hello mf"<<endl;
    }
    void display(student &s){
        cout<<s.name<<endl;
    }
    ~Hello(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    student s1,s2;
    s1.input();
    s2.input();
    cout<<left<<setw(20)<<"name"<<setw(20)<<"class"<<setw(20)<<"bg"<<setw(20)<<"rollno"<<setw(20)<<"teleno"<<endl;
    cout<<'*'*20<<endl;
    s1.display();
    s2.display();
    Hello *h=new Hello[3];
    delete []h;
    
    return 0;
}
