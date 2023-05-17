#include <iostream>
#include <deque>
#include <string>
using namespace std;

// report deque info
template <typename T>
void reportdeq(T & d) {
    size_t sz = d.size();
    cout << "size: " << sz;
    if (sz) cout << " front: " << d.front() << " back: " << d.back();
    cout << endl;
}

// print deque
template <typename T>
void printdeq(T & d) {
    if (d.empty()) return;
    for (auto v : d) cout << v << " ";
    cout << endl;
}

// print a simple message
void message(const char * s) { cout << s << endl; }

int main() {
    message("create deque");
    deque<string> d1 = {"one", "two", "three"};
    
    message("push back values");
    d1.push_back("four");
    d1.push_back("five");
    
    reportdeq(d1);
    printdeq(d1);