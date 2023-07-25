// Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.


// Note :
// Make changes in the input array itself.
// Input format :
// Line 1 : Integer N i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Sample Input 1 :
// 6 
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 1 2 3 5 7
// Sample Output 2 :
// 1 2 3 5 7 
// Constraints :
// 1 <= N <= 10^3
// 0 <= input[i] <= 10^9


void qs(int arr[],int start,int end){
    if(start>=end) return;
    int count = 0;
    for(int i =start+1;i<=end;i++){
        if(arr[i]<arr[start]) count++;
    }
    count += start;
    int temp = arr[count];
    arr[count] = arr[start];
    arr[start] = temp;

    int i=start;
    int j= end;
    while(i <count && j>count){
        
        if(arr[i]<arr[count]) i++;
        else if(arr[j]>=arr[count]) j--;
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    qs(arr,start,count-1);
    qs(arr,count+1,end);
    
}

void quickSort(int input[], int size) {
    qs(input,0,size -1);
}


// EDITORIAL
/*
Time Complexity : O('N' * log('N'))
Space Complexity : O(log('N'))
where 'N' is size of input array
*/
#include <iostream>
using namespace std;
int partitionArray(int input[], int start, int end)
{
// Chose pivot
int pivot = input[start];
// Count elements smaller than pivot and swap
int count = 0;
for (int i = start + 1; i <= end; i++)
{
if (input[i] <= pivot)
{
count++;
}
}
int pivotIndex = start + count;
int temp = input[start];
input[start] = input[pivotIndex];
input[pivotIndex] = temp;
// ensure left half contains elements smaller than pivot
// and right half larger
int i = start, j = end;
while (i <= pivotIndex && j >= pivotIndex)
{
while (i <= pivotIndex && input[i] <= pivot)
{
i++;
}
while (j >= pivotIndex && input[j] > pivot)
{
j--;
}
if (i < pivotIndex && j > pivotIndex)
{
temp = input[i];
input[i] = input[j];
input[j] = temp;
i++;
j--;
}
}
return pivotIndex;
}
void quickSort(int input[], int start, int end)
{
if (start >= end)
{
return;
}
int pivotIndex = partitionArray(input, start, end);
quickSort(input, start, pivotIndex - 1);
quickSort(input, pivotIndex + 1, end);
}
