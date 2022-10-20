#include <stdio.h>
#include <stdlib.h>

int binarysearch_iter(int list[], int searchnum, int right) {
	int tleft = 0, tright = right;
	int return_index = -1;
	int middle;
	while(tleft <= tright) {
		middle = (tleft+tright) / 2;
		if(list[middle] == searchnum) {
			return_index = middle;
			break;
		}
		else {
			if(list[middle] > searchnum) {
				tright = middle-1;
			}
			else {
				tleft = middle+1;
			}
		}
	}
	
	return return_index;
}

int binarysearch_recur(int list[], int searchnum, int left, int right) {
	if(left <= right) {
		int middle = (left + right)/2;
		if(list[middle] == searchnum) {
			return middle;
		}
		else {
			if(list[middle] > searchnum) {
				return binarysearch_recur(list, searchnum, left, middle-1);
			}
			else {
				return binarysearch_recur(list, searchnum, middle+1, right);
			}
		}
	}
	return -1;
}

int main() {
	int a_list[] = {1, 2, 3, 4, 5, 6, 8, 14, 17, 18, 22, 29, 32, 37};
	printf("search 1 %d\n", binarysearch_iter(a_list, 1, (sizeof(a_list)/sizeof(int))-1));
	printf("search 2 %d\n", binarysearch_iter(a_list, 2, (sizeof(a_list)/sizeof(int))-1));
	printf("search 37 %d\n", binarysearch_iter(a_list, 37, (sizeof(a_list)/sizeof(int))-1));
	printf("search 22 %d\n", binarysearch_iter(a_list, 22, (sizeof(a_list)/sizeof(int))-1));
	printf("search 68 %d\n\n", binarysearch_iter(a_list, 68, (sizeof(a_list)/sizeof(int))-1));
	
	printf("search 1 %d\n", binarysearch_recur(a_list, 1, 0, (sizeof(a_list)/sizeof(int))-1));
	printf("search 2 %d\n", binarysearch_recur(a_list, 2, 0, (sizeof(a_list)/sizeof(int))-1));
	printf("search 37 %d\n", binarysearch_recur(a_list, 37, 0, (sizeof(a_list)/sizeof(int))-1));
	printf("search 22 %d\n", binarysearch_recur(a_list, 22, 0, (sizeof(a_list)/sizeof(int))-1));
	printf("search 68 %d\n\n", binarysearch_recur(a_list, 68, 0, (sizeof(a_list)/sizeof(int))-1));
	
	system("PAUSE");
	return 0;	
}


