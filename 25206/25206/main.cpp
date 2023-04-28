//
//  main.cpp
//  25206
//
//  Created by Hongjun Yun on 2023-04-28.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    double sum{0.0}, total_weight{0.0};
    for(int i=0;i<20;i++){
        string name, grade;
        double weight, grade_numer_rep;
        cin>>name>>weight>>grade;
        if(grade != "P"){
            total_weight += weight;
            if(grade.length() == 1){
                grade_numer_rep = 0.0;
            }
            else{
                grade_numer_rep = grade[1]=='0'?0.0:0.5;
                switch ((int)grade[0]) {
                    case 'A':
                        grade_numer_rep += 4.0;
                        break;
                    case 'B':
                        grade_numer_rep += 3.0;
                        break;
                    case 'C':
                        grade_numer_rep += 2.0;
                        break;
                    case 'D':
                        grade_numer_rep += 1.0;
                        break;
                    default:
                        break;
                }
            }
            sum += weight * (grade_numer_rep);
        }
    }
    cout<<(double)(sum/total_weight);
    return 0;
}
