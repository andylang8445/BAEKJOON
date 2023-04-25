#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        string str;
        cin>>str;
        cout<<str[0]<<str[str.length()-1]<<endl;
    }
}