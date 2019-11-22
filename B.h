#pragma once

class B : public A {
    std::string name () {
        return "B";
    }
    void print() {
        std::cout << "This is an object of B." << std::endl;
    }
};