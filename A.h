#pragma once
#include <string>

class A {
    public:
        virtual std::string name() {
            return "A";
        }
        virtual void print() {
            std::cout << "This is an object of A." << std::endl;
        }
        //friend bool myFunction();
};