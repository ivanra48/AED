#include <cassert>
#include <iostream>

int add (int,int);

int main (){

assert (8 == add (4,4));
assert (0 == add (0,0));
assert (5 == add (2,3));
assert (6 == add (3,3));

}

int add (int a, int b){return a + b;}





