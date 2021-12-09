#include <iostream>
using namespace std;

class classe {
public :
    static int cpt;
   void compteur(){
  cout<< "Fonction utilisée "<<++cpt<<" fois"<<endl; };
};
int classe ::cpt=0;
int main(){
    classe test1 ;
    int i;
    while(i<10){
        test1.compteur();
        i++;
    }
return 0 ;
}