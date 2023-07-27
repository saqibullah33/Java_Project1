#include <iostream>
using namespace std;
class  student{
    public:
    string name;
    int age;

    student(string name,int agr){
        this->name=name;
        this->age=age;
    }

};

int main(){

    student* s1=new student();
    s1->age=12;
    s1->name="saqib";

    cout<<"name -> " << s1->name << " age -> " << s1->age;
    return 0;
}