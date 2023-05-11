#include<iostream>
using namespace std;

template<typename T>
T pi = T(3.1415926535897932385L);

template<typename T>
T area_of(T r){
    return r * r * pi<T>;
}

int main(){
    cout.precision(20);
    cout<<"The value of pi is : "<<pi<int> <<" area: " <<area_of<int>(3)<<endl;
    cout<<"The value of pi is : "<<pi<long double> <<" area: " <<area_of<long double>(3)<<endl;
    cout<<"The value of pi is : "<<pi<double> <<" area: " <<area_of<double>(3)<<endl;
    cout<<"The value of pi is : "<<pi<float> <<" area: " <<area_of<float>(3)<<endl;

    return 0;

}