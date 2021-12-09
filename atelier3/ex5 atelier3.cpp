#include <iostream>
using namespace std;
class Animal{ //création de la classe Animal
protected: //création des varibales
    string name;
	int age;
	public:
	Animal(string name,int age){
		this->name=name;
		this->age=age;
}
  void set_value(int age){ //définition  du fonction set_value de la classe Animal
  this->age=age;
  }
  void afficher(){ //définition du fonction afficher de la classe Animal
  cout<<"je suis un animale,nom="<<name<<"et j'ai:"<<age;
  }
  };
  class Zebra : public Animal{ // création de la classe Zebra,héritée de la classe Animal
  	private:
  		string origine; // céation du variable
  		public:
  			Zebra(int age,string name,string origine):Animal(name,age){
  			this->origine=origine;
}
void afficher(){//définition du fonction afficher de la classe Zebra
	Animal::afficher();
    cout<<"race:Zebra"<<"Mon origine"<<origine<<endl;
     }
  };
    class Dolphin : public Animal{ // création de la classe Dolphin,héritée de la classe Animal
  	private:
  		string origine;// céation du variable
  		public:
  			Dolphin(int age,string name,string origine):Animal(name,age){
  			this->origine=origine;
}
void afficher(){
	Animal::afficher();//définition du fonction afficher de la classe Dolphine
    cout<<"race:dolphin"<<"Mon origine"<<origine<<endl;}
  };
  int main(){
  	Zebra Z(20,"N1","Afrique");
  	Z.afficher() ;//appeler la fonction afficher de la classe zebra
  	Z.set_value(13) ;//appeler la fonction afficher de la classe animal
  	Z.afficher() ;//appeler la fonction afficher de la classe dolphine
  	}
  	
   
  
    
	
  				
  			
  
  
	
	
	
	

