#pragma once
#include "Conteiner.h"

class Piazzola
{
	private:
		int num_container;
		Conteiner pila[5];

	public:
		Piazzola(void);
		int getNumContainer(void);
		bool pushContainer(Conteiner container);
		Conteiner popContainer(void);
		bool isContainerPresent(int codice_container);
};
