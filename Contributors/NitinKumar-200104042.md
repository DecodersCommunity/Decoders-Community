## NITIN KUMAR
- Batch: 2020-2024 {CSE}
- Github Profile: https://github.com/Nitin73290
- Linkedin Profile: {https://www.linkedin.com/in/nitin-kumar-77067321a/}

                                            PEGION HOLE ALGORITHM

/* C program to implement Pigeonhole Sort */
#include <bits/stdc++.h>
using namespace std;

/* Sorts the array using pigeonhole algorithm */
void pigeonholeSort(int arr[], int n)
{
	// Find minimum and maximum values in arr[]
	int min = arr[0], max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	int range = max - min + 1;

	int index = 0;
	for (int i = 0; i < range; i++)
	{
	vector<int>::iterator it;
	for (it = holes[i].begin(); it != holes[i].end(); ++it)
			arr[index++] = *it;
	}
}

int main()
{
	int arr[] = {8, 3, 2, 7, 4, 6, 8};
	int n = sizeof(arr)/sizeof(arr[0]);

	pigeonholeSort(arr, n);

	printf("Sorted order is : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
