// Abduvaliyev Alisher id:220108  22cs-10
// Write C++ program that takes your age from user input and tells whether you are eligible to
// get a driving license in the Republic of Uzbekistan or not.

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int age;
    cout<<"enter youre age :";
    cin>>age;
    if ( age >= 18){
        cout<<"you can ride a car";
    }else{
        cout <<"you can't ride a car ";
    }

    return 0;
}
