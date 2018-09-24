/*
 * Universitario.cpp
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "Persona.h"
#include "Universitario.h"

Universitario::Universitario(string n, string c, int an, int m, string corso) : Persona(n, c, an){
	setMatricola(m);
	setCorso(corso);
}

Universitario::Universitario(int m, string corso): Persona(){
	setMatricola(m);
	setCorso(corso);
}

Universitario::~Universitario(){
	cout<<"Oggetto deallocato"<<endl;
}

void Universitario::setMatricola(int m) {
	matricola = m;
}

void Universitario::setCorso(string c) {
	corso = c;
}

string Universitario::toString(){
	std::stringstream ss;
	ss << matricola;
	return "[Universitario: " + nome + ", " + cognome + ", " + ss.str() + ", " + corso + "]";
}


