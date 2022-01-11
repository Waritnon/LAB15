#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for (int i = 1; i < N; i++)
    { 
        int temp = d[i]; 
        int n = i - 1;
		cout <<  "Pass " << i << ':';  
        while (n >= 0 && d[n] < temp)
        { 
            d[n + 1] = d[n]; 
            n = n - 1;
        } 
        d[n + 1] = temp;
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}