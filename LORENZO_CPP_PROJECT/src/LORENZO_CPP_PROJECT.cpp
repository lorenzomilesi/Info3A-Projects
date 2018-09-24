//============================================================================
// Name        : LORENZO_CPP_PROJECT.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>

#include "Persona.h"
#include "Universitario.h"
#include "Sviluppatore.h"
#include "Stagista.h"
#include "Lista.h"

int main() {

	Lista *l = new Lista();

	l->aggiungi( new Persona( "Lorenzo", "Milesi", 1994 ) );
	l->aggiungi( new Persona( "Mario", "Rossi", 1995 ) );

	l->aggiungi( new Universitario( "Alberto", "Bianchi", 1994, 1030232, "Informatica" ) );
	l->aggiungi( new Universitario( "Mario", "Rossi", 1995, 1030333, "Informatica" ) );

	l->aggiungi( new Sviluppatore( "Giuseppe", "Verdi", 1975, 2016, 27, "Madbit Entertainment" ) );
	l->aggiungi( new Sviluppatore( "Matteo", "Milesi", 1992, 2013, 30, "Madbit Entertainment" ) );

	l->aggiungi( new Persona( "Luca", "Neri", 1995 ) );

	l->aggiungi( new Stagista( "Lorenzo", "Milesi", 1994, 2018, 20, "Madbit Entertainment", 1030232, "Informatica", "ottobre 2019"  ) );

	cout << "# STAMPA generica #" << endl;
	l->stampa();

	cout << "# STAMPA 1994 #" << endl;
	l->stampa(1994);

	cout << "# ETA' MEDIA TEMPLATE GENERICO #" << endl;
	l->etaMedia();

	return 0;
}
