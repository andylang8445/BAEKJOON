//
//  main.cpp
//  2702
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    int arr[4] = {25, 10, 5, 1};
    std::cin>>n;
    for(int i=0;i<n;i++){
        int money_in_cent;
        std::cin>>money_in_cent;
        for(int j=0;j<4;j++){
            int coin_cnt = money_in_cent/arr[j];
            std::cout<<coin_cnt<<" ";
            money_in_cent %= arr[j];
        }
        std::cout<<std::endl;
    }
    return 0;
}
