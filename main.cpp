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
template<> const char * Max<const char*>(const char * x, const char * y){
    return strcmp(x, y) > 0 ? x : y;
}

//non type Template arguments
template<int size>
void Print(){
    char charArr[size]; // size is a constant.
    std::cout << size << std::endl;
}

//template <typename T>
//T Sum(T * pArr, int size) {
//    T sum{};
//    for(int i = 0; i < size; i ++) {
//        sum += pArr[i];
//    }
//    std::cout << sum << std::endl;
//    return sum;
//}

template <typename T, int size>
T Sum(T (&pArr)[size]) {
    T sum{};
    for(int i = 0; i < size; i ++) {
        sum += pArr[i];
    }
    std::cout << sum << std::endl;
    return sum;
}

int main() {
//    Max("a", "b");
//    const char * b {"B"};
//    const char * a {"A"};
//    auto maxChar = Max(a , b);
//    std::cout << "Bigger char * is " << maxChar << std::endl;
//    std::cout << "Hello, World!" << std::endl;
//    char aChar = 'a';
//    char bChar = 'b';
//    auto maxChar1 = Max(aChar , bChar);
//    std::cout << "Bigger char is " << maxChar1 << std::endl;
//    std::cout << "Hello, World!" << std::endl;

    Print<3>();
    int arr[] {1,2,3,4};
    //reference of Array
    //int (&ref)[4] = arr;
    Sum(arr);
    return 0;
}
