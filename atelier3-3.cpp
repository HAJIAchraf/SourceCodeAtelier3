#include<iostream>
#include<cmath>
using namespace std;

class complexe {
public :
    float real;
    float img;
    complexe(){
        real=0;img=0;
    };
    complexe(float a,float b){
        real=a;img=b;
    };
};

void equality(complexe a,complexe b){
    if(a.real==b.real && a.img==b.img)
    cout<<"les nombres sont egaux";
    else cout<<"les nombres sont differents";
}
int main(){
   float a,b,c,d;
   cout<<"donner la parties reel premier nombre \n ";
   cin >>a;
   cout<<"donner la parties imaginaire du premier nombre \n ";
   cin >>b;
   cout<<"donner la parties reel du deuxieme nombre \n ";
   cin >>c;
   cout<<"donner la parties imaginaire du deuxieme nombre \n ";
   cin >>d;
   complexe c1(a,b),c2(c,d),c3;
   cout<<"egalité : ";
   equality(c1,c2);
   cout<<endl;
   cout<<"Addition : ";
   c3.real = c1.real + c1.real;
   c3.img = c2.img + c2.img;
   cout<<c3.real<<"+ i"<<c3.img;
   cout<<endl;
   cout<<"Multiplication : ";
   c3.real = c1.real*c2.real-c2.img*c1.img;
   c3.img = c1.real*c2.img+c1.img*c2.real;
   cout<<c3.real<<"+ i"<<c3.img;
}