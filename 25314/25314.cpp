#include <iostream>
int main(){
    int a;
    std::cin>>a;
    while (a>0){
        std::cout<<"long ";
        a-=4;
    }
    std::cout<<"int";
    return 0;
}