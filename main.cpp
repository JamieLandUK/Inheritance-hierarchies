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
  std::cout << "Hello World!\n";
}