#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<typename T>
void print_vector(vector<T> & v){
    if(v.empty()) return;
    for(auto i : v){
        cout << i <<" ";
    }
    cout<<endl;
}

void message(const char *m){ cout << m << endl;}
void message(const char *m,const int size){ cout << m << " : "<< size<<endl;}

int main(void){
    // constructor
    vector<int> v1 = {1,2,3,4,5};
    
    //info 
    message("size",v1.size());
    message("front",v1.front());
    message("back",v1.back());
    
    //index
    message("element at 3",v1.at(3));
    message("element at 3",v1[3]);

    //insert
    message("insert 42 at begin + 2");
    v1.insert(v1.begin() + 2,42);
    print_vector(v1);

    //erase
    message("erasing the begin + 2");
    v1.erase(v1.begin()+2);
    print_vector(v1);

    //push
    message("push back 47");
    v1.push_back(47);
    print_vector(v1);

    //pop
    message("pop back 47");
    v1.pop_back();
    print_vector(v1);

    //empty
    message("checking the vector");
    vector<string> vs = {"one","two","three","four"};
    while (!vs.empty()){
        print_vector(vs);
        vs.pop_back();
    }
    
    vs.insert(vs.begin(),{"one","two","three","four","five"});
    print_vector(vs);
 
    //clear
    vs.clear();
    print_vector(vs);
    
    //vector from c array
    constexpr size_t size = 5;
    int arr[size] = { 1,2,3,4,5};
    vector<int> va(arr,arr+size);
    print_vector(va);

    message("vector filled with string");
    vector<string> v2(5,"hi");
    print_vector(v2);
     
    message("copy v2 in v3");
    vector<string> v3(v2);
    print_vector(v3);

    return 0;    
}