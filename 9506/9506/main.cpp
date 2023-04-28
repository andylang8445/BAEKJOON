//
//  main.cpp
//  9506
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    while(true){
        int num;
        bool flag;
        cin>>num;
        if(num == -1)
            return 0;
        bool arr[num+1];
        for(int j=0;j<num;j++){
            arr[j] = false;
        }
        int cnt = 0;
        int sum = 0;
        int mid = (int)sqrt(num) + 1;
        for(int j=1;j<mid;j++){
            if(num % j == 0){
                if(j*j==mid){
                    sum += j;
                    cnt++;
                    arr[j]=true;
                }
                else{
                    int tmp = num/j;
                    sum += j;
                    cnt++;
                    arr[j]=true;
                    
                    if(tmp != num){
                        sum += tmp;
                        cnt++;
                        arr[tmp]=true;
                    }
                }
            }
            if(sum > num){
                cnt = -1;
                break;
            }
        }
        if(cnt == -1 || sum != num){
            cout<<num<<" is NOT perfect."<<endl;
        }
        else{
            cout<<num<<" = ";
            for(int j=0;j<num;j++){
                if(arr[j]){
                    cout<<j;
                    cnt--;
                    if(cnt > 0){
                        cout<<" + ";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
