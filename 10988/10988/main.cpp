//
//  main.cpp
//  10988
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++){
        if(input[i] != input[input.length() - i - 1]){
            cout<<"0"<<endl;
            return 0;
        }
    }
    cout<<"1"<<endl;
    return 0;
}
