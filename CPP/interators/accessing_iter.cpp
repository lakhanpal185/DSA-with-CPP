#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v1 = {1,2,3,4,5};
    vector<int>::iterator itr;

    vector<int>::iterator ibegin = v1.begin();
    vector<int>::iterator iend = v1.end();

    for(itr = ibegin; itr != iend; ++itr){
        cout <<*itr<<" ";
    }
    cout <<'\n';
    for(auto itr1 = ibegin; itr1 != iend; ++itr1){
        cout <<*itr1<<" ";
    }

    return 0;
}