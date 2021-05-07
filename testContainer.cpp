#include "pch.h"
#include "Piazzola.h"
#include "Deposito.h"
#include "Conteiner.h"

#include "gtest/gtest.h"

class test : public testing::Test
{
	public:
		Container *c;
		
	virtual void SetUp(void)
	{
		c = new Container();
		
	}
	
	virtual void TearDown(void)
	{
		delete c;	
	}		
};

TEST(Conteiner, costruttoresenzaparametro)
{
	Conteiner c;

	ASSERT_TRUE(c.getCodice == 0);
	ASSERT_TRUE(c.getDescrizione == 'a');
}

TEST(Conteiner, costruttoreconparametro)
{
	c = new Conteiner(10, 'b');
	ASSERT_TRUE(codice == 10);
	ASSERT_TRUE(descrizione == 'b');
}

TEST(Conteiner, metodoConteiner_senza_parametri)
{
	int codice = 0;
	char descrizione = 'a';

	ASSERT_TRUE(codice == 0);
	ASSERT_TRUE(descrizione == 'a');
}

TEST(Conteiner, metodoConteiner_con_parametri)
{
	int codice = 10;
	char descrizione = 'c';

	ASSERT_FALSE(codice == 0);
	ASSERT_FALSE(descrizione == 'a');
}

TEST(Conteiner, metodo_getCodice)
{
	Conteiner c;
	ASSERT_TRUE(c.getCodice() == 0);
}

TEST(Conteiner, metodo_getDescrizione)
{
	Conteiner c;
	ASSERT_FALSE(c.getDescrizione() == "A");
}
//Test costruttore della classe Piazzola
TEST(Piazzola, costruttore_piazzola) 
{
  Piazzola p;
  ASSERT_TRUE(p.getNumContainer() == 0);

  ASSERT_FALSE(p.getNumContainer() == 10);
}

//Test della funzione PushContainer della classe Piazzola
TEST(Piazzola, push_container)
{
    Piazzola p1;
    ASSERT_LE(p1.getNumContainer(), 5);
}

//Test della funzione PushContainer della classe Piazzola
TEST(Piazzola, pop_container)
{
    Piazzola p1;
    ASSERT_FALSE(p1.getNumContainer() != 0);
}

//Test della classe Piazzola che controlla se il container è presente
TEST(Piazzola, test_controllo_se_container_e_presente)
{
    Piazzola p1;
    int codice_container = 0;
    ASSERT_EQ(codice_container, p1.getNumContainer());
}
