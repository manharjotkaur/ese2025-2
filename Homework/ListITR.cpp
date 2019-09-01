 

#include<iostream> 
#include<iterator> // Define iterators 
#include<vector> // Define vectors 

using namespace std; 
int main() 
{ 
	vector<int> arry = {1,3,7,4,5}; 
	
	// Declaring iterator for a vector
 
	vector<int>::iterator ptr; 
	
	// Displaying vector elements using begin() and end() 

	cout << "The vector elements are : "; 
	for (ptr = arry.begin(); ptr < arry.end(); ptr++) 
		cout << *ptr << " "; 
	
	return 0;	 
} 

