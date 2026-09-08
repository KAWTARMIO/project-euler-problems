#include<iostream>//my own solution
#include<numeric>
using namespace std;
int main(){
     long long get = 1;
     for(int i = 1; i <= 20; i++){
        if(get % i != 0){
            get++;
            i = 1;
        }
     }
     std::cout << get << std::endl;
     //this is not 100% mine but used some ideas from the internet to make it more efficient and for learning ofc
     long long get1 = 1;
     for(long long h = 1; h <= 20; h++){
        get1 = lcm(get1,(long long) h);
        }
        std::cout<<get1<<std::endl;
return 0;
     }
     
    
