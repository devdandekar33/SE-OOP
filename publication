#include<iostream>
#include<string>
using namespace std;
class publication{
    public:
    string title;
    float price;
    publication(){
        title=" ";
        price=0;
    }
    void setdata(){
        cout<<"Enter the name of publication "<<endl;
        cin>>title;
        try{
            cout<<"Enter the price of item \n";
            cin>>price;
            if(price<0){
                throw price;
            }
        }
        catch(float p){
            cout<<"An exception occured so setting all values to default \n";
            price=0.0;
            title=" ";
        }
    }
    ~publication(){
    }
};
class book:public publication{
    int pgcount;
    public:
    book(){
        pgcount=0;
    }
    void bookdata(){
        setdata();
        cout<<"Enter the pages in books: "<<endl;
        try{
            cin>>pgcount;
            if(pgcount<=0){
                throw pgcount;
            }
        }
        catch(int p){
            pgcount=0;
            title="";
            price=0.0;
        }
    }
    void display(){
        cout<<"Title "<<title<<"\nprice "<<price<<"\npg count "<<pgcount<<endl;
    }
};
class tape:public publication{
    float time;
    public:
    tape(){
        time=0.0;
    }
    void tapedata(){
        setdata();
        cout<<"Enter the time played :"<<endl;
        try{
            cin>>time;
            if(time<=0){
                throw time;
            }
        }
        catch(float p){
            time=0;
            title="";
            price=0.0;
        }
    }
    void display(){
        cout<<"Title "<<title<<"\nprice "<<price<<"\ntime "<<time<<endl;
    }
};

int main(){
    book b1;
    tape t1;
    b1.bookdata();
    t1.tapedata();
    b1.display();
    t1.display();
    return 0;
}
