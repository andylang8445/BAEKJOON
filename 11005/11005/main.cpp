//
//  main.cpp
//  11005
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, dest_base, curr_mul;
    string conv = "";
    cin>>n>>dest_base;
    char lookuptable[dest_base];
    for(int i=0;i<dest_base;i++){
        lookuptable[i] = i>9?'A'+i-10:i+'0';
    }
    curr_mul = dest_base;
    while(n>0){
        conv = (char)(lookuptable[n%dest_base])+conv;
        n/=dest_base;
    }
    cout<<conv;
    return 0;
}
