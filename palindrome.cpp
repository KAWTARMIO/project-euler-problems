#include<iostream>
using namespace std;
int main(){
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
  for( int largest = 0)

    }
}
return 0;
}