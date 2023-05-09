//
//  main.cpp
//  2485
//
//  Created by Hongjun Yun on 2023-05-09.
//

#include <iostream>

using namespace std;

int gcd(int a, int b){
    int r =  a%b;
    if(r==0){
        return b;
    }
    return gcd(b, r);
}

int main(int argc, const char * argv[]) {
    int n;
    int a[100001];
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            arr[i-1] = a[i]-a[i-1];
        }
    }
    int g;
    if(arr[0] > arr[1]){
        g = gcd(arr[0],arr[1]);
    }
    else{
        g = gcd(arr[1],arr[0]);
    }
    for(int i=2;i<n-1;i++){
        if(g>arr[i]){
            g = gcd(g, arr[i]);
        }
        else{
            g = gcd(arr[i], g);
        }
    }
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        cnt += arr[i]/g - 1;
    }
    cout<<cnt;
    return 0;
}
