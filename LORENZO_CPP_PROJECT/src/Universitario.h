/*
 * Universitario.h
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */

using namespace std;

#ifndef UNIVERSITARIO_H_
#define UNIVERSITARIO_H_

class Universitario : virtual public Persona {
	protected:
		int matricola;
		string corso;
	public:
		Universitario(string n, string c, int an, int m, string corso);
		Universitario(int m, string corso);
		Universitario();
		void setMatricola(int m);
		void setCorso(string c);
		virtual ~Universitario();
		string toString();
};

#endif /* UNIVERSITARIO_H_ */
