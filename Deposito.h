#pragma once
#include "Piazzola.h"
#include "Conteiner.h"


class Deposito
{
private:
	int num_piazzole;
	Piazzola* piazzole;

public:
	Deposito(int _num_piazzole);
	int getNumContainer(void);
	bool addContainer(Conteiner container, int piazzola);
	Conteiner getContainer(int piazzola);
	int findPiazzola(void);
	int findPiazzola(int codice_container);
};
