#include <iostream>
using namespace std;
main(){
	//and (y) &&
	// or (o) //
	
	char lapiz,lapicero,cuaderno;
	cout<<"trae lapiz (s/n):";
	cin>>lapiz;
	cout<<"trae lapicero (s/n):";
	cin>>lapicero;
	cout<<"trae cuaderno (s/n):";
	cin>>cuaderno;
	
	// puede entrar a mi clase si usted trae un lapiz y un lapicero
	// and (y) = el valor es verdadero si ambas son verdaderas
	// puede entrar a mi clase si usted trae un lapiz o un lapicero
	// or (o) = el valor que es verdadero si por lo menos una es verdadero
	
	// puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
		if((lapiz=='s' || lapicero=='s') && cuaderno =='s' ){
			cout<<"Ingresa"<<endl;
		
		}else{
			cout<<"lo siento no puede ingresar"<<endl;
		}
		
    system("pause");
}