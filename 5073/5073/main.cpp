//
//  main.cpp
//  5073
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    while(1){
        int a[3];
        int sum = 0;
        int max = -1;
        for(int j=0;j<3;j++){
            std::cin>>a[j];
            sum+=a[j];
            if(max<a[j]){
                max = a[j];
            }
        }
        if(sum == 0){
            break;
        }
        else if(max>=(sum-max)){
            std::cout<<"Invalid"<<std::endl;
        }
        else if(a[0] == a[1] && a[0] == a[2]){
            std::cout<<"Equilateral"<<std::endl;
        }
        else if(a[0] == a[1] || a[0] == a[2] || a[1] == a[2]){
            std::cout<<"Isosceles"<<std::endl;
        }
        else{
            std::cout<<"Scalene"<<std::endl;
        }
    }
    return 0;
}
