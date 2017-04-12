#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add", "[Add]") {
    int x = 10;
    BinarySearchTree *r = 0;
    
    void *rv = BinarySearchTree::Add( x, r );
    
    REQUIRE( rv == nullptr);
}
