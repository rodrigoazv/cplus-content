
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
	int toFind = 10;
	int arr[] = {10, 20, 50, 100, 2000};
	int high = sizeof(arr)/sizeof(*arr);
	int lower = 0;
	int center, proby;
	while(lower <= high){
		center = (high + lower) / 2;

		proby = arr[center];
		if(proby == toFind){
			cout <<  center;
		}
		if( proby > toFind ){
			high = center - 1;
		}
		else{
			lower = center + 1;
		}

	}
	return 0;
}

