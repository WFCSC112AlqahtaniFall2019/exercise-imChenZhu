#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;
    // Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    int tmpValue;
    for (i = 0; i < (NUM_ELEMENTS / 2); ++i) {
        tmpValue = revVctr[i];
        revVctr[i] = revVctr[NUM_ELEMENTS - 1 - i];
        revVctr[NUM_ELEMENTS - 1 - i] = tmpValue;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}