#include "UnionFind.h"
#include <iostream>
#include "catch.hpp"

SCENARIO("Prueba de UnionFind"){
    GIVEN("Nodos de prueba"){
        WHEN("Dos nodos se unen y se busca el padre"){
            THEN("Se retorna el padre"){
                UnionFind uf(25);
                uf[5]->set_parent(uf[3]);
                REQUIRE(uf[3]->findP(uf[5]).id == 3);
            }
        }
    }
}