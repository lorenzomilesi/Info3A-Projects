/*
 * Stagista.cpp
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
#include "Sviluppatore.h"
#include "Stagista.h"


Stagista::Stagista(string n, string c, int an, int annoassunzione, int ore, string azienda, int m, string corso, string scadenza) : Persona(n, c, an), Universitario(n, c, an, m, corso), Sviluppatore(n, c, an, annoassunzione, ore, azienda)  {
	setScadenza(scadenza);
}

Stagista::~Stagista(){
	cout<<"Stagista distrutto"<<endl;
}

void Stagista::setScadenza(string m) {
	scadenza = m;
}

string Stagista::toString(){
	std::stringstream ss;
	ss << annoassunzione;
	string a = ss.str();
	ss.str(std::string());
	ss << annonascita;
	string b = ss.str();
	ss.str(std::string());
	ss << ore;
	return "[Stagista: " + nome + ", " + cognome + ", " + b + ", " + a + "@" + ss.str() + ", " + azienda + ", SCADE: " + scadenza + "]";
}



