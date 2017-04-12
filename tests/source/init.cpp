#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add") {
    int x = 10;
    BinarySearchTree r;
    int rv = r.data;
    
    REQUIRE( rv == 10);
}
