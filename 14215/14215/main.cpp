//
//  main.cpp
//  14215
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a[3];
    std::cin>>a[0]>>a[1]>>a[2];
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    int len = 0;
    if((a[0]+a[1])>a[2]){
        len = a[0]+a[1]+a[2];
    }
    else{
        if(a[0]+a[1]+(a[0]+a[1] - 1) > len){
            len = a[0]+a[1]+(a[0]+a[1] - 1);
        }
    }
    std::cout<<len;
    return 0;
}
