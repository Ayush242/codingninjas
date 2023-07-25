// You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.


// You must sort the elements between 'l' and 'r'.


// Note:
// Change in the input array itself. So no need to return or print anything.
// Example:
// Input: ‘N’ = 7,
// 'ARR' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

// Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
// Input format :
// The first line contains an integer <em>**'N'**</em> representing the size of the array/list.

// The second line contains 'N' single space-separated integers representing the elements in the array/list.
// Output format :
// You don't need to return anything. In the output, you will see the array after you do the modification.
// Sample Input 1:
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28
// Explanation of Sample Output 1:
// After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
// Sample Input 2:
// 5
// 9 3 6 2 0
// Sample Output 2:
// 0 2 3 6 9
// Explanation of Sample Output 2:
// After applying 'merge sort' on the input array, the output is [0 2 3 6 9].
// Constraints :
// 1 <= N <= 10^3
// 0 <= ARR[i] <= 10^9


void merge(int a[],int start, int end) {
    if(start>=end) return;
    int mid = (start + end)/2;
    merge(a, start,mid);
    merge(a, mid+1,end);
    int size  = end -start +1;
    int arr[size];
    int i= start;
    int j = mid + 1;
    int m = 0;
    while(i<=mid && j<=end){
        if(a[i]<a[j]){
            arr[m++] = a[i++];
        }
        else{
            arr[m++] = a[j++];
        }
    }
    while(i<=mid) arr[m++] = a[i++];
    while(j<=end) arr[m++] = a[j++];
    m =0;
    for(int i= start;i<=end;i++)
        a[i] = arr[m++];
}
void mergeSort(int input[], int size){
	// Write your code here
    if(size<=1) return;
    merge(input, 0, size-1);    

}



// EDITORIAL
/*
	Time Complexity : O(n * log(n))
	Space Complexity : O(n)
	where n is size of input array
*/
void merge(vector<int>& arr, int l, int m, int r)
{
	// Stores the number of elements in the first half
	int num1 = m - l + 1;
	// Stores the number of elements in the second half
	int num2 = r - m;
	// Creating two temporary arrays of size
	// 'num1' and 'num2' respectively.
	vector<int> L(num1), R(num2);
	// Copy data to temporary arrays
	for(int i = 0; i < num1; ++i) {
		L[i] = arr[l + i];
	}
	for(int j = 0; j < num2; ++j) {
		R[j] = arr[m + 1 + j];
	}
	// Merge the temporary arrays back into
	// arr[l ... r]
	int i = 0; // Initial index of the first subarray
	int j = 0; // Initial index of the second subarray
	int k = l; // Initial index of the merged subarray
	while (i < num1 && j < num2)
	{
	// If the current element in array 'L'
	// is less than current element in array 'R'
	// assign the current element of 'arr' to current
	// element of 'L' and increase index 'k' and 'i'.
		if (L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}
		// assign the current element of 'arr' to current
		// element of 'R' and increase index 'k' and 'j'.
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
		}
		// Copy the remaining elements of array 'L' to array
		// 'arr'
		while (i < num1)
		{
			arr[k] = L[i];
			i++;
			k++;
		}
	// Copy the remaining elements of array 'R' to array
	// 'arr'
	while (j < num2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(vector<int>& arr, int l, int r) {
// This means that there is atleast one element
	if(l < r) {
	// Finding the mid point
	int m = (l + r) / 2;
	// Sorting the first and second halves
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);
	// Merging the two sorted arrays
	merge(arr, l, m, r);
	}
}
