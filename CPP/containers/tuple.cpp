#include<iostream>
#include<tuple>
#include<string>
using namespace std;
 
template<typename T>
void print_tuple(T  p){
    auto tsz = tuple_size<decltype(p)>::value;
    if( tsz != 3) return;
    cout << get<0>(p)<<" "<< get<1>(p) << ' ' << get<2>(p)<<endl;
}

void message(const char * m ){cout << m <<endl;}
void message(const char *m, const int  n) {cout << m << " : "<< n<<endl;}

int main(void){
    
    //initializer list
    message("initializer list");
    tuple<int, string, int> p1 = {1, "ice cream", 30};
    print_tuple(p1);
    
    // default constructor 
    message("default constructor");
    tuple<int,string,int> p2(0, "pop", 5);
    print_tuple(p2);

    //make_tuple
    message("make_tuple");
    tuple<int,string,int> p3;
    p3 = make_tuple(3,"coke",90);
    print_tuple(p3);

    message("t1 == t2", p1 == p2); //compaire all elements
    message("t1 < t2", p1 < p2);
    message("t1 < t3", p1 < p3);
    message("t1 > t2", p1 > p2);
    message("t2 > t3", p2 > p3);
}
// $ ./main
// initializer list
// 1 ice cream 30
// default constructor
// 0 pop 5
// make_tuple
// 3 coke 90
// t1 == t2 : 0
// t1 < t2 : 0
// t1 < t3 : 1
// t1 > t2 : 1
// t2 > t3 : 0