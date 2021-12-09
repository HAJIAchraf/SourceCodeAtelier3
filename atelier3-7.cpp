#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d {
public :    
    float x;
    float y;
    float z;
    vecteur3d(){
        x=0;y=0;z=0;
    };
    vecteur3d(float a,float b,float c){
        x=a;y=b;z=c;
    }
    void display(){
        cout<<"("<<x<<","<<y<<","<<z<<") ";
    };
};
vecteur3d somme(vecteur3d u,vecteur3d v){
    vecteur3d w;
    w.x=u.x+v.x;
    w.y=u.y+v.y;
    w.z=u.z+v.z;
    return w;
};
float scalaire(vecteur3d u,vecteur3d v){
    float s;
    s=(u.x*v.x)+(u.y*v.y)+(u.z*v.z);
    return s;
};
void coincide(vecteur3d u,vecteur3d v){
    if (u.x==v.x && u.y==v.y && u.z==v.z)
        cout<<"les vect ont meme composantes \n";
        else cout<<"les vect sont differentes \n";
};
float norme(vecteur3d u){
    float n;
    n=sqrt(u.x*u.x+u.y*u.y+u.z*u.z);
    return n;
};
vecteur3d norm_max(vecteur3d u,vecteur3d v){
    if (norme(u)>norme(v))
        return u;
    else return v;
}
int main(){
    cout<<"Bienvenu "<<endl;
    cout<<"saisir les composants de votre 1ier vecteur"<<endl;
    float a,b,c,d,e,f,s;char select;
    cin>>a>>b>>c;
    cout<<"saisir les composants de votre 2eme vecteur"<<endl;
    cin>>d>>e>>f;
    vecteur3d u(a,b,c),v(d,e,f),y;
    int *y;
    while(select != 'X'){
        cout<<endl;
    cout<<"**********************************************************************************"<<endl;
    cout<<"*    Afficher les composants des vecteurs.........................Appyuez sur A  *"<<endl;
    cout<<"*    Calcul de la Somme des vecteurs saisis.......................Appyuez sur B  *"<<endl;
    cout<<"*    Calcul du produit scalaire des vecteurs saisis :.............Appyuez sur C  *"<<endl;
    cout<<"*    Comparaison des composants des vecteurs saisis :.............Appyuez sur D  *"<<endl;
    cout<<"*    Calcul de la norme des vecteurs saisis :.....................Appyuez sur E  *"<<endl;
    cout<<"*    Sortir.......................................................Appyuez sur X  *"<<endl;
    cout<<"**********************************************************************************"<<endl;
    cin>>select;
    switch (select)
    {
    case 'A':
        cout << string(50, '\n');
        u.display();
        v.display();
        break;
    case 'B':
        cout << string(50, '\n');
        y=somme(u,v);
        y.display();
        break;
    case 'C':
        cout << string(50, '\n');
        s=scalaire(u,v);
        cout<<s;
        break;
    case 'D':
        cout << string(50, '\n');
        coincide(u,v);
        break;
    case 'E':
        cout << string(50, '\n');
        cout<<"La norme Maximale est :"<<norme(u)<<endl;
        cout << "Le vecteur qui a la plus grande norme est : (Valeur))"<<endl;;
        norm_max(u,v).display();
        cout<<endl;
        cout << "Le vecteur qui a la plus grande norme est : (Reference)"<<endl;
        norm_max(u,v)=y;
        cout<<&y;
        cout<<endl;
        break;
    default :
        break;
    }
    }
}