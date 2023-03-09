#include <stdio.h>

void merge(int* arr, int l, int m, int r) {
	int sizel = m - l;
	int sizer = r - m;
	
	int arrl[sizel], arrr[sizer];
	for (int i = 0; i < sizel; i++) {
		arrl[i] = arr[l + i];
	}
	for (int i = 0; i < sizer; i++) {
		arrr[i] = arr[m + i];
	}
	
	int i = 0, j = 0, k = l;
	while (i < sizel && j < sizer) {
		if (arrl[i] <= arrr[j]){
			arr[k] = arrl[i];
			i++;
		}
		else {
			arr[k] = arrr[j];
			j++;
		}
		k++;
	}
	
	while (i < sizel) {
		arr[k] = arrl[i];
		i++; k++;
	}
	while (j < sizer) {
		arr[k] = arrr[j];
		j++; k++;
	}
}

void sort(int* arr, int l, int r) {
	if (r - l == 1) return;
	
	int m = (l+r)/2;
	
	sort(arr, l, m);
	sort(arr, m, r);
	
	merge(arr, l, m, r);
}

int main(void) {
	int arr[] = {5, 3, 2, 6, 7, 9, 8, 1};
	
	sort(arr, 0, 8);
	for (int i = 0; i < 8; i++) printf("%d ", arr[i]);
	printf("\n");
	
	return 0;
}
