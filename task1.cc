#include <iostream>

using namespace std;







int main(){
    int n,c,count=0;
    cin >> n;
    cin >> c;
         
    while(n!=0){
                if(n%10==c)
                           count++;
                n=n/10;            
    }
    cout << "----------" << endl;
    cout << count << endl;
    return 0;    
}
