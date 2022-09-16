//Welcome to Tanix! Tanix is a horrid take on the Linux operating system.
#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;
void Central() {
string user;
cout<<"Please enter a username"<<endl;
cin>>user;
cout<<"Welcome user:"<<user<<endl;
if (user == "root") {
    string command;
    string prefiles[5] = {"tester.x","intro.txt","credits.txt","texteditormanual.txt","forcecrash.x"};
    cout<<"You have been given root priveleges, these will last until your Tanix session closes"<<endl;
    sleep(2);
    cout<<"Your experience will begin shortly."<<endl;
    sleep(5);
    cout<<"Welcome to Tanix!"<<endl;
    cin>>command;
    if(command == "find"){
    cout<<prefiles<<endl;
    Central();
    }
}   
 }

int main() {
Central();

return 0;
 }
