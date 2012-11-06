#include <iostream>

using namespace std;


double artProgSum(double a, double d, int n){
              double sum=0;
              for(int i=0;i<n;i++){
                      sum+= (a+(d*i));        
              }
              return sum;
}

int main(){
    
    cout << artProgSum(1,1.1,6);   
    
    return 0;    
}
