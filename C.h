#pragma once

class C : public B {
    std::string name() {
        return "C";
    }
    void print() {
        std::cout << "This is an object of C." << std::endl;
    }
};