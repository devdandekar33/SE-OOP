#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class item{
    public:
    string name;
    int quant;
    int itemcode;
    bool operator==(const item& obj){
        if(itemcode==obj.itemcode){
            return 1;
        }
        else{
            return 0;
        }
    }
    void print(item& obj1);
    void display();
    void insert();
};
int compare(item& obj1, item& obj2){
    return obj1.quant< obj2.quant;
}
void item::insert(){
    cout<<"Name :";
    cin>>name;
    cout<<"\nQuant :";
    cin>>quant;
    cout<<"\nItem code :";
    cin>>itemcode;
}
void print(item& obj){
    cout<<"Name :"<<obj.name<<" Quantity :"<<obj.quant<<" Item code :"<<obj.itemcode<<endl;
}
int main(){
    vector<item>::iterator it;
    vector<item> Ob;
    item obj;
    //insert
    obj.insert();
    Ob.push_back(obj);
    obj.insert();
    Ob.push_back(obj);
    //display
    for_each(Ob.begin(),Ob.end(),print);
    //search
    cout<<"Enter the item code to be searched :";
    cin>>obj.itemcode;
    it=find(Ob.begin(),Ob.end(),obj);
    if(it==Ob.end()){
        cout<<"Not found "<<endl;
    }
    else{
        cout<<it->name<<endl;
        cout<<it->itemcode<<endl;
        cout<<it->quant<<endl;
    }
    //sorting
    cout<<endl;
    cout<<"sorted"<<endl;
    sort(Ob.begin(),Ob.end(),compare);
    for_each(Ob.begin(),Ob.end(),print);
    cout<<endl;
    return 0;
}
