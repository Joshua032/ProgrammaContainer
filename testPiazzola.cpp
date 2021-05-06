#include "pch.h"
#include "Piazzola.h"
#include "gtest/gtest.h"
class test : public testing::Test
{
    public:
        Piazzola* p, * p1, * p2;
        virtual void SetUp()
        {
            p = new Piazzola();
            p1 = new Piazzola();
            p2 = new Piazzola();
        }

        virtual void TearDown()
        {
            delete p;
            delete p1;
            delete p2;
        }

};

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