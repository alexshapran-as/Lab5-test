#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add", "[Add]") {
    int x = 10;
    BinarySearchTree *r;
    int rv = r->BinarySearchTree::Add( x, r );
    
    REQUIRE( rv == 0);
}
