//
//  main.cpp
//  4134
//
//  Created by Hongjun Yun on 2023-05-09.
//

#include <iostream>
#include <cmath>
using namespace std;

bool is_sosu(long long int a){
    for(long long int i=2;i<=(sqrt(a));i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long int in;
        cin>>in;
        for(long long int j=in;;j++){
            if(j>1 && is_sosu(j)){
                cout<<j<<"\n";
                break;
            }
        }
    }
    return 0;
}
