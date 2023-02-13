#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int k=1; k<10; k++)
	{
		cout << "Pass "<<k<<":";
		T t = d[k];
		int j = k-1;
		while(j>=0 && t >= d[j])  
        {  
            d[j+1] = d[j];   
            j = j-1;  
        }  
        d[j+1] = t;
		for(int o=0;o<10;o++)
		{
			cout << d[o]<<" ";
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