//
//  main.cpp
//  2745
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int base_10_rep{0};
    string base_n_rep;
    int n;
    int digit_multiplier{1};
    cin>>base_n_rep>>n;
    for(int i=(base_n_rep.length() - 1);i>=0;i--){
        int digit_base_10_rep{0};
        if(base_n_rep[i] >= 'A' && base_n_rep[i] <= 'Z'){
            digit_base_10_rep = base_n_rep[i] - 'A' + 10;
        }
        else{
            digit_base_10_rep = base_n_rep[i] - '0';
        }
        base_10_rep += digit_base_10_rep * digit_multiplier;
        digit_multiplier *= n;
    }
    cout<<base_10_rep;
    return 0;
}
