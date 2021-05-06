#include <cstring>
#include <cstdio>
#include <iostream>
#include "Deposito.h"
#include "Piazzola.h"
#include "Conteiner.h"
using namespace std;

int main(void)
{
	int piazzola, numero = 0;
	Deposito dep = Deposito(100);
	Conteiner container;
	char desc[100];

	int codice;

	cout << "\tPROGRAMMA PER LA GESTIONE DI UN DEPOSITO DI CONTAINER" << endl;
	
	do
    {
        do
        {
			
			cout << "1) Aggiungi un container;" << endl;
			cout << "2) Ricerca una piazzola vuota per impilare un container;" << endl;
			cout << "3) Preleva un container;" << endl;
			cout << "4) Ricerca del contenuto di un container tramite il suo codice univoco;" << endl;
			cout << "5) Esci dal programma;" << endl;
			cout << "SCEGLI UNA OPERAZIONE DA SVOLGERE" << endl;
			cin >> numero;

        }while(numero <1 || numero>5);
        switch(numero)
        {
            case 1:
                {
                    cout << "Inserisci il codice del container" << endl;
					cin >> codice;
					cout << "Inserisci la descrizione del container" << endl;
					cin >> desc;
					
					container = Conteiner(codice, desc);
					do
					{
						cout << "Inserisci la piazzola in cui va impilato il container(il numero della piazzola deve essere un numero compreso tra 0 e 100)" << endl;
						cin >> piazzola;

						if(piazzola < 0 || piazzola > 100)
							cout << "Numero non valido" << endl;

					}while(piazzola < 0 || piazzola > 100);
					
					dep.addContainer(container, piazzola);
                    
					cout << "Il container e' stato inserito" << endl;

					break;
                }

            case 2:
                {
                    piazzola = dep.findPiazzola();

					if (piazzola>0)
					{
						cout << "La piazzola n "<< piazzola <<" puo\' contenere il container" << endl;
					}
                    break;
                }

            case 3:
                {
					do
					{
						cout << "Inserisci la piazzola in cui vai a prelevare il container(ci sono max 100 piazzole)" << endl;
						cin >> piazzola;

						if(piazzola < 0 || piazzola > 100)
						{
							cout << "Dato scorretto, reinseriscilo" << endl;
						}
					}while(piazzola < 0 || piazzola > 100);

					dep.getContainer(piazzola);

					cout << "Il container e\' stato prelevato" << endl;

                    break;
                }

            case 4:
                {
                    cout << "Inserisci il codice del container" << endl;
					cin >> codice;
					piazzola = dep.findPiazzola(codice);

					if (piazzola > 0)
					{
						container = dep.getContainer(piazzola);
						cout << "La descrizione del container e\': "<< container.getDescrizione() << endl;
					}
					else
					{
						cout << "Il container non e\' presente" << endl;
					}
                    break;
                }
            case 5:
                {
                    return 0;
                    break;
                }
        }
    }while(numero != 5);
}

