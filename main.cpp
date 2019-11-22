#include <iostream>
#include <vector>
#include "A.h"
#include "B.h"
#include "C.h"

// Takes the two inputs.
// In is the vector which is populated. Out is used to calculate in and prints the contents at the end.
bool myFunction(std::vector<A*> in, std::vector<A*> &out) {
    // Looping through every pointer that is input in the vector.
    for (int i = 0; i < (int)in.size(); i++) {
        A *ptr;
        // If the name output is A...
        if (in[i]->name() == "A") {
            // Create a new object to work on
            ptr = new A;
            // (Sends to the output at the end).
        // Doing the same for B.
        } else if (in[i]->name() == "B") {
            ptr = new B;
        // ... And C.
        } else if (in[i]->name() == "C") {
            ptr = new C;
        } else {
            // If the object given does not have a correct type, error collection.
            std::cout << "Invalid derived type '" << in[i]->name() << "'" << std::endl;
            // bool for error collection purposes.
            return false;
        }
        // After each loop, this is called and the new function is put into the output vector.
        out.push_back(ptr);
        // Print the vector.
        out[i]->print();
    }
    // Finish
    return true;
}

int main() {
    // Creating the vector to be sent to the function.
    std::vector<A*> in;

    // Creating the objects.
    A a1;
    A *a1p = &a1;
    A a2;
    A *a2p = &a2;
    B b1;
    B *b1p = &b1;
    B b2;
    B *b2p = &b2;
    C c1;
    C *c1p = &c1;
    C c2;
    C *c2p = &c2;

    // Adding the new objects to the vector.
    in.push_back(b2p);
    in.push_back(c1p);
    in.push_back(b1p);
    in.push_back(a2p);
    in.push_back(c2p);
    in.push_back(a1p);

    std::vector<A*> out;

    if (!myFunction(in, out)) {
        std::cout << "There was an error." << std::endl;
    }
}
