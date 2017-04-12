#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add", "[Add]") {
    int x = 10;
    BinarySearchTree *r;
    void *rv = r->BinarySearchTree::Add( x, r );
    
    REQUIRE( rv == nullptr);
}
