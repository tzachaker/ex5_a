#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <string>
#include <iostream>
using namespace ariel;
using namespace std;


TEST_CASE("MagicalContainer")
{
    //new container
    MagicalContainer mc;
    CHECK(mc.size() == 0);
    CHECK_EQ(mc.size(), 0);

    //add and remove elements from mc
    //for 3 elements
    for(int i=0; i<3; i++){
        mc.addElement(i);
    }
    CHECK(mc.size() == 3);
    CHECK_THROWS(mc.removeElement(3));
    CHECK(mc.size() == 3);
    mc.removeElement(2);
    CHECK(mc.size() == 2);

    //for 10 elements
    for(int i=0; i<10; i++){
        mc.addElement(i);
    }
    CHECK(mc.size() == 10);
    for(int i=0; i<10; i++){
        mc.removeElement(i);
    }
    CHECK(mc.size() == 0);
}

TEST_CASE("AscendingIterator") {
    MagicalContainer mc;
        for(int i=0; i<3; i++){
            mc.addElement(i);
        }
    
    MagicalContainer::AscendingIterator iteratorA(mc);
    MagicalContainer::AscendingIterator iteratorB(mc);
    CHECK(iteratorA.begin() == iteratorB.begin());
    CHECK(iteratorA.end() == iteratorB.end());
    CHECK(*iteratorA.begin() == 0);
    CHECK((*(++iteratorA)) == 1);
    CHECK((*(++iteratorA)) == 2);
    CHECK(*(iteratorA.end()) == 2);

    CHECK(iteratorA == iteratorB);
    CHECK_FALSE(iteratorA != iteratorB);
    CHECK(!(iteratorA > iteratorB));
    CHECK(!(iteratorA < iteratorB));

    ++iteratorA;
    CHECK_FALSE(iteratorA == iteratorB);
    CHECK(iteratorA != iteratorB);
    CHECK(iteratorA > iteratorB);
    CHECK(iteratorB < iteratorA);
    
    ++iteratorB;
    CHECK(iteratorA == iteratorB);
    CHECK_FALSE(iteratorA != iteratorB);
    CHECK(!(iteratorA > iteratorB));
    CHECK(!(iteratorA < iteratorB));
}

TEST_CASE("SideCrossIterator") {
    MagicalContainer mc;
        for(int i=0; i<3; i++){
            mc.addElement(i);
        }
    
    MagicalContainer::SideCrossIterator iterator(mc);
    CHECK(*iterator.begin() == 0);
    CHECK((*(++iterator)) == 2);
    CHECK((*(++iterator)) == 1);
    CHECK(*(iterator.end()) == 1);
}

TEST_CASE("PrimeIterator") {
    MagicalContainer mc;
        for(int i=0; i<6; i++){
            mc.addElement(i);
        }
    
    MagicalContainer::PrimeIterator iterator(mc);
    CHECK(*iterator.begin() == 2);
    CHECK((*(++iterator)) == 3);
    CHECK((*(++iterator)) == 5);
    CHECK(*(iterator.end()) == 5);
}



