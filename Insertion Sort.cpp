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
int match;
	for (int i = 0; i <= 4; i++)
	{  
			match = Arr[i]; 
     	  int  j = i - 1; 
	while (j >= 0 && Arr[j] > match)
        { 
        		Arr[j + 1] = Arr[j]; 
                j = j - 1; 
          pass++;
        } 
        Arr[j + 1] = match;
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
