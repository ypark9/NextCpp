#include <iostream>
#include <vector>
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

template<typename T, int size>
T Max(T (&ref)[size]) {
    T max{};
    for(int i = 0; i < size; i ++) {
        if(max < ref[i])
            max = ref[i];
    }

    std::cout << "The max value is " << max << std::endl;
    return max;
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

//This will be the base case of the recursion caused by Print(args...)
void Print() {
}

//Template parameter pack
template<typename T, typename ... Params>
//Function parameter pack
void Print(T a, Params ...args) {
    Print(args...);
}

/*
 * 1. Print(1, 2.5, 3, "4");
 * 2. Print(2.5, 3, "4");
 * 3. Print(3, "4");
 * 4. Print("4");
 * 5. Print();
 * */

//Functional programming
//Implements keep_if on your own
//So it can be used like this.
// const auto ys = keep_if(is_oven, xs);

bool is_even(int x) {
    return x % 2 == 0;
}

template<typename Function, typename T>
T keep_if(Function, T vec){
    T ret;
    for(auto x : vec){
        if (Function(x)) {
            ret.push_back(x);
        }
    }

    return ret;
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

//    Print<3>();
//    int arr[] {1,2,3,4};
//    //reference of Array
//    //int (&ref)[4] = arr;
//    Sum(arr);
//
//    Max(arr);

//Print(1, 2.5, 3, "4", "string");
    std::vector<int> xs{1,2,3,4};
    const auto ys = keep_if(is_even, xs);

    return 0;
}
