//*****************************************************************************
// COMSC-210 | Lab 5 | Gabriel Marquez
// Description: this program takes pre-written code and modifies it such that
// it uses pointers.
//*****************************************************************************

#include <iostream>
using namespace std;

int swap(int *, int *);

int main() {
    int *xptr, *yptr = nullptr; //be good stewards of our pointers
    int x = 5, y = 10; //kept original values from starter code

    //assign addresses of corresponding values to pointers
    xptr = &x;
    yptr = &y;

    //switched x & y variables to dereferenced pointers
    cout << "x = " << *xptr << "  | y = " << *yptr << endl;

    cout << "Swapping...\n";
    int sum = swap(xptr, yptr); //corrected function arguments

    //switched x & y variables to dereferenced pointers, now swapped
    cout << "x = " << *xptr << " | y = " << *yptr << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

//rewritten function such that pointers are used
int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a + *b;
}