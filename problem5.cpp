// Abduvaliyev Alisher id:220108 22cs-10
// Write a C++ program to check whether a character is an alphabet, digit or special charac-
// ter.
    #include <iostream>
    using namespace std;
    int main(int argc, const char * argv[]) {
        char v;
        cout<<"Write an alphabet";
        cin>>v;
        if(v<57&&v>=48) {
            cout << "you have entered a digit" << endl;
        }else if ((v=97&&v<=122)||(v>=65&&v<=90)) {
            cout << "you have entered an alphabet" << endl;
        }else{
            cout<<"you have entered a special char :";
        }
    return 0;
}
