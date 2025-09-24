#include <iostream>
using namespace std;
const int minimo = 0, maximo =10;

int main(int argc, char **argv)
{
	int n;
	cout << "introduzca un numero enter"<<minimo<<"y"<<maximo<<"."<<endl;
	cin>>n;
	if (n<minimo || n>maximo)
		cout<< "el valor "<< n<< "esta fuera de rango"<< endl;
	else
		switch(n){
			case 0:
				cout<<"no existe def de primo en este caso"<< endl;
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				cout << "el numeor 7 es primo";
				break;
			default:
				cout << "El numero "<< n<< "no es primo";
				break;
			
		};
	return 0;
}
