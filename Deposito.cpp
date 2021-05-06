#include "Deposito.h"

Deposito::Deposito(int num_piazzole)
{
	this -> num_piazzole = num_piazzole;
	piazzole = new Piazzola[num_piazzole];
}

int Deposito::getNumContainer()
{
	int n = 0;

	for (int i=0; i<num_piazzole; i++)
	{
		n += piazzole[i].getNumContainer();
	}
	return n;
}

bool Deposito::addContainer(Conteiner container, int piazzola)
{
	if (piazzola > num_piazzole || piazzola<= 0)
	{
		return false;
	}
	return piazzole[piazzola-1].pushContainer(container);
}

Conteiner Deposito::getContainer(int piazzola)
{
	Conteiner container;
 
    if (piazzola > num_piazzole || piazzola<= 0)
	{
		return container; 
	}
    return piazzole[piazzola-1].popContainer();
}

int Deposito::findPiazzola()
{
	for (int i=0; i<num_piazzole; i++)
	{
		if (piazzole[i].getNumContainer() < 5)
		{
			return i+1;
		}
	}
	return 0; 
}

int Deposito::findPiazzola(int codice_container)
{
	for (int i=0; i<num_piazzole; i++)
	{
		if (piazzole[i].isContainerPresent(codice_container))
		{
			return i+1;
		}
	}
	return 0; 
}
