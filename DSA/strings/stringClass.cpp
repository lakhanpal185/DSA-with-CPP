#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "hey, can help me!";
    string::iterator it;

    //size & length functions
    cout <<"The size same as length : "<<s1.size()<<"\n";
    cout <<"The size same as length : "<<s1.length()<<"\n";
    
    //+ for concatenated strings
    cout <<"concatenated a strings: \n";
    string s2 = "nothing is here";
    string s3 = s1 + "."+ s2;
    cout<<s3<<"\n";

    //campare (it compare alphabaticaly)
    cout<< "is s1 == s2? " <<(s1 == s2 ? "yes" : "no")<<"\n";
    //copy-assign s2 
    cout<< "is s1 == s2? " <<(s1 == s2 ? "yes" : "no")<<"\n";
    cout << "is s1 > \"other string\"? " << (s1 > "other string" ? "yes" : "no") << endl;
    cout << "is s1 < \"other string\"? " << (s1 < "other string" ? "yes" : "no") << endl;
    cout << "is \"other string\"? > s1  " << ("other string" > s1 ? "yes" : "no") << endl;
    cout << "is \"other string\" < s1? " << ("other string" < s1 ? "yes" : "no") << endl;
   

    return 0;

}