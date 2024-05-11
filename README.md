# Binary Search
## About
This program is an example of a binary search function. This function will efficiently search through a sorted array to find a value input by the user. If the value is not found within the array a message will be displayed to the console. If the value is found in the array then the value will be deleted and the remaining values in the array will be displayed on the console. The code in the main.cpp file is just an example on the syntax for using the binary search function. For future use just use the code from the [binarySearch.cpp](binarySearch.cpp) file. 

## Output
```
Array:
3       5       8       9       14      19      24      32      37      43      45      53      55      56      67     73       77      80      84      91

Enter the value (1 - 100) to be deleted (0 to exit): 12
#12 is not in the list.

Enter the value (1 - 100) to be deleted (0 to exit): 45
Array:
3       5       8       9       14      19      24      32      37      43      53      55      56      67      73     77       80      84      91

Enter the value (1 - 100) to be deleted (0 to exit): 77# Binary Search
## About
This program is an example of a binary search function. This function will efficiently search through a sorted array to find a value input by the user. If the value is not found within the array a message will be displayed to the console. If the value is found in the array then the value will be deleted and the remaining values in the array will be displayed on the console. The code in the main.cpp file is just an example of the syntax for using the binary search function. For future use just use the code from the [binarySearch.cpp](binarySearch.cpp) file. 

## Output
```
Array:
3       5       8       9       14      19      24      32      37      43      45      53      55      56      67     73       77      80      84      91

Enter the value (1 - 100) to be deleted (0 to exit): 12
#12 is not in the list.

Enter the value (1 - 100) to be deleted (0 to exit): 45
Array:
3       5       8       9       14      19      24      32      37      43      53      55      56      67      73     77       80      84      91

Enter the value (1 - 100) to be deleted (0 to exit): 77
Array:
3       5       8       9       14      19      24      32      37      43      53      55      56      67      73     80       84      91

Enter the value (1 - 100) to be deleted (0 to exit): 91
Array:
3       5       8       9       14      19      24      32      37      43      53      55      56      67      73     80       84

Enter the value (1 - 100) to be deleted (0 to exit): 3
Array:
5       8       9       14      19      24      32      37      43      53      55      56      67      73      80     84

Enter the value (1 - 100) to be deleted (0 to exit): 0
```
## The Pros of the Binary Search Algorithm
The main benefit of this search algorithm is its speed when compared to a linear search algorithm. This is because in a worst case scenario, a linear search would have to check every single element of the array until the value is found of the end of the array is reached, meaing the value was not found. This time complexity is described as O(n), 'n' representing the total number of values in the array. This means if an array has billions of values a sequential search could potentially take a very long time to complete. In the case of a binary search algorithm, the time complexity is described as O(log(n)) in the worst case scenario. This is because the algorithm searches for the value by selecting a midpoint in the given array and comparing it to the value being searched for. If the value is equal to the mid value then the value has been found. Otherwise, if the value is less than the midpoint, then all of the values greater than the midpoint are ignored and a new midpoint of the remaining values is calculated and the function is recursively called.

### Visual Examples
![image](https://github.com/JusDooEt/Binary-Search/assets/152052216/29b6bb99-a8c3-4017-9a2d-d6509fb09b31)
![image](https://github.com/JusDooEt/Binary-Search/assets/152052216/841441e0-9a9c-469e-8687-8d3e90abddcd)
![image](https://github.com/JusDooEt/Binary-Search/assets/152052216/7f5977f6-369c-483b-8ec1-5e7220d993a3)


## Credit
- Images: [https://www.geeksforgeeks.org/binary-search/](https://www.geeksforgeeks.org/binary-search/)
- Concept: Dennis Rainey, Saddleback College, Mission Viejo




Array:
3       5       8       9       14      19      24      32      37      43      53      55      56      67      73     80       84      91

Enter the value (1 - 100) to be deleted (0 to exit): 91
Array:
3       5       8       9       14      19      24      32      37      43      53      55      56      67      73     80       84

Enter the value (1 - 100) to be deleted (0 to exit): 3
Array:
5       8       9       14      19      24      32      37      43      53      55      56      67      73      80     84

Enter the value (1 - 100) to be deleted (0 to exit): 0
```
## The Pros of the Binary Search Algorithm
The main benefit of this search algorithm is its speed when compared to a linear search algorithm. This is because in a worst case scenario, a linear search would have to check every single element of the array until the value is found of the end of the array is reached, meaing the value was not found. This time complexity is described as O(n), 'n' representing the total number of values in the array. This means if an array has billions of values a sequetial search could potentially take a very long time to complete. In the case of a binary search algorithm, the time complexity is described as O(log(n)) in the worst case scenario. This is because the algorithm searches for the value by selecting a mid point in the given array and comparing it to the value being searched for. If the value is equal to the mid value then the value has been found. Otherwise, if the value is less than the mid point, then all of the values greater than the mid point are ignored and a new mid point of the remaining values is calculated and the function is recusively called.

### Visual Examples
![image](https://github.com/JusDooEt/Binary-Search/assets/152052216/29b6bb99-a8c3-4017-9a2d-d6509fb09b31)
![image](https://github.com/JusDooEt/Binary-Search/assets/152052216/841441e0-9a9c-469e-8687-8d3e90abddcd)
![image](https://github.com/JusDooEt/Binary-Search/assets/152052216/7f5977f6-369c-483b-8ec1-5e7220d993a3)


## Credit
- Images: [https://www.geeksforgeeks.org/binary-search/](https://www.geeksforgeeks.org/binary-search/)
- Concept: Dennis Rainey, Saddleback College, Mission Viejo
