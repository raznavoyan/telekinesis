#include <iostream>
#include "../headers/myvector.hpp"


int main() {
    // Create a MyVector with 5 elements, each initialized to 10
    MyVector<int> vec1(5, 10);
    std::cout << "vec1: ";
    vec1.display();

    // Create a copy of vec1
    MyVector<int> vec2(vec1);
    std::cout << "vec2 (copy of vec1): ";
    vec2.display();

    // Move vec2 to vec3
    MyVector<int> vec3(std::move(vec2));
    std::cout << "vec3 (moved from vec2): ";
    vec3.display();

    // After move, vec2 should be empty
    std::cout << "vec2 after move: ";
    vec2.display();

    return 0;
}