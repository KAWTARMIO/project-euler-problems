#include <iostream>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int number1 = 5;
   cout <<"number1 value = " <<number1<<"\n";

   int number2 = 7;
   cout <<"number2 value = " <<number2<<"\n";

   int value1 = number1 + number2;
   int value2 = number1 * number2;
   cout <<number1<<"+"<<number2<<"="<<value1<<"\n";
   cout <<number1<<"*"<<number2<<"="<<value2<<"\n";

   cout<<number2<<"-"<<number1<<"="<<number2-number1<<"\n";
   
   cout<<20-30<<"\n";
   int  y = 34;
   cout<<y%2<<"\n";

   long long x = 1;
   int n = 2;
   for (int i = 0; i <= n ; i++) {
      x = (x + i);
   }
   cout<<x<<"\n";
   int s , f;
   if( s , f >= 0 && s <= 1 ){ 
      cout << " s, f are betwen 0 and 1 "<<"\n"; 
   }


   cout <<"   / |   "<<"\n";
   cout <<"  /  |   "<<"\n";
   cout <<" /   |   "<<"\n";
   cout <<"/    |   "<<"\n";
   
   string charactername = "maryam";
   int characteraje = 19;
   cout<<"my name is "<<charactername<<" i am "<<characteraje<<" years old"<<"\n";
   cout<<"i have school after 25 days"<<"\n";
   cout<<"i have to focuse in this time"<<"\n";

   string phrase = " i want to be loved bla bla bla";
   cout<< phrase.length(); 
   //project euler probem 1 done

   int sum = 0;
   for(int i = 1; i <1000; i++){
      if(i%3==0 || i%5==0){
         sum=sum+i;
         std::cout<<"the summm is: "<<sum<<std::endl;
         }
         //project euler problem 2 done
   }
   int p=1;
   int d=2;
   int sum1=0;
   while(p<=4000000){
      if (p%2==0){
         sum1=p+sum1;
         }
         int next = p+d;
          p = d;
          d = next;
          
   }
   std::cout<<"the sum1 is:"<<sum1<<std::endl;
        
         int n = 0;
   for(n = 1 ; n <= 5; n++) {
       std::cout<<"n"<<n<<std::endl;
       }
   long long number = 20;
   for (long long y = 1 ; y <= number; y++){
      if ( y == 2){
        std::cout<<y<<"it's a prime number"<<std::endl;
      }
      else if( y % 2 == 0){
         std::cout<<y<<"it's not a prime number"<<std::endl;
      }
      for( long long y = 3; y <= number; y++){
         if(number % y == 0){
            std::cout<<y<<"it's a prime number"<<std::endl;
            // project euler problem 3 done
            #include <cmath>
            long long get = 600851475143;
            long long root = (long long)sqrt((double)get) + 1;
            std::cout<<"the root is:"<<root<<std::endl;
            for(long long i = 2; i <= root; i++){
              long long i = 1;
               while(get > 1){
                while(get % i == 0){
                     std::cout<<"it's a prime number:"<<i<<std::endl;
                     
                     get= get/i;
                   }
                   i++;
               }
               
         



               }
            }




         }
      }

   }


     return 0;
}