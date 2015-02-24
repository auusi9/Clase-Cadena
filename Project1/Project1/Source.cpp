#include <windows.h>
#include <stdio.h>
#include <assert.h>
//clase cadena
//tiene que tener caracter i longitud
//mai surt de rang
//constructors string();ng(const char*); String(const String&); 
class Cadena
{
private:
	int longitud;
	char* caracter;
public:
	Cadena(){ longitud = 1; 
	caracter = new char[longitud]; 
	caracter[0] = '\0'; };
	Cadena(const char* c ){ 
		longitud = strlen(c) + 1;
		caracter = new char[longitud];
		strcpy(caracter,longitud,c);

	};
	Cadena(const longitud&){  };
	~Cadena();
	int len()const{	
		return string 
	}


};

Cadena::Cadena()
{
}

Cadena::~Cadena()
{
}