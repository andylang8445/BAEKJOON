//
//  main.cpp
//  13241
//
//  Created by Hongjun Yun on 2023-05-09.
//

#include <iostream>

long long int gcd(long long int a, long long int b){
    long long int r = a%b;
    if(r==0){
        return b;
    }
    return gcd(b, r);
}

int main(int argc, const char * argv[]) {
    long long int a, b;
    std::cin>>a>>b;
    if(b>a){
        long long int tmp = b;
        b = a;
        a = tmp;
    }
    long long int g = gcd(a, b);
    a/=g;
    b/=g;
    std::cout<<(a*b*g);
    return 0;
}
