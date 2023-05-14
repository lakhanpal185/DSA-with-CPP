#include<iostream>
#include<array>
#include<string>
using namespace std;

template<typename T>
void printa(T & v){
    if (v.empty()) return;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i]<<" ";
    }
    cout << endl;
}

void message(const char *m ){ cout << m << endl;}
template <typename T>
void message(const char *m, const T & n) {cout << m << " : "<< n<<endl;}

int main(void){
    
    //initializer list
    message("initializer list");
    array<char,7> a1 = {65,66,67,68,69};
    printa(a1);

   // default constructor
    message("default constructor");
    array<string, 5> a2= {"one", "two", "three"};
    printa(a2);
// check the size
    message("size of a1", (int) a1.size());
    message("size of a2", (int) a2.size());
    
    // access elements
    message("a1 element 3 is", a1[3]);
    message("a2 element 2 is", a2[2]);
    message("a1 element 3 is", a1.at(3));
    message("a2 element 2 is", a2.at(2));
    
    // direct access data
    auto * ip1 = a1.data();
    for (size_t i = 0; i < a1.size(); ++i) {
        cout << "element " << i << " is " << *ip1++ << endl;
    }
    
    string * ip2 = a2.data();
    for (size_t i = 0; i < a2.size(); ++i) {
        cout << "element " << i << " is " << *ip2++ << endl;
    }


    return 0;
}

