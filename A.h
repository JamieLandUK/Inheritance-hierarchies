#pragma once
#include <string>

class A {
    private:
        std::string n;
    public:
        std::string name() {
            return n;
        }
        virtual void print() {
            std::cout << "This is an object of A." << std::endl;
        }
        friend bool myFunction();
};