#include <iostream>
using namespace std;

    void shiftRight(double x[], int y){

    double temp[y];
    for (int i = 0; i <= (y-1); i++){
       temp[i] = x[i];
    }
   for(int z = 0; z <= (y-1); z++){
       temp[z] = x[z - 1];
       if(z == (y - 1)){
          temp[0] = x[z];
       }
       
    }

    for( int p = 0; p <= (y-1); p++){
       x[p] = temp[p];
      cout<<x[p]<<endl;
    }

  } 

    int main(){

     double x[5] = {0.5,1.1,2.1,3.1,4.4};
     int y = 5;   
     shiftRight(x,y);

} 
