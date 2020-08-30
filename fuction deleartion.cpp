/// Sorting

void swap(int* xp, int* yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// Function to perform Selection Sort 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n - 1; i++) { 

		// Find the minimum element in unsorted array 
		min_idx = i; 
		for (j = i + 1; j < n; j++) 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 

		// Swap the found minimum element 
		// with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 


//MINIMUM in array
void min(int size,int array[100])
{
    int array[100], minimum, size, c, location = 1;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &size);
   
    printf("Enter %d integers\n", size);
   
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
   
    minimum = array[0];
   
    for (c = 1; c < size; c++)
    {
        if (array[c] < minimum)
        {
           minimum = array[c];
           location = c+1;
        }
    }
   
    printf("Minimum element is present at location %d and its value is %d.\n", location, minimum);
    return min;
    
	
	//Median
	
	void Array_sort(int *array , int n)
{ 
    // declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

    printf("\nThe array after sorting is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\narray_1[%d] : %d",i,array[i]);
    }
}

// function to calculate the median of the array
float Find_median(int array[] , int n)
{
    float median=0;
    
    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];
    
    return median;
}
// MEAN

void main(int n, num[100] ) {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
    
// MAX
void max(int arr[], int n) 
{ 
	int i; 
	
	// Initialize maximum element 
	int max = arr[0]; 

	// Traverse array elements from second and 
	// compare every element with current max 
	for (i = 1; i < n; i++) 
		if (arr[i] > max) 
			max = arr[i]; 

	return max; 
} 

//MODE

void mode(int a[], int n) 
{ 
	// The output array b[] will 
	// have sorted array 
	int b[n]; 

	// variable to store max of 
	// input array which will 
	// to have size of count array 
	int max = *max_element(a, a + n); 

	// auxiliary(count) array to 
	// store count. Initialize 
	// count array as 0. Size 
	// of count array will be 
	// equal to (max + 1). 
	int t = max + 1; 
	int count[t]; 
	for (int i = 0; i < t; i++) 
		count[i] = 0; 

	// Store count of each element 
	// of input array 
	for (int i = 0; i < n; i++) 
		count[a[i]]++; 

	// mode is the index with maximum count 
	int mode = 0; 
	int k = count[0]; 
	for (int i = 1; i < t; i++) { 
		if (count[i] > k) { 
			k = count[i]; 
			mode = i; 
		} 
	} 

	cout << "mode = " << mode; 
} 

