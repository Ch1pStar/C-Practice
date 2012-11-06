#include <iostream>
#include <cmath>
using namespace std;

int arrEvenAbsSum(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i+=2){
		sum+=abs(arr[i]);
	}
	return sum;
}

int main(){

	int a[7] = {10,20,-5,0,10,-10,0};
	cout << arrEvenAbsSum(a,7) << endl;

	return 0;
}