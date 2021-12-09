#include<iostream>
using namespace std;

class MyClass{
    public:
    string a;
    MyClass(){
        a=" ";
    };
    MyClass(string a1);
    ~MyClass();
    void Display(){cout<<a<<endl;};
};

MyClass ::  MyClass(string a1){
        a=a1;};
MyClass :: ~MyClass() {
        cout<<"programme executé"<<endl;;
    };

int main(){
    string txt;
    cout<<"Donnez votre texte "<<endl;
    cin>>txt;
    MyClass Bonjour(txt);
    Bonjour.Display();
}
