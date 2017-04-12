#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add") {
    int x = 10;
    BinarySearchTree *r;
    
    void *rv = BinarySearchTree::Add( x, r );
    
    REQUIRE( rv == nullptr);
}
