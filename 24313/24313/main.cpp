//
//  main.cpp
//  24313
//
//  Created by Hongjun Yun on 2023-04-30.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a1, a0, c, n0;
    double tmp;
    std::cin>>a1>>a0>>c>>n0;
    if(a1>c){
        std::cout<<0;
    }
    else{
        tmp = c-a1;
        tmp = a0/tmp;
        //std::cout<<"tmp: "<<tmp<<std::endl;
        if(tmp<=n0){
            std::cout<<1;
        }
        else{
            std::cout<<0;
        }
    }
    return 0;
}
