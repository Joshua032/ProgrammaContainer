#include "pch.h"
#include "Piazzola.h"
#include "Deposito.h"
#include "Conteiner.h"

#include "gtest/gtest.h"

class testContainer : public testing::Test
{
public:
	Conteiner* c;
	Piazzola* p;
	Deposito* d;

	virtual void SetUp(void)
	{
		c = new Conteiner();
		p = new Piazzola();
		//d = new Deposito();

	}

	virtual void TearDown(void)
	{
		delete c;
		delete p;
		//delete d;
	}
};

TEST(Conteiner, costruttore_senza_parametri)
{
	Conteiner c;

	ASSERT_FALSE(c.getCodice() == 10);
	ASSERT_FALSE(c.getDescrizione() == "b");
}

TEST(Conteiner, metodo_Conteiner)
{
	Conteiner c = Conteiner();
	ASSERT_FALSE(c.getCodice() == 1);
	ASSERT_FALSE(c.getDescrizione() == "b");
}

TEST(Conteiner, metodo_Conteiner_con_parametri)
{
	Conteiner c = Conteiner(1, "b");
	ASSERT_FALSE(c.getCodice() == 0);
	ASSERT_FALSE(c.getDescrizione() == "a");
}

TEST(Conteiner, metodo_getCodice)
{
	Conteiner c;
	ASSERT_FALSE(c.getCodice() == 10);
}

TEST(Conteiner, metodo_getDescrizione)
{
	Conteiner c = Conteiner(0, "a");
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
	Piazzola p;
	ASSERT_LE(p.getNumContainer(), 5);
}

//Test della funzione PushContainer della classe Piazzola
TEST(Piazzola, pop_container)
{
	Piazzola p;
	ASSERT_FALSE(p.getNumContainer() != 0);
}

//Test della classe Piazzola che controlla se il container è presente
TEST(Piazzola, test_controllo_se_container_e_presente)
{
	Piazzola p;
	int codice_container = 0;
	ASSERT_EQ(codice_container, p.getNumContainer());
}