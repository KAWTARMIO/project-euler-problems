#include<iostream>
using namespace std;
int main(){
    int get = 0;
    int num =1;
    int prime = 0;

    while(get < 10001){
        num++;
        bool isprime = true;
    for(int i = 2; i <= num/2; i++){
        if (num % i == 0){
            isprime = false;
            break;
        }
        if(isprime){
            prime = num;
            get++;

        }
        
    }
    
cout<<"the 10001st prime number is:"<<prime<<endl;
 }
 return 0;
 }
