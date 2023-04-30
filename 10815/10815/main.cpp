//
//  main.cpp
//  10815
//
//  Created by Hongjun Yun on 2023-04-30.
//

#include <iostream>
using namespace std;
bool dat[20000010];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int offset = 10000001;
    for(int i=0;i<20000010;i++)
        dat[i] = false;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        dat[tmp+offset] = true;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(dat[tmp+offset]){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }
    
    return 0;
}
