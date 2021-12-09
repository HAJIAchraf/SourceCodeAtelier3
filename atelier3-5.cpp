#include<iostream>
using namespace std;

class Animal{
    public:
    string Nom;
    int Age;
    void set_value(){
        Nom="animal";Age=0;
    };
};
class Zebre : public Animal{
    public:
    string lieu_origine;
    Zebre(){lieu_origine="Ghana\n";};
    void Display(){
        cout<<"Mon nom est :\n"<<Nom<<endl;
        cout<<"Mon Age est :\n"<<Age<<endl;
        cout<<"Je provient de :\n"<<lieu_origine<<endl;
    }
};
class Dolphin : public Animal{
    public:
    string lieu_origine;
    Dolphin(){lieu_origine="Australia\n";};
    void Display(){
        cout<<"Mon nom est :\n"<<Nom<<endl;
        cout<<"Mon Age est :\n"<<Age<<endl;
        cout<<"Je provient de :\n"<<lieu_origine<<endl;
    }
};
int main(){
    Zebre Zebra;
    Dolphin Dauphin;
    Dauphin.set_value();
    Zebra.set_value();
    Zebra.Display();
    Dauphin.Display();
}