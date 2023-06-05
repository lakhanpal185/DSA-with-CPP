#include<iostream>
#include<string>
using namespace std;

namespace mynamespace
{
    void printhello(){
        cout << "hello from namespace"<<'\n';
    }
    class clg{
            string name = "";
            int rating = 0;
        public:
            clg(const string& x,const int& y): name(x),rating(y){
                cout <<"name : "<<name<<" rating: "<<rating<<"\n";
            }
    };

} // namespace mynamespace : used to better orgnize the code

void printhello(){
    cout << "hello out of namespace"<<'\n';
}

//anonymous namespace :They provide a way to define entities that are only accessible
//within the translation unit (source file) in which they are defined
namespace{
    string myx_value = "code_value_i"; 
    void printhi(){
        cout <<"hi, lakhan emoji(😉)"<<"\n";
    }
    namespace inner{
        int x = 30;
    }
}

int main(void){
    int main = 90;
    cout <<main<<"\n";

    mynamespace::printhello();
    printhello();
    mynamespace::clg collage1("mitrc",5);

    //anonymous namespce 
    cout <<myx_value<<"\n";
    printhi();
    cout << "inner namespace x :"<<inner::x;
 
    return 0;
}