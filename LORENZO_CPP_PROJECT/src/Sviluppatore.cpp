/*
 * Sviluppatore.cpp
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "Persona.h"
#include "Sviluppatore.h"

Sviluppatore::Sviluppatore(string n, string c, int an, int annoassunzione, int ore, string azienda) : Persona(n, c, an){
	setAnnoAssunzione(annoassunzione);
	setOre(ore);
	setAzienda(azienda);
}

Sviluppatore::Sviluppatore(int annoassunzione, int ore, string azienda): Persona(){
	setAnnoAssunzione(annoassunzione);
	setOre(ore);
	setAzienda(azienda);
}

Sviluppatore::~Sviluppatore(){
	cout<<"Dipendente deallocato"<<endl;
}

void Sviluppatore::setSalario(int s) {
	salario = s;
}

void Sviluppatore::setAnnoAssunzione(int m) {
	annoassunzione = m;
}

void Sviluppatore::setOre(int m) {
	ore = m;
}

void Sviluppatore::setAzienda(string c) {
	azienda = c;
}

string Sviluppatore::toString(){
	std::stringstream ss;
	ss << annoassunzione;
	string a = ss.str();
	ss.str(std::string());
	ss << annonascita;
	string b = ss.str();
	ss.str(std::string());
	ss << ore;
	return "[Sviluppatore: " + nome + ", " + cognome + ", " + b + ", " + a + "@" + ss.str() + ", " + azienda + "]";
}



