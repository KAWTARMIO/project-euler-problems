#include<iostream>
using namespace std;
int main(){
int sum1 = 0;
int sum2 = 0;
    for(int j = 1; j <= 100; j++){
        sum1 += j * j;
        sum2 += j;
    }
        int sum3 = (sum2 * sum2) - sum1;
        cout<<"the solution is:"<<sum3<<endl;
    
return 0;
}

