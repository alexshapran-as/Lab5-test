#include <Lab5-test.hpp>
#include <Lab5-test.cpp>
#include <catch.hpp>

SCENARIO("Add", "[Add]") {
    int x = 10;
   // BinarySearchTree *r = 0;
    
    void *rv = BinarySearchTree::root->Add( x, root );
    
    REQUIRE( rv == nullptr);
}
