#include<iostream>
#include<string>
using namespace std;

template<typename T>
const T & maxof(const T & a, const T & b){
    return a > b ? a:b;
}
int main()
{
    int a = 9;
    int b = 7;

    cout <<"The max is : "<<maxof<int>(a,b)<<endl;
    cout.precision(10);
    cout <<"The max is : "<<maxof<short int>(a,b)<<endl;
    cout <<"The max is : "<<maxof(a,b)<<endl;
    return 0;
}