#include <type_traits>
#include <typeinfo>
#include "gtest/gtest.h"
#include "../../01_POO/Geometria.h"
#include "../../01_POO/Cuadrado.h"
#include "../../01_POO/Circulo.h"
#include "../../01_POO/Triangulo.h"


class subClass : public Geometria {
public:
    virtual float getPerimetro() { return 1; }

    virtual float getSuperficie() { return 2; }
};

TEST(test_01_POO, getPerimetroEsVirtual) {
    subClass a;
    EXPECT_EQ(a.getPerimetro(), 1);
}

TEST(test_01_POO, getSuperficieEsVirtual) {
    subClass a;
    EXPECT_EQ(a.getSuperficie(), 2);
}


TEST(test_01_POO, CuadradoEsHeredado) {
    const bool cuadrado_h = std::is_base_of<Geometria, Cuadrado>::value;
    EXPECT_TRUE(cuadrado_h);
}

TEST(test_01_POO, TrianguloEsHeredado) {
    const bool triangulo_h = std::is_base_of<Geometria, Triangulo>::value;
    EXPECT_TRUE(triangulo_h);
}

TEST(test_01_POO, CirculoEsHeredado) {
    const bool circulo_h = std::is_base_of<Geometria, Circulo>::value;
    EXPECT_TRUE(circulo_h);
}

