#include<iostream>

using std::cout;
using std::cin;


int main(void){
    int m, n;
    cin >> m >> n;

    int arr1[m],arr2[n];
    for(int i = 0; i < m; ++i)
    cin >> arr1[i];

    for(int i = 0; i < n; ++i)
    cin >> arr2[i];
    
    for(int i = n-1; i >= 0; --i){

        // seting last and starting point for iterator
        int last = arr1[m-1];
        int j = m-2;
        for(j; j >= 0 && arr1[j] > arr2[i]; --j){
                arr1[j+1] = arr1[j];
        }

        if(last > arr2[i]) {
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }           
    }

    for(int i = 0; i < m; ++i)
    cout << arr1[i]<<" ";

    cout <<"\n";
    for(int i = 0; i < n; ++i)
    cout << arr2[i] << " ";
    
}
