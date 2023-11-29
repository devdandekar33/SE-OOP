#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
public:
string name, int rollno ;
void input() {
  cout<<"Enter the name" <<endl;
  cin>>name;
  cout<<"Enter the rollno. "<<endl;
  cin>>rollno;
  cout<<endl;
}
void display()
{
cout<<"Name is :"<<name<<endl;
cout<<"Roll no. is :"<<rollno<<endl;
}
};
int main()
{
  fstream file;
  file.open("sample.txt",ios::out);
  int n;
  cout<<"Enter the number of students :";
  cin>>n;
  cout<<endl;
  students S[n];
  for(int i=1;i<=n;i++)
{
S[i].input;
file<<"Name"<<S[i].name<<endl<<endl<<"Roll no. "<<S[i].rollno<<endl;
}
file.close();
string line;
file.open("sample.txt");
while(!file.eof){
file>>line;
cout<<line;
}
return 0;
}




  
