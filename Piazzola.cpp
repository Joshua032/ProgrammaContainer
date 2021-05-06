#include "Piazzola.h"
Piazzola::Piazzola()
{
	num_container = 0;
}

int Piazzola::getNumContainer()
{
	return num_container;
}

bool Piazzola::pushContainer(Conteiner container)
{
	if (num_container >= 5)
	{
		return false;
	}
	pila[num_container] = container;
	num_container++;
	return true;
}

Conteiner Piazzola::popContainer()
{
	Conteiner container;

	if (num_container == 0)
	{
		return container;
	}
	num_container--;
	return pila[num_container];
}

bool Piazzola::isContainerPresent(int codice_container)
{
	for (int i = 0; i < num_container; i++)
	{
		if (pila[i].getCodice() == codice_container)
		{
			return true;
		}
	}
	return false;
}