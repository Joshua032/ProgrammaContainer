#include "Conteiner.h"

Conteiner::Conteiner()
{
	codice = 0;
	strcpy_s(descrizione, "");
}

Conteiner::Conteiner(int codice, char descrizione[])
{
	this->codice = codice;
	strcpy_s(this->descrizione, descrizione);
}

int Conteiner::getCodice()
{
	return codice;
}

char* Conteiner::getDescrizione()
{
	return descrizione;
}
