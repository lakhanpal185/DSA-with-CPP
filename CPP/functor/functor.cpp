#include <iostream>
using namespace std;

template <typename T>
class multiply_by {
    T _mult = 0;
    multiply_by();
public:
    multiply_by(T n) : _mult(n) {}
    void mult(T n) { _mult = n; }
    T mult() const { return _mult; }
    T operator() (T n) const { return _mult * n; }
};

int main() {
    multiply_by<int> x(9);
    cout << "x mult is " << x.mult() << endl;
    
    cout << "x(5) is " << x(5) << endl;
    cout << "x(25) is " << x(25) << endl;
    
    x.mult(7);
    cout << "x mult is " << x.mult() << endl;
    
    cout << "x(5) is " << x(5) << endl;
    cout << "x(25) is " << x(25) << endl;
    
    return 0;
}

// In C++, a functor refers to an object that can be treated as a function. Functors are instances of classes 
// or structures that overload the function call operator operator(). They provide a way to define and use 
// functions as objects, allowing them to be stored, passed as arguments, and invoked in a similar way to regular functions.

// class AddFunctor {
// public:
//     int operator()(int a, int b) const {
//         return a + b;
//     }
// };
// int main() {
//     AddFunctor add;
//     int result = add(3, 4);  // Equivalent to calling add.operator()(3, 4)
//     // result is now 7
//     return 0;
// }


