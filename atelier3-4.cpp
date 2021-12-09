#include<iostream>
using namespace std;

class Mere{
    public:
    void Display(){
        cout<<"c'est la mere";
    };
};
class Fils : public Mere {
    public:
    void Display(){
        cout<<"c'est le fils";
    };
};
int main(){
    Mere maman;
    Fils fils;
    fils.Display();
}