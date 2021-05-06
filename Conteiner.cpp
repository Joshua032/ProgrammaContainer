#include "Conteiner.h"

Conteiner::Conteiner()
{
	codice = 0;
	strcpy(descrizione, "");
} 

Conteiner::Conteiner(int codice, char descrizione[])
{
	this -> codice = codice;
	strcpy(this -> descrizione, descrizione);
}

int Conteiner::getCodice() 
{ 
	return codice; 
}

char* Conteiner::getDescrizione()
{ 
	return descrizione;
}
