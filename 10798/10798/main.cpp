//
//  main.cpp
//  10798
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    char arr[100];
    for(int i=0;i<100;i++)
        arr[i] = -1;
    for(int i=0;i<5;i++){
        string tmp;
        cin>>tmp;
        for(int j=0;j<tmp.length();j++){
            arr[i+(j*5)] = tmp[j];
        }
    }
    for(int i=0;i<100;i++){
        if(arr[i] > 0)
            cout<<arr[i];
    }
    return 0;
}
