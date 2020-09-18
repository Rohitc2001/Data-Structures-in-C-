#include<iostream>
using namespace std;

void bubble_sort(int arr[])
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<(5-i-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}
		}
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
	
	bubble_sort(my_array);
	
	cout << "\n\nArray after sorting : ";
	for(int i=0; i<5; i++)
	{
		cout << my_array[i] << " ";
	}
	
	return 0;
}

