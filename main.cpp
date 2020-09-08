#include <iostream>

template <typename T>
T Sum(T a, T b) {
    return a + b;
}

template<typename T>
T Max(T x, T y) {
    std::cout << typeid(T).name() << std::endl;
    return x > y ? x: y;
}

//Explicit Instantiation
template char Max(char x, char y);
template char * Sum(char * a , char * b);

int main() {
    Sum(2, 3);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
