/*
 * Lista.h
 *
 *  Created on: 14 set 2018
 *      Author: loren
 */

#ifndef LISTA_H_
#define LISTA_H_

#include <iostream>
#include <string>
#include <list>

#include "Persona.h"

class Lista{
	protected:
		std::list<Persona*> l;
	public:
		Lista();
		virtual ~Lista();
		void aggiungi(Persona *p);
		void stampa();
		void stampa(int annonascita);
		void etaMedia();
};



#endif /* LISTA_H_ */
