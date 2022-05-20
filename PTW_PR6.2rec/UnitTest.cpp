#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Elem.h"

TEST_CASE( "Arguments initialized") {
    Elem* first = nullptr, *last = nullptr;
    enqueue(first, last, 1);
    enqueue(first, last, 22);
    enqueue(first, last, 23);
    enqueue(first, last, 47);
    enqueue(first, last, 22);
    int a = 1;
    remove1(first, a, 0);
    REQUIRE( first->info == 22);
}
