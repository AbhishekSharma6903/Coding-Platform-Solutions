#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class student{
    private:
        int scores[5];
        int sum;
    public:
        student() : sum(0){}
        int CalculateTotalScore() {return sum;}
        void input(){
            for(int i=0; i<5; i++){
                cin>>scores[i];
                sum+=scores[i];
            }
        }
};

int main() {
     int n;
     cin>>n;
     student *s = new student[n];
     
     for(int i=0; i<n ; i++){
         s[i].input();
     }
     int k_score = s[0].CalculateTotalScore();
     
     int count =0;
     for(int i=1; i<n; i++){
         int total = s[i].CalculateTotalScore();
         if(total>k_score){
             count++;
         }
     }
     cout<<count;
    return 0;
}
