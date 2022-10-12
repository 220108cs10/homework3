#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Enter three numbers :";
    float a,b,c;
    cin>>a>>b>>c;

    if(a>b&& c>a) {

        cout << a << endl;
    }else if (b>a&& b>c) {
        cout << b << endl;
    }else{
        cout<<c<<endl;
    }

    return 0;
}
