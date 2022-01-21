#include <iostream>
using namespace std;
int main()
{
	int Arr[5] ;
int pass= 0;
cout << " Enter 5 elements in Array :";
for (int i = 0 ; i <= 4; i++){
	cin>> Arr[i];
}

	cout << " Unsorted Array :\n ";
	for (int i = 0; i <= 4; i++)
	{
		cout << Arr[i] << " ";
	}

// Logical Code 
int min_idx;
	for (int i = 0; i < 4; i++)
	{  
		min_idx = i; 
     	  for (int j = i+1; j < 5; j++) {
        if (Arr[j] < Arr[min_idx]) {
            int temp = Arr[min_idx];
           	 Arr[min_idx] = Arr[j];
         	   Arr[j] = temp;
          min_idx = j; 
        }
          pass++;
        } 
	pass++;
	}
	
	// Output Print 
		cout << "\n\n Sorted Array in Accending...\n ";
			for (int i = 0; i <= 4; i++)
	{
		cout << Arr[i]<<" ";
	}
		
		cout << "\n\n Sorted Array in Decending ...\n ";
			for (int i = 4; i >= 0; i--)
	{
		cout << Arr[i]<<" ";
	}
	
	cout << "\n\n Total Steps : "<<pass;
}
