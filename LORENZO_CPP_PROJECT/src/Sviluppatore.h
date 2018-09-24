/*
 * Sviluppatore.h
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */

using namespace std;

#ifndef SVILUPPATORE_H_
#define SVILUPPATORE_H_

class Sviluppatore : virtual public Persona {
	private:
		int salario;
	protected:
		int annoassunzione;
		int ore;
		string azienda;
	public:
		Sviluppatore(string n, string c, int an, int annoassunzione, int ore, string azienda);
		Sviluppatore(int annoassunzione, int ore, string azienda);
		Sviluppatore();
		void setAnnoAssunzione(int m);
		void setOre(int m);
		void setSalario(int s);
		void setAzienda(string c);
		virtual ~Sviluppatore();
		virtual string toString();
};


#endif /* SVILUPPATORE_H_ */
