// Abduvaliyev Alisher id:220108  22cs-10
// Write C++ program that will take the numerical value of the month from user input and return
// the number of days in that month.
    
#include <iostream>
using namespace std;
int main(int argc, const char * argv []) {
    int n;
    cout<<"Month number :";
    cin>>n;
    switch (n){
        case 1:cout<<"January - 31 days\n";
        break;
        case 2:cout<<"February - 28 days in a common year and 29 days in ,leap yeras\n";
        break;
        case 3:cout<<"March - 31 days\n";
        break;
        case 4:cout<<"April - 30 days\n";
        break;
        case 5:cout<<"May - 31 days\n";
        break;
        case 6:cout<<"June - 30 days\n";
        break;
        case 7:cout<<"July - 31 days\n";
        break;
        case 8:cout<<"August - 31 days\n";
        break;
        case 9:cout<<"September - 30 days\n";
        break;
        case 10:cout<<"October - 31 days\n";
        break;
        case 11:cout<<"November - 30 days\n";
        break;
        case 12:cout<<"December - 31 days\n";
        break;
        default: cout<<"Error\n";
        break;
    }


    return 0;
}
