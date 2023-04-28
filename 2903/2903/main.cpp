//
//  main.cpp
//  2903
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    int one_side = 2;
    std::cin>>n;
    for(int i=0;i<n;i++){
        one_side = one_side<<1;
        one_side-=1;
    }
    std::cout<<one_side*one_side;
    return 0;
}
