#pragma once
#include <cstdio>
#include <cstring>


class Conteiner
{
	private:
		int codice;
		char descrizione[100];
	
	public:
		 Conteiner(void);
		 Conteiner(int codice, char descrizione[]);
		 int getCodice(void); 
		 char* getDescrizione(void);
};

