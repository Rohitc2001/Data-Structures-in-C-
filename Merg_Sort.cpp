#include<iostream>

using namespace std;

void merge(int arr[], int left, int middle, int right)
{
	int i = left;        //left array starting point. i = 0
	int j = middle + 1; //right array starting point. j = mid + 1 = 3
	int k = left;      //temp variable.
	
 // temperory array
	int temp[5]; 
	
 // sorting array.
	while(i <= middle && j <= right) 
	{
		if(arr[i] <= arr[j]) 
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
 // coping left side of array.
	while(i <= middle)
	{
		temp[k] = arr[i];
		i++;
		k++;
	}
	
	
//  coping right side array.
	while(j <= right)
	{
		temp[k] = arr[j];
		j++;
		k++;
	}
	
// creating a complete sorted array.	
	for(int n = left; n <= right; n++)
	{
		arr[n] = temp[n]; 
	}
}

void merge_Sort(int arr[], int left, int right)
{
	if(left < right)
	{
		int middle = (left + right) / 2;
		
		merge_Sort(arr, left, middle); // left Side array
		merge_Sort(arr, middle + 1, right); // right side array
		
		merge(arr, left, middle, right);
	}
}

int main()
{
	int my_array[5];
	
	cout << "\nEnter the elements in array : " << endl;
	for(int i=0; i<5; i++)
	{
		cin >> my_array[i];
	}
	
	cout << "\n\nArray before sorting : ";
	for(int i=0; i<5; i++)
	{
		cout << my_array[i] << " ";
	}
	
	merge_Sort(my_array, 0, 4);
	
	cout << "\n\nArray after sorting : ";
	for(int i=0; i<5; i++)
	{
		cout << my_array[i] << " ";
	}
	
	return 0;
}
