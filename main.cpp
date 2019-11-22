#include <iostream>
#include <vector>
#include "A.h"
#include "B.h"
#include "C.h"

bool myFunction(std::vector<A*> in, std::vector<A*> &out) {
    for (int i = 0; i < (int)in.size(); i++) {
        A *ptr;
        if (in[i]->name() == "A") {
            ptr = new A;
        } else if (in[i]->name() == "B") {
            ptr = new B;  
        } else if (in[i]->name() == "C") {
            ptr = new C;
        } else {
            std::cout << "Invalid derived type '" << in[i]->name() << "'" << std::endl;
            return false;
        }
        out.push_back(ptr);
        out[i]->print();
    }
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

    myFunction(in, out);
}