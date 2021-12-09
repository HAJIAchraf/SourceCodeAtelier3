#include<iostream>
using namespace std;

class Personne{
    private:
    string Nom;
    int Age;
    string DateNaissance;
    public:
    Personne(){Nom="Nom";Age=0;DateNaissance="01/01/2021";};
    Personne(string a,int b,string c){
        Nom=a;Age=b;DateNaissance=c;
    };
    void Afficher(){
        cout<<"Nom : "<<Nom<<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Date de Naissance : "<<DateNaissance<<endl; 
    };
    friend class Employe;
    friend class Chef;
    friend class Directeur;

};
class Employe : public Personne{
    public:
    float Salaire;
    string Propriete;
    Employe(){Salaire=0;};
    void  Afficher(){
        cout<<"Nom : "<<Nom<<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Date de Naissance : "<<DateNaissance<<endl; 
        cout<<"Salaire : "<<Salaire<<endl;
    };
};
class Chef : public Employe{
    public:
    string Service;
    Chef(){Service="service";};
    void  Afficher(){
        cout<<"Nom : "<<Nom<<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Date de Naissance : "<<DateNaissance<<endl; 
        cout<<"Salaire : "<<Salaire<<endl;
        cout<<"Service : "<<Service<<endl;
    };
};
class Directeur : public Chef{
    public:
    string Societe;
    Directeur(){Societe="societe";};
    void  Afficher(){
        cout<<"Nom : "<<Nom<<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Date de Naissance : "<<DateNaissance<<endl; 
        cout<<"Salaire : "<<Salaire<<endl;
        cout<<"Service : "<<Service<<endl;
        cout<<"Societe : "<<Societe<<endl;
    };
};
int main(){
    Directeur Achraf;
    Achraf.Afficher();
}