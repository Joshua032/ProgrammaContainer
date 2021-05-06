#include "pch.h"
#include "Piazzola.h"
#include "Deposito.h"
#include "Conteiner.h"

#include "gtest/gtest.h"

class test : public testing::Test
{
	private:
		int codice;
		char descrizione;
};

TEST(Conteiner, costruttoresenzaparametro)
{
	int codice = 0;
	char descrizione = 'a';
	ASSERT_TRUE(codice == 0);
	ASSERT_TRUE(descrizione == 'a');
}

TEST(Conteiner, costruttoreconparametro)
{
	int codice = 10;
	char descrizione = 'b';
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

