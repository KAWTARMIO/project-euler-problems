#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
     long long get = 1;
     for(int i = 1; i <= 20; i++){
        if(get % i != 0){
            get++;
            i = 1;
        }
     }
     std::cout << get << std::endl;
     return 0;
}