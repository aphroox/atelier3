#include<iostream>
#include<cmath>
using  namespace std;
//création de la classe Vecteur 3d
class Vecteur3D {
	private :
		      float x,y,z; //declaration des variables
	public :
		    Vecteur3D(float x=0,float y=0,float z=0)
		    {
		    	this->x=x;
		    	this->y=y;
		    	this->z=z;
			}
		    Vecteur3D somme(Vecteur3D V)
		     {
		     	Vecteur3D  S;
		     		S.x=this->x+V.x;
		     		S.y=this->y+V.y;
		     		S.z=this->z+V.z;
		    
		        return S;
			 }
			 
			 float  produit(Vecteur3D  V)
			    {
			    	float P;
			    		P=this->x*V.x + this->y*V.y + this->z*V.z;
			    	return P;
				}
			bool  coincide(Vecteur3D  V)
			  {
			  	return  ( this->x==V.x &&  this->y==V.y  && this->z==V.z);
			  }
			void   afficher()
			{
				cout <<"("<<x<<","<<y<<","<<z<<")" << endl;
			}
			float norme()
			{
				return sqrt(x*x+y*y+z*z);
			}
			// Passage par valeur
	        Vecteur3D  normax(Vecteur3D V)
	        {
	        	if(this->norme() > V.norme())
	        	   return *this;
	        	else 
	        	     return V;
			}
			// Passage par adresse 
	        Vecteur3D*  normax(Vecteur3D *V)
	        {
	        	if(this->norme() > V->norme())
	        	   return this;
	        	else 
	        	     return V;
			}
			// Passage par reference 
	        Vecteur3D&  normax1(Vecteur3D &V)
	        {
	        	if(this->norme() > V.norme())
	        	   return *this;
	        	else 
	        	     return V;
			}
	           };
int main()
{
Vecteur3D V1(3,2,4),V2(5,10),V3,*V4;
	V1.afficher();
	V2.afficher();
	V3.afficher();
	cout << " La norme de V1 est : "<<V1.norme()<<endl;
	V3=V1.somme(V2);
	cout << "La somme de V1 et V2 est : ";
	V3.afficher();
	cout << "le produit de V1 et V2 est : "<<V1.produit(V2)<<endl;

cout<<"le vecteur qui a la plus grande norme entre V1 et V2 est : " ;// Appel au fonction normax passage par valeur
	V3=V1.normax(V2);
	V3.afficher();

cout<<"le vecteur qui a la plus grande norme entre V1 et V2 est : " ;// Appel au fonction normax passage par adresse
	V4=V1.normax(&V2);
	V4->afficher();
cout<<"le vecteur qui a la plus grande norme entre V1 et V2 est : " ;// Appel au fonction normax passage par adresse
	V3=V1.normax1(V2);
	V3.afficher();
	
	
}
