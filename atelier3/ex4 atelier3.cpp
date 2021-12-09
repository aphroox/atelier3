#include <iostream>
using namespace std;

class mother{ //creation de la classe mother
public:
	void display () //définition du fonction display de la class mother
	{
		cout << "the function display of the class Mother invoked"<<endl;
	}
};

class daughter : public mother{ //creation de la classe daughter,héritée de la classe mother
public:
	void display () //définition du fonction display de la class daughter
	{
			cout << "the function display of the class Daughter invoked"<<endl;
	}
};

int main ()
{
	daughter obj; // création d'un objet de la classe daughter
	obj.display(); //appeler la fonction display de la classe daughter
	
}
