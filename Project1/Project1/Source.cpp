#include <windows.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
//clase cadena
//tiene que tener caracter i longitud
//mai surt de rang
//constructors string();ng(const char*); String(const String&); 
class Cadena
{
private:
	int longitud;
	char* car;
public:
	Cadena(){ longitud = 1; 
	car = new char[longitud]; 
	car[0] = '0'; };
	Cadena(const char* c ){ 
		longitud = strlen(c) + 1;
		car = new char[longitud];
		strcpy_s(car,longitud,c);

	};
	Cadena(const Cadena& cadena ){ 
		longitud = cadena.longitud;
		car = new char[longitud];
	};
	~Cadena();
	int len()const{	
		return strlen(car);
	}
	bool operator ==(const char* _string){
		if (_string != NULL)
			return strcmp(car, _string);
	}

	bool operator ==(const Cadena& cadena){
		return strcmp(car, cadena.string);
	}



};

