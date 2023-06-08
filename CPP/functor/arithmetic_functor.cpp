#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void disp_v(vector<T> & v) {
    if(!v.size()) return;
    for(T e :  v) { cout << e << " "; }
    cout << endl;
}

int main() {
    vector<long> v1 = { 26, 52, 79, 114, 183 };
    vector<long> v2 = { 1, 2, 3, 4 ,5 };
    vector<long> v3(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);
    disp_v(v3);
    cout << endl;
    
    plus<long> f;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);
    disp_v(v3);
    

    multiplies<long> fm;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fm);
    disp_v(v3);

    divides<long> fd;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fd);
    disp_v(v3);

    modulus<long> fmd;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fmd);
    disp_v(v3);


    negate<long> fn;
    transform(v1.begin(), v1.end(), v3.begin(), fn);
    disp_v(v3);

    return 0;
}
