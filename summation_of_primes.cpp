#include<iostream>
using namespace std;
int main(){
    long long sum = 0;
    for(int i = 2; i < 2000000; i++){
    bool isprime = true;
    for(int g = 2; g <= i/2; g++){
        if(i % g == 0){
            isprime = false;
            break;
            }
        }
        if(isprime){
            sum = sum + i;
        }
       
}
 cout<<"the sum of all the primes below 2 million is:"<<sum<<endl;
 return 0 ; 
            }