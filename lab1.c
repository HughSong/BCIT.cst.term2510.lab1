#include<stdio.h>
#include<stddef.h>
/*declaration*/
#define CHECK(EXPR) printf("%s ... %s\n", (EXPR) ? "passed" : "FAILED", #EXPR);
int arr_min();
size_t arr_index_of_first_min();
size_t arr_index_of_last_min();
int arr_count_min();

/*my main function*/
int main(void)
{
	int a[] = {2,5,2,4,2,7};
	int b[] = {5,5,1,5,6,7,1,9,1};
	int c[] = {2,0,3,4,5,0,0,0,9};
	CHECK(arr_min(a,6)==2);
	CHECK(arr_index_of_first_min(a,6)==0);
	CHECK(arr_index_of_last_min(a,6)==4);
	CHECK(arr_count_min(a,6)==3);
	
	CHECK(arr_min(b,9)==1);
	CHECK(arr_index_of_first_min(b,9)==2);
	CHECK(arr_index_of_last_min(b,9)==8);
	CHECK(arr_count_min(b,9)==3);
	
	CHECK(arr_min(c,9)==0);
	CHECK(arr_index_of_first_min(c,9)==1);
	CHECK(arr_index_of_last_min(c,9)==7);
	CHECK(arr_count_min(c,9)==4);
return 0;
}

/*return the value of the smallest interger*/
int arr_min(const int a[], size_t n)
{
	size_t i;
	int min = a[0];
	for(i = 0; i < n; i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}

/*return the index of the smallest interger in the array (its first occurrence) */
size_t arr_index_of_first_min(const int a[], size_t n)
{
	size_t i;
	int index;
	int min = arr_min(a,n);
	int count = -1;
	for(i = 0; i < n; i++)
	{
		if(a[i] == min && count == -1)
		{
			index = i;
			count++;
			}
	}
		
	return index;
}

/*return the index of the smallest interger in the array (its last occurrence) */
size_t arr_index_of_last_min(const int a[], size_t n)
{
	size_t i;
	int index;
	int min = arr_min(a,n);
	for(i = 0; i < n; i++)
		if(a[i] == min)
			index = i;
		
		
	return index;
}

/*return the number of times the minimum value occurs in the integer array */
int arr_count_min(const int a[], size_t n)
{
	size_t i;
	int min = arr_min(a,n);
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] == min)
		{
			count++;
		}
	}
	return count;
}










