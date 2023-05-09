//
//  main.cpp
//  1735
//
//  Created by Hongjun Yun on 2023-05-09.
//

#include <iostream>

int gcd(int a, int b){
    int r = a%b;
    if(r==0){
        return b;
    }
    return gcd(b, r);
}

int main(int argc, const char * argv[]) {
    int a, b, c, d;
    std::cin>>a>>b>>c>>d;
    if(d>b){
        int tmp = d;
        d = b;
        b = tmp;
        
        tmp = a;
        a = c;
        c = tmp;
    }
    int g = gcd(b, d);
    int up, down;
    down = b*d/g;
    up = (down/b)*a + (down/d)*c;
    if(up>down){
        b = up;
        a = down;
    }
    else{
        a = up;
        b = down;
    }
    g = gcd(a, b);
    up /= g;
    down /= g;
    std::cout<<up<<" "<<down;
    return 0;
}
