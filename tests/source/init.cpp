#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add") {
    BinarySearchTree r;
    int rv = r.data;
    
    REQUIRE( rv == 0);
}
SCENARIO("print") {
    BinarySearchTree r;
    int rv = r.data;
    
    REQUIRE( rv == 10);
}
