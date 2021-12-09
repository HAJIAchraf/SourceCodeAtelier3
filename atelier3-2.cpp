#include<iostream>
using  namespace std;

class Shape{
public:
    float largeur;
    float longueur;
    Shape(){
        longueur=0;largeur=0;
    };
    Shape(float a,float b){
        largeur = a;
        longueur = b;
    };
};
class Triangle : public Shape{
    public:
    float area(){
        float s=(largeur*longueur)/2;
        return s;
    };
    Triangle(float a,float b){
        largeur = a;
        longueur = b;
    };
};
class Rectangle : public Shape{
    public:
    float area(){
        float s=longueur * largeur;
        return s;
    };
    Rectangle(float a,float b){
        largeur = a;
        longueur = b;
    };
};
int main(){
    Triangle ABC(10,20);
    Rectangle ABCD(2,3);
    cout<<"la surface du triangle est :"<<ABC.area()<<"\n";
    cout<<"la surface du rectangle est :"<<ABCD.area()<<"\n";
}