#include <iostream>

template <typename T>
T Sum(T a, T b) {
    return a + b;
}

//template char * Sum(char a , char b);

int main() {
    Sum(a, b);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
