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

//Explicit Specialization
//template<> const char * Max(const char * x, const char * y){
//    return strcmp(x, y) > 0 ? x : y;
//}

int main() {
    Max("a", "b");
    const char * b {"B"};
    const char * a {"A"};
    auto maxChar = Max(a , b);
    std::cout << "Bigger char * is " << maxChar << std::endl;
    std::cout << "Hello, World!" << std::endl;
    char aChar = 'a';
    char bChar = 'b';
    auto maxChar1 = Max(aChar , bChar);
    std::cout << "Bigger char is " << maxChar1 << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
