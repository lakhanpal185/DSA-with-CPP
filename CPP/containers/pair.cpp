#include<iostream>
#include<string>
#include<utility>
using namespace std;

template<typename T1,typename T2>
void print_pair(pair<T1,T2> & p){
    cout << p.first << " : " <<p.second<<endl;
}

void message(const char *m){ cout << m << endl;}
void message(const char *m, const int n){
    cout << m << " : " <<  n<<endl;
}

int main(){
    //initilizer list 
    pair<int , string> p1= {1,"lakhan"};
    print_pair(p1);

    //from default constructor
    pair<int, string> p2(2,"hitesh");
    print_pair(p2);

    //from make_pair
    pair<int ,string> p3;
    p3 = make_pair(1,"himashu");
    print_pair(p3);

    //comparison operators
    cout <<"p1 == p2 : " <<(p1 == p2 ? "yes": "no")<<endl;
    cout <<"p1 > p2 :" <<(p1 > p2 ? "yes": "no")<<endl;
    cout <<"p1 < p2 :"<<(p1 < p2 ?"yes": "no")<<endl;
    
    return 0;

}