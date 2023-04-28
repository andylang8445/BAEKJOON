//
//  main.cpp
//  2444
//
//  Created by Hongjun Yun on 2023-04-25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int star = 1;
    int space = n-1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
        space--;
        star+=2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
        space++;
        star-=2;
    }
    return 0;
}
