
#include<iostream>
using namespace std;
//création de la classe Test
class Test {
	public :
		      static int cmp;
		      void call() //définition du fonction call de la classe Test
		      {
		      	cmp++;
		      	cout << "J'ai ete appele : " << cmp << endl;
			  }
};

 int Test::cmp=0; //declaration de la classe Test de type int

int main()
{
    Test T1,T2;
	T1.call(); //afficher le premier objet de la classe Test
	T2.call(); //afficher la deuxieme objet de la classe Test
}
