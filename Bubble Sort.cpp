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


	for (int i = 0; i <= 4; i++)
	{  
		for (int j = i+1 ; j<= 4 ; j++){
			if (Arr[i] > Arr[j]){
				int temp; 
				temp = Arr[i] ;
				Arr[i] = Arr[j] ;
				Arr[j] = temp;
	}
	pass++;
}
pass++;
	}
	
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
