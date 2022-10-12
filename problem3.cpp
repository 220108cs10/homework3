// Abduvaliyev Alisher id:220108  22cs-10
// Write C++ program that acts as a calculator. Create a menu where users can choose the
// mathematical operations: add, subtract, multiply and divide(’+’,’-’,’*’,’/’ ). Then, take two
// numbers from the user input. Perform the operation and print the result. (Switch/case)
    
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    cout<<"First number:";
    cin>>a;
    cout<<"Second number:";
    cin>>b;
    cout<<"Operation(+,-,/,*);";
    cin>>op;

    switch (op){
        case'+': cout<<a+b<<endl;
        break;
        case'-': cout <<a-b<<endl;
        break;
        case'/': cout<<a/b<<endl;
        break;
        case'*': cout<<a*b<<endl;
        break;

    }

    return 0;
}
