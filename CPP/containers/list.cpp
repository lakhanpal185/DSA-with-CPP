#include<iostream>
#include<list>
using namespace std;

template<typename T>
void print_list(list<T> & l){
    if(l.empty()) return;
    for(T &i : l) cout << i << " ";
    cout <<endl;
}

void message(const char *m ) { cout << m <<endl;}
void message(const char *m, int size){ cout << m << " :"<<size<<endl;}

int main(void)
{
   list<int> l1 = {1,2,3,4,5,6,7,8,8,9,112};
   print_list(l1);

   message("size",(int)l1.size());
   message("front",l1.front());
   message("back",l1.back());

   //need a iterator to insert and erase
   list<int>::iterator it = l1.begin();
   while((it != l1.end()) && *it++ != 3);
   if(it != l1.end()) l1.insert(it,909);
   print_list(l1);

   //find element value 3
   it = l1.begin();
   while(it != l1.end() && *it != 3) ++it;
   if(it != l1.end()){
    message("erase 3");
    l1.erase(it);
   }
   print_list(l1);

   //remove element value 909
   l1.remove(909); 
   message("remove 909");
   print_list(l1);

    cout << "\n";
    message("erase 112 to 9");
    decltype(it) it1, it2;
    it2 = it1 = l1.begin();
    while( ( *++it1 != 8) && (it1 != l1.end() ) );
    while( ( *++it2 != 112) && (it2 != l1.end() ) );
    if (it1 != l1.end() && it2 != l1.end()) {
        l1.erase(it1, it2);
        print_list(l1);
    }
    
   return 0;
}
