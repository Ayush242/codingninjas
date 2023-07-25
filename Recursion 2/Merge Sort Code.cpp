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
