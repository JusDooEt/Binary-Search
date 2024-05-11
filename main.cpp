#include <iostream>
using namespace std;

bool binarySearch(int nums[], int item, int first, int last, int& location);

int numItems = 20;
int main()
{
	const int SIZE = 20;

	int nums[SIZE] = { 3,5,8,9,14,19,24,32,37,43,45,53,55,56,67,73,77,80,84,91};
	int item;
	int location = 0;
	int first = 0;
	int last = SIZE - 1;
	int midPt = (first + last) / 2;

	// Display the intitial list
	cout << "Array:\n";
	for (int i = 0; i < numItems; i++)
	{
		cout << nums[i] << '\t';
	}
	cout << endl;

	cout << "\nEnter the value (1 - 100) to be deleted (0 to exit): ";
	cin >> item;

	while (item != 0)
	{
		// If found, delete the item
		if (binarySearch(nums, item, first, last, location))
		{
			// Delete the item
			while (location < numItems)
			{
				nums[location] = nums[location + 1];
				location++;
			}
			numItems--;

			// Display the list after the delete
			cout << "Array:\n";
			for (int i = 0; i < numItems; i++)
			{
				cout << nums[i] << '\t';
			}
			cout << endl;
		}
		else
			cout << "#" << item << " is not in the list.\n";

		cout << "\nEnter the value (1 - 100) to be deleted (0 to exit): ";
		cin >> item;
	}
	return 0;
}