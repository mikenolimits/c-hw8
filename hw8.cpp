#include <iostream>
using namespace std;

    void shiftRight(double x[], int y){

    for(int z = 0; z <= (y - 1); z++){
     
       if(z == y){
          x[0] = x[y];
       }if(z != 0{
         x[z] = x[y + 1];
      }
                    
    }

     for(int i = 0; i <= y; i++){
       cout<<x[i];
     }

   }

    int main(){

     double x[5] = {0.0,1.1,2.1,3.1,4.4};
     int y = 5;   

} 
