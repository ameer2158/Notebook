#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "Direction.hpp"

using namespace doctest;
using namespace std;
using namespace ariel;
#include "Notebook.hpp"

 Notebook nb;
TEST_CASE("Good"){
    Direction d;
    nb.write(2,3,5,d,"ameer");
    CHECK(nb.read(2,3,5,d,5) == "ameer");
    CHECK(nb.read(2,3,5,d,0) == "");
    CHECK(nb.read(2,3,5,d,2) == "am");
    CHECK(nb.read(2,3,5,d,4) == "amee");
    nb.write(2,3,5,d,"amdocs");
    CHECK(nb.read(2,3,5,d,5) == "amdoc");
    CHECK(nb.read(2,3,5,d,6) == "amdocs");
    CHECK(nb.read(2,3,5,d,0) == "");
    nb.write(2,7,5,d,"ariel");
    CHECK(nb.read(2,7,5,d,5) == "ariel");
    CHECK(nb.read(2,7,5,d,2) == "ar");
    CHECK(nb.read(2,7,5,d,1) == "a");
    CHECK(nb.read(2,3,5,d,6) == "amdocs");
    CHECK_FALSE(nb.read(2,3,5,d,6) == "ameer");
    nb.erase(2,3,5,d,6);
    CHECK(nb.read(2,3,5,d,6) == "");
}

TEST_CASE("Bad"){
    Direction de;
    CHECK_THROWS(nb.read(2,3,5,de,6));
    nb.write(2,3,5,de,"amdocs");
    CHECK(nb.read(2,3,5,de,5) != "amdocs");
    nb.write(2,3,5,de,"am");
    CHECK(nb.read(2,3,5,de,5) != "am");
    CHECK(nb.read(15,8,5,de,5) == "");
    nb.erase(2,3,5,de,18);
    CHECK(nb.read(2,3,5,de,5) != "");
    CHECK(nb.read(2,3,15,de,10) != "");
    CHECK_THROWS(nb.read(2,3,-5,de,-5));
}
 



