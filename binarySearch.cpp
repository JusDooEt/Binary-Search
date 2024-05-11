bool binarySearch(int nums[], int item, int first, int last, int& location)
{
	int midPt;
	if (first > last) // item not found
	{
		return false;
	}
	else
	{
		midPt = (first + last) / 2;
		if (nums[midPt] == item) // found at midPoint
		{
			location = midPt;
			return true;
		}
		else if (item < nums[midPt]) // search lower half
			return binarySearch(nums, item, first, midPt - 1, location);
		else // search upper half
			return binarySearch(nums, item, midPt + 1, last, location);
	}
}