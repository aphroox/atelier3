#include<iostream>
using namespace std;
class Personne{ //cr�ation de la classe Personne
	private://d�claration des variales
		string nom;
		string prenom;
		string dt;
    public:
    	Personne(string nom,string prenom,string dt)
{ 
this->nom=nom;
this->prenom=prenom;
this->dt=dt;
}
//decalaration de classe abstraite
virtual void afficher() //d�finition du fonction afficher de la classe Personne
{ 
cout<<"nom="<<nom<<"prenom="<<prenom<<"dt="<<dt;
}
};
class Employe:public Personne//cr�ation dde la classeemploye  h�rit�e de la classe Personne
{
protected:
	float salaire;//d�claration une variable
	public:
		Employe(string nom,string prenom,string dt,float salaire):Personne(nom,prenom,dt)
{
	this->salaire=salaire;
}
//decalaration de classe abstraite
virtual void afficher(){//d�finition du fonction afficher de la classe Personne
	Personne::afficher();
cout<<"salaire="<<salaire;
}
};
class Chef:public Employe//cr�ation de la classe chef  h�rit�e de la classe Employe
{
protected:
	string service;//d�claration une variable
	public:
		Chef(string nom,string prenom,string dt,float salaire,string service):Employe(nom,prenom,dt,salaire) //appeler au class employ�e
{
	this->service=service;
}
//decalaration de classe abstraite
virtual void afficher(){//d�finition du fonction afficher de la classe Chef
	Employe::afficher();
cout<<"service="<<service;
}
};
class Directeur:public Chef//cr�ation de la classe Directeur h�rit�e de la classe chef
{
protected:
	string societe;//d�claration une variable
	public:
		Directeur(string nom,string prenom,string dt,float salaire,string service,string societe):Chef(nom,prenom,dt,salaire,service)
{
	this->societe=societe;
}
//decalaration de classe abstraite
virtual void afficher(){//d�finition du fonction afficher de la classe Directeur
	Chef::afficher();
cout<<"societe="<<societe;
}
};

int main()

{
	int i;
	Personne *T[4];
	T[0]=new Personne("N1","P1","01/01/2001"); //afficher la class personne
	T[1]=new Employe("N2","P2","01/01/2001",2000);//afficher la class employe
	T[2]=new Chef("N3","P3","01/01/2001",2000,"abc");//afficher la class chef
	T[3]=new Directeur("N4","P4","01/01/2001",2000,"abc","rtg");//afficher la class directeur
	
	for (i=0;i<4;i++)
	T[i]->afficher();
	}
	
	
	


	

		


