#include<iostream>
using namespace std;
int main(){
    long long largest = 0;
for(int i = 100 ; i <= 999; i++){
    for(int k = 100; k <= 999; k++){
long long product = i * k;
long long original = product;
long long reversed = 0;

while(product != 0){
    int digit = product % 10;
    reversed = reversed * 10 + digit;
    product = product / 10;
  }
    if(original == reversed){
        if(original > largest){
            largest = original;
        }
    }
  }
}
cout<<"the largest palindrome product of two 3-digit numbers is:"<<largest<<endl;
return 0;
}