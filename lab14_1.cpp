#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){

	for(int i = 1 ; i < N ; i++){

		T unsofted = d[i];
		int j;
		for(j = i-1 ; j >= 0 ; j--){
			if(unsofted > d[j]){
				d[j+1] = d[j];
			} else{
				break;
			}
		}
		d[j+1] = unsofted;
		
		cout << "Pass " << i << ":";
		for(int omg = 0 ; omg < N ; omg++){
			cout << d[omg] << " ";
		}
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
