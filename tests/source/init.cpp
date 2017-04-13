#include <Lab5-test.hpp>
#include <catch.hpp>

SCENARIO("Add") {
    BinarySearchTree r;
    BinarySearchTree* root;
    int rv = r.Add(10, root);
    
    REQUIRE( rv == 10);
}
/*SCENARIO("print") {
    BinarySearchTree r;
    int rv = r.data;
    
    REQUIRE( rv == 0);
}
SCENARIO("Search") {
    BinarySearchTree r;
    int rv = r.Search;
    
    REQUIRE( rv == 1);
}*/

