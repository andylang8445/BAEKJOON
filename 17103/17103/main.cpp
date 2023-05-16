//
//  main.cpp
//  17103
//
//  Created by Hongjun Yun on 2023-05-16.
//

#include <iostream>
#include <cmath>

using namespace std;

bool lookup[1000001];

int main(int argc, const char * argv[]) {
    for(int i=0;i<1000001;i++){
        lookup[i] = true;
    }
    for(int i=2;i<1000001;i++){
        if(lookup[i]){
            for(int j=1;(i*(j+1))<1000001;j++){
                lookup[i*(j+1)] = false;
            }
        }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int in, cnt{0};
        cin>>in;
        for(int j=2;j<=(in/2);j++){
            if(lookup[j] && lookup[in-j]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
