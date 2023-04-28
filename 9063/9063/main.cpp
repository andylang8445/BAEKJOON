//
//  main.cpp
//  9063
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n, x, y;
    std::cin>>n;
    std::cin>>x>>y;
    int left{x}, right{x}, up{y}, down{y};
    for(int i=1;i<n;i++){
        std::cin>>x>>y;
        if(left > x){
            left = x;
        }
        if(right < x){
            right = x;
        }
        if(up > y){
            up = y;
        }
        if(down < y){
            down = y;
        }
    }
    std::cout<<abs(up-down)*abs(left-right);
    return 0;
}
