#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl1 = { 1, 2, 3, 4, 5 };
    forward_list<int>::iterator it1;     // forward iterator

    // it1 = fl1.end();
    // --it1; error we can not decrease them;
    
    for(it1 = fl1.begin(); it1!= fl1.end(); ++it1) {
        cout << *it1 << " ";
    }
    cout << endl;
    
    return 0;
}
