/*
 * Stagista.h
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */

#ifndef STAGISTA_H_
#define STAGISTA_H_


class Stagista : virtual public Universitario, virtual public Sviluppatore {
	protected:
		string scadenza;
	public:
		Stagista(string n, string c, int an, int annoassunzione, int ore, string azienda, int m, string corso, string scadenza);
		void setScadenza(string c);
		virtual ~Stagista();
		string toString();
};


#endif /* STAGISTA_H_ */
