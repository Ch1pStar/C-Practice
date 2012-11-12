#include <iostream>
#include <string>
using namespace std;


void printSomething(char n){

	char a;	
	string *cheater;
	int cnt=0,size_,margin=-1;
	
	size_ = n-64;
	cheater = new string[size_];
	
	for(int i=65;i<=n;i++){
		cheater[cnt] = 65;
		
		
		a=i-margin; 
		for(int j=1;j<i-64;j++){
		
			cheater[cnt] += a; 
			a++;
		}
		margin++;
		cnt++;
	
	}
	
	for(int i=0;i<size_;i++)
		cout << cheater[i] << endl;
	
	delete []cheater;




}

int main(){
	char n;
	cin >> n;
	printSomething(n);

	return 0;
}