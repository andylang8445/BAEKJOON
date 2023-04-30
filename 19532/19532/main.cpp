//
//  main.cpp
//  19532
//
//  Created by Hongjun Yun on 2023-04-30.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a, b, c, d, e, f;
    std::cin>>a>>b>>c>>d>>e>>f;
    for(int i=-999;i<=999;i++){
        for(int j =-999;j<=999;j++){
            if(a*i+b*j==c && d*i+e*j==f){
                std::cout<<i<<" "<<j;
                return 0;
            }
        }
    }
}
