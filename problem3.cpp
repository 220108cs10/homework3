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
