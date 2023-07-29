#include <iostream>
#include <list>
using namespace std;
int main(){

list<int> numbers= {1,2,1,1,5,6};
auto itr=numbers.begin();
auto ite=numbers.end();
advance(itr,2);
numbers.erase(itr,ite);
numbers.push_front(9);
numbers.push_back(0);
numbers.pop_back();
numbers.pop_front();
for(auto it=numbers.begin(); it!=numbers.end();it++){
    cout<<*it << " " ;
}



// numbers.remove(1);
// it=numbers.begin();
// it++;
// numbers.insert(it,0);

// cout<<*itr;
// cout<<*it;
// numbers.insert(itr,2,6); insert 6 two times at position of itr



//looping in DOubly lisklist

// for (int number: numbers)
// {
//     cout<<number << " ";
// }

// for(auto n: numbers){
//     cout<<n;
// }

// for(auto it=numbers.begin(); it!=numbers.end();it++){
//     cout<<*it << " " ;
// }


    
}