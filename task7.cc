#include <iostream>

using namespace std;

void printMinMaxAvrg(int *arr,int n){
	int max=0,min=arr[0],sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max)max=arr[i];
		if(arr[i]<min)min=arr[i];
		sum+=arr[i];
	}
	cout << "Max: " << max << ", Min: " << min << ", Avrg: " << (double)sum/n << endl;


}

int main(){

	int arr[] = {10,-1020,153230,20,10};
	printMinMaxAvrg(arr,5);
	return 0;
}