/*
 * Persona.h
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */

#ifndef PERSONA_H_
#define PERSONA_H_

using namespace std;

class Persona{
	protected:
		int annonascita;
		string nome;
		string cognome;
	public:
		Persona(string n, string c, int an);
		Persona();
		void setNome(string n);
		void setCognome(string n);
		void setNascita(int n);
		int getNascita();
		virtual ~Persona();
		virtual string toString();

};


#endif /* PERSONA_H_ */
