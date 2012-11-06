#include <iostream>

using namespace std;

int arrMax(int *arr, int n){
        int max=0;
        for(int i=0;i<n;i++)
                if(arr[i]>max) 
                               max=arr[i];
        
        return max;
}


int main(){
    
    int a[] = {1,200,3,4};   
    cout << arrMax(a,4) << endl;
    
    
    return 0;
}
