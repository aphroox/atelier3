#include<iostream>
using namespace std;
	class Myclass{ //cr�ation de la classe Myclass
	public: //mettre le constructeur et le destructeur
		Myclass();
	   ~Myclass();
	};
	Myclass::Myclass() //d�finition du constructeur
	{
		cout<<"je suis le constructeur"<<endl;
}
	Myclass:: ~Myclass() //d�finition du destructeur
	{
		cout<<"je suis le destructeur"<<endl;
}
int main()
{
	Myclass H; // creation de l'objet a de la classe Myclass

	}
	


		
	
	
	 
	
