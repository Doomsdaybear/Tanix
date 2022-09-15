//Welcome to Tanix! Tanix is a horrid take on the Linux operating system.
#include <iostream>
using namespace std;
int main() {
string user;
cout<<"Please enter a username"<<endl;
cin>>user;
cout<<"Welcome user:"<<user<<endl;
if (user == "root") {
    cout<<"You have been given root priveleges, these will last until your Tanix session closes"<<endl;
}
 }
