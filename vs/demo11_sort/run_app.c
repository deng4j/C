#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一.冒泡排序法
void bubbleSort(int arr[], int len);
//二.选择排序
void selectionSort(int arr[],int len);
//三.插入排序
void insertionSort(int arr[], int len);
//四.希尔排序
void shell_sort(int arr[], int len);
//五.快排
void quick_sort(int arr[], int len);

int main() {
	int arr[] = {10,5,6,4,3,2,7,1,9,8};
	int len = sizeof(arr) / sizeof(arr[0]);
	quick_sort(arr,len);

	for (int i = 0; i < len; i++)
	{
		printf(" %d", arr[i]);

	}
}


void swap(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}
void quick_sort_recursive(int arr[], int start, int end) {
	if (start >= end)
		return;
	int mid = arr[end];
	int left = start, right = end - 1;
	while (left < right) {
		while (arr[left] < mid && left < right)
			left++;
		while (arr[right] >= mid && left < right)
			right--;
		swap(&arr[left], &arr[right]);
	}
	if (arr[left] >= arr[end])
		swap(&arr[left], &arr[end]);
	else
		left++;
	if (left)
		quick_sort_recursive(arr, start, left - 1);
	quick_sort_recursive(arr, left + 1, end);
}
void quick_sort(int arr[], int len) {
	quick_sort_recursive(arr, 0, len - 1);
}



void shell_sort(int arr[], int len) {
	int gap=0, i, j;
	int temp;
	for (gap = len >> 1; gap > 0 ; gap = gap >> 1)
	{
		for ( i = gap; i < len; i++)
		{
			temp = arr[i];
			for ( j = i-gap; j >= 0&&arr[j]>temp; j-=gap)
			{
				arr[j + gap] = arr[j];
			}
			arr[j + gap] = temp;
		}
	}
}

void insertionSort(int arr[], int len) {
	int i, j, temp;
	for (int  i = 1; i < len; i++)
	{
		temp = arr[i];
		//在已排序序列中从后向前扫描，找到相应位置并插入
		for (j=i ; j >0 && arr[j-1] > temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}

void selectionSort(int arr[], int len) {
	int i, j, temp;

	for (int i = 0; i < len-1; i++)
	{	
		//默认第一个是最小的
		int min = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[j]<arr[min])
			{
				min = j;
			}
		}
		//如果当前索引不等于最小索引，互换位置
		if (min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}


}

void bubbleSort(int arr[],int len) {
	int i, j, temp;

	//交换len-1趟
	for (int i = 0; i < len-1; i++)
	{	
		//后面的数字在前面趟的时候已经交换过了，所以减去i
		for (int j = 0; j < len-1-i; j++)
		{
			if (arr[j] > arr[j+1]) {
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			
		}
	}

}