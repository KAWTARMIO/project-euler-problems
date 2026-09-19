#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0, c = 0;
    for(int b = 1; b < 1000; b++){
        for(int c = 1; c < 1000; c++){
            a = 1000 - b - c;
            if(a > 0 && a*a + b*b == c*c){
                int product = a*b*c;
                cout<<"the product of the pythagorean triplet is :"<< product <<endl;
                


        
            }
        }
        
}

                return 0;
}