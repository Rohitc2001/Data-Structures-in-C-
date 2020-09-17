#include<iostream>

using namespace std;

void insertion_Sort(int arr[])
{
	int key, j;
	 
	for(int i=1; i<5; i++)
	{
		key = arr[i];
		j = i - 1;
	
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
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
	
	insertion_Sort(my_array);
	
	cout << "\n\nArray after sorting : ";
	for(int i=0; i<5; i++)
	{
		cout << my_array[i] << " ";
	}
	
	return 0;
}
