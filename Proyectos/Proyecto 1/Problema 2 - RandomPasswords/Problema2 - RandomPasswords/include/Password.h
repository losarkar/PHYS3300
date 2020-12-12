#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
class Password
{
public:
	//Variable que mantiene el programa corriendo en loop.
	bool RunProgram = true;

	//Miembros que definiran los requisitos de la contrase�a.
	const int MinPassLenght = 8; //Tama�o minimo de la contrase�a.
	const int RequiredNums = 1; //Cantidad de digitos del 0 al 9 requeridos en la contrase�a.
	const int RequiredSpecialChar = 1; //Cantidad de caracteres especiales requeridos en la contrase�a.
	const int RequiredCapitalChar = 1; //Cantidad de mayusculas requeridas en la contrase�a.

	//Funciones prototipos publicas.
	Password(); //Constuctor
	void requestPass(); //Funcion que pide al usuario una contrase�a.
	string generatePass(); //Funcion que genera una contrase�a basada en los requisitos.

private:
	//Miembros privados que contienen todos los digitos posibles dentro de una contrase�a.
	const string Chars = "abcdefghijklmnopqrstuvwxyz"; //Caracteres minusculas.
	const string CapitalChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //Caracteres mayusculas.
	const string Nums = "0123456789"; //Caracteres numericos.
	const string SpecialChar = "!$&?*/\\"; //Caracteres especiales.

	void addDigit(string& password, string availableDigits); //Funcion que permite a�adir caracteres desde una cadena de string a la contrase�a generada.

	bool verifyPass(const string& password); //Funcion que permite validar una contrase�a con los requisitos propuestos.

	//Funciones privadas para criterios de contrase�as
	bool countCharacters(const string &password); //Cuenta los caracteres.
	bool checkForNums(const string& password); //Verifica que existan numeros en la contrase�a.
	bool checkforSpecialChar(const string& password); //Verifica que existan caracteres especiales en la contrase�a.
	bool checkCapital(const string& password); //Verifica que existan mayusculas en la contrase�a.
	bool checkCharRepeat(const string& password); //Verifica si existen repeticiones seguidas de caracteres.
};

