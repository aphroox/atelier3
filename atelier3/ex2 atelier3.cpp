#include <iostream>
using namespace std;


class Shape //création du class shape
{
protected:
	float hauteur, largeur;
public:
	//  constructor
	Shape(float hauteur,float largeur){
		this->largeur=largeur;
		this->hauteur=hauteur;
	}
	virtual float area()=0;
	};
	class Triangle:public Shape //de sous classe triangle
	{
		public:
			Triangle(float x,float y):Shape(x,y)
			{}
    float area() // définir la fonction area pour calculer la surface
    {
    	return(largeur*hauteur)/2;
    		}
};
	class Rectangle:public Shape //de sous classe rectangle
	{
		public:
			Rectangle(float x,float y):Shape(x,y)
			{}
    float area() // définir la fonction area pour calculer la surface
    {
    	return(largeur*hauteur);
    		}
};
int main () //définir un rectangle et un triangle
{
Shape *T[2];
T[0]=new Rectangle(3,5);
T[1]=new Triangle(5.2,2);

	cout <<"la surface du Rectangle est : "<< T[0]->area() <<endl;;
	cout <<"la surface du Triangle est : "<< T[1]->area();
	}
	

    	
    
	

		
		
		
	
	
