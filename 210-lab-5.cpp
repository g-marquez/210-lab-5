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
    int x = 5, y = 10;
    xptr = &x;
    yptr = &y;

    cout << "x = " << *xptr << "  | y = " << *yptr << endl;

    cout << "Swapping...\n";
    int sum = swap(xptr, yptr);
    cout << "x = " << *xptr << " | y = " << *yptr << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a + *b;
}