#include<iostream>
using namespace std;

class Media{
    public:
    string titre;
    virtual void imprimer(){
        cout<<"le titre est :"<<titre;
    };
    string id(string a){
    titre=a;
    return titre;
    };
};
class Livre : public Media{
    public:
    int nbr_pages;
    void imprimer(){
        Media::imprimer();
        cout<<"le nombre de pages est :"<<nbr_pages;
    }
};
class Audio : public Media{
    public:
    int duree;
    Audio(int a){
        duree=a;
    };
    void imprimer(){
        Media::imprimer();
        cout<<"la duree est :"<<duree;
    }
};
class CD : public Audio{
    public:
    int duree;
    int date;
    void imprimer(){
        Audio::imprimer();
        cout<<"la duree est :"<<duree;
        cout<<"la date est :"<<date;

    }
};
class Casette : public Audio{
    public:
    int duree;
    void imprimer(){
        Audio::imprimer();
        cout<<"la duree est :"<<duree;
    }
};
class Disque : public Audio{
    public:
    string titre;
    void imprimer(){
        Audio::imprimer();
        cout<<"la duree est :"<<duree;
    }
};
class Presse : public Media{
    public:
    string type;
    void imprimer(){
        Media::imprimer();
        cout<<"le type est :"<<type;
    }
};
class Magazine : public Presse{
    public:
    int Nbr_Pages;
    void imprimer(){
        Presse::imprimer();
        cout<<"le nombre de pages est :"<<Nbr_Pages;
    }
};
class Journal : public Presse{
    public:
    int Nbr_Pages;
    void imprimer(){
        Presse::imprimer();
        cout<<"le nombre de pages est :"<<Nbr_Pages;
    }
};
class Revue : public Presse{
    public:
    string titre;
    int Nbr_Pages;
    void imprimer(){
        Presse::imprimer();
        cout<<"le nombre de pages est :"<<Nbr_Pages;
    }
};
