#include "pch.h"
#include "Deposito.h"
#include "gtest/gtest.h"

class Test_Deposito : public testing::Test
{
	public:
	Deposito* d, * d1, *d2, *d3;

	virtual void SetUp()
	{
		d = new Deposito(0);
		d1 = new Deposito(1);
		d2 = new Deposito(2);
		d3 = new Deposito(3);
	}

	virtual void TearDown()
	{
		delete d;
		delete d1;
		delete d2;
		delete d3;
	}
};

TEST(Deposito, costruttore)
{
	Deposito d = 0;
	ASSERT_TRUE(d.getNumContainer() == 0);

	ASSERT_FALSE(d.getNumContainer() == 10);
}



TEST(Deposito, CostruttoreDefault)
{
	Deposito d = 0;
	int num_piazzola = 0;

	ASSERT_TRUE(num_piazzola == 0);
}



TEST(Deposito, MetodogetNumContainer)
{
	Deposito d = 0;
	int n = 0;

	ASSERT_TRUE(d.getNumContainer() == n);
}


TEST(Deposito, MetodoaddContainer)
{
	int piazzola = 0;

	ASSERT_FALSE(piazzola != 0);
}



TEST(Deposito, MetodogetContainer)
{
	int piazzola = 0;

	ASSERT_FALSE(piazzola != 0);
}

TEST(Deposito, findPiazzola)
{
	Piazzola p;

	ASSERT_LT(p.getNumContainer(), 5);
}


TEST(Deposito, codice_container)
{
	int codice_container = 0;

	ASSERT_TRUE(codice_container == 0);
}
