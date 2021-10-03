//
//  main.cpp
//  10757
//
//  Created by Hongjun Yun on 2021-10-02.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string a;
    std::cin>>a;
    long int n1_length{0}, n2_length{0}, final_length{0}, shorter_len{0};
    int rounding{0};
    n1_length=a.length();
    char char_n1[a.length()];
    std::strcpy(char_n1, a.c_str());
    std::cin>>a;
    n2_length=a.length();
    char char_n2[a.length()];
    std::strcpy(char_n2, a.c_str());
    int int_n1[n1_length], int_n2[n2_length];
    for(int i=0;i<n1_length;i++){
        int_n1[i]=char_n1[n1_length-i-1]-'0';
    }
    for(int i=0;i<n2_length;i++){
        int_n2[i]=char_n2[n2_length-i-1]-'0';
    }
    
    if(n1_length>n2_length){
        final_length=n1_length+1;
        shorter_len=n2_length;
    }
    else{
        final_length=n2_length+1;
        shorter_len=n1_length;
    }
    
    int final_ans[final_length];
    for(long int i=0;i<final_length;i++){
        final_ans[i]=0;
    }
    for(long int i=0;i<shorter_len;i++){
        final_ans[i]=int_n1[i]+int_n2[i];
        std::cout<<"\tn1[i]: "<<int_n1[i]<<" "<<"n2[i]: "<<int_n2[i]<<" final[i]: "<<final_ans[i]<<std::endl;
    }
    std::cout<<std::endl;
    if(n1_length>n2_length){
        for(long int i=shorter_len;i<final_length-1;i++){
            final_ans[i]=int_n1[i];
        }
    }
    else{
        for(long int i=shorter_len;i<final_length-1;i++){
            final_ans[i]=int_n2[i];
            std::cout<<"\tn1[i]: "<<int_n1[i]<<" "<<"n2[i]: "<<int_n2[i]<<" final[i]: "<<final_ans[i]<<std::endl;
        }
    }
    
    for(long int i=final_length-2;i>=0;i--){
        final_ans[i]+=rounding;
        if(final_ans[i]>9){
            rounding=final_ans[i]/10;
            final_ans[i]%=10;
        }
        else{
            rounding=0;
        }
    }
    final_ans[final_length-1]=rounding;
    if(rounding>0){
        for(long int i=final_length-1;i>0;i--){
            std::cout<<final_ans[i]<<" ";
        }
    }
    else{
        for(long int i=final_length-2;i>0;i--){
            std::cout<<final_ans[i]<<" ";
        }
    }
    std::cout<<std::endl;
    return 0;
}
