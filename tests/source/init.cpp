#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add", "[Add]") {
    int x = 10;
   BinarySearchTree r = 0;
    
    void *rv = BinarySearchTree::r.Add( x, root );
    
    REQUIRE( rv == nullptr);
}
