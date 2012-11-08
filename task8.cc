#include <iostream>
#include <string>
using namespace std;


int main(){
	char n,a;	
	char *lawl;
	string *cheater;
	int cnt=0,size_;
	cin >> n;
	//n=67;
	size_ = n-64;
	lawl = new char[size_];
	cheater = new string[size_];
	
	for(int i=65;i<=n;i++){
		a=i;
		cheater[cnt] = a;
	
		for(int j=1;j<i-64;j++){
			a=i;
			cheater[cnt] += a;
		}
	
		cnt++;
	
	}
	
	for(int i=0;i<size_;i++)
		cout << cheater[i] << endl;
	
	return 0;
}