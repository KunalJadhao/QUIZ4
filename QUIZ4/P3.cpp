#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string Name;
    Name = "DEVELEARN";
    reverse(Name.end(), Name.begin());
    cout<<" So the Reversed of the name is: "<<Name <<endl;
    return 0;
}