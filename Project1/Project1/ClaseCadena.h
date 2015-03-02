#include <windows.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>
#include <wtypes.h>
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

	Cadena(){
		longitud = 1;
		car = new char[longitud];
		car[0] = '\0';
	}

	Cadena(const char* c){
		longitud = strlen(c) + 1;
		car = new char[longitud];
		strcpy_s(car, longitud, c);
	}

	Cadena(const Cadena& cadena){
		longitud = cadena.longitud;
		car = new char[longitud];
	}

	Cadena(const char *format, ...){
		longitud = 0;
		if (format != NULL)
		{
			static char tmp[4096];
			static va_list ap;
			// Construct the string from variable arguments
			va_start(ap, format);
			int res = vsprintf_s(tmp, 4096, format, ap);
			va_end(ap);
			if (res > 0)
			{
				longitud = res + 1;
				car = new char[longitud];
				strcpy_s(car, longitud, tmp);
			}
		}
	}

	~Cadena(){ delete[]car; }

	bool operator ==(const char* _string){
		if (_string != NULL){
			return strcmp(car, _string) == 0;
		}
		return false;
	}

	bool operator !=(const char* _string){

		if (_string != NULL){

			return strcmp(car, _string) != 0;
		}
		return true;
	}

	bool operator ==(const Cadena& cadena){

		return strcmp(car, cadena.car) == 0;
	}

	bool operator !=(const Cadena& cadena){

		return strcmp(car, cadena.car) != 0;
	}

	const Cadena& operator =(const char* _string)
	{
		if (_string != NULL){

			if (strlen(_string + 1)> longitud)
			{
				delete[] car;
				Alloc(strlen(_string) + 1);
			}
			else{
				Clear();
				strcpy_s(car, longitud, _string);
			}
		}
		else{
			Clear();
		}
		return (*this);
	}

	const Cadena& operator =(const Cadena &cadena)
	{
		if (strlen(cadena.car) + 1 > longitud){
			delete[] car;
			Alloc(strlen(cadena.car) + 1);
		}
		else{
			Clear();
			strcpy_s(car, longitud, cadena.car);
		}
	}

	const Cadena& operator +=(const char* _string)
	{
		if (_string != NULL){

			if (longitud <= (strlen(_string) + strlen(car))){

				char* aux_string;
				strcpy_s(aux_string, longitud, car);
				Alloc(strlen(_string) + strlen(car) + 1);
				car = new char[strlen(_string) + strlen(car) + 1];
				strcpy_s(car, longitud, aux_string);
				strcat_s(car, longitud, _string);
				delete[] car;

			}
			else{
				strcat(car, _string);
			}return(*this);
		}
		else{
			return(*this);
		}



	}

	const Cadena& operator +=(const Cadena &cadena)
	{
		if (longitud <= (strlen(cadena.car) + strlen(car))){

			char* aux_string;
			strcpy_s(aux_string, longitud, car);
			Alloc(strlen(cadena.car) + strlen(car) + 1);
			car = new char[strlen(cadena.car) + strlen(car) + 1];
			strcpy_s(car, longitud, aux_string);
			strcat_s(car, longitud, cadena.car);
			delete[] car;



		}
		else{
			strcat(car, _string);
		}

		return(*this);
	}

	int Length(){

		return strlen(car);
	}

	char* getString(){

		return car;
	}

	int Capacity(){

		return longitud;
	}

	void Clear(){
		delete[] car;
		int longitud = 1;
		car = new char[longitud];
	}

	void Alloc(const int i){
		delete[] car;
		car = new char[i];
	}


};