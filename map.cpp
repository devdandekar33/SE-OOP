// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
using namespace std;

int main() {
    string name;
    map <string,int> statepop;
    statepop["Maha"]=400;
    statepop["Guj"]=300;
    statepop["Mizo"]=150;
    
    int choice;
    cout<<"1.To add state"<<endl<<"2.to search state population "<<endl<<"3.to display all"<<endl<<"4.to exit"<<endl;
    do{
        cin>>choice;
        switch(choice){
            case 1:{
            int popu;
            cout<<"Enter the new state name :";
            cin>>name;
            cout<<"Enter the population as a multiple of 100,000 :";
            cin>>popu;
            statepop[name]=popu;
            cout<<"State addedd successfully"<<endl;
            break;
            }
            case 2:{
            cout<<"Enter the state name :";
            cin>>name;
            if(statepop[name]>0){
                cout<<"The population of "<<name<<"is "<<statepop[name]<<"00000"<<endl; 
            }
            else{
                cout<<"the state not found "<<endl;
            }
            break;}
            case 3:{
            cout<<"Displaying the states "<<endl;
            map<string,int>::iterator it=statepop.begin();
            while(it!=statepop.end()){
                cout<<"State name :"<<it->first<<" Population :"<<it->second<<endl;
                it++;
            }
            break;
            }
            case 4:{
            cout<<"exit"<<endl;
            break;}
            default:{
            cout<<"Wrong input"<<endl; 
            break;}
        }
    }while(choice!=4);
    return 0;
}
