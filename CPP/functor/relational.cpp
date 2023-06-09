#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

template <typename T>
void disp_v(vector<T> & v) {
    if(!v.size()) return;
    if(typeid(T) == typeid(bool)) {
        for(bool e :  v) { cout << ( e ? "T" : "F" ) << " "; }
    } else {
        for(T e :  v) { cout << e << " "; }
    }
    cout << endl;
}

int main() {
    vector<long> v1 = { 26, 52, 79, 114, 183 };
    vector<long> v2 = { 52, 2, 72, 114 ,5 };
    vector<bool> v3(v1.size());
    disp_v(v1);
    disp_v(v2);
    cout << endl;
    
    greater<long> fg;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fg);
    disp_v(v3);

    less<long> fl;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fl);
    disp_v(v3);

    greater_equal<long> fge;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fge);
    disp_v(v3);

    less_equal<long> fle;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fle);
    disp_v(v3);

    equal_to<long> ft;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), ft);
    disp_v(v3);


    greater<long> ftsort;
    sort(v1.begin(), v1.end(), ftsort);
    disp_v(v1);

    
    less<long> ftsortless;
    sort(v1.begin(), v1.end(), ftsortless);
    disp_v(v1);

    return 0;
}
