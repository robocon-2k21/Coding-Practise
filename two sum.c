#include<stdio.h>

int* Sum(int *arr, int size, int target);

int main(){

	int array[4] = {2,7,11,15};
	int *index = Sum(array, 4, 9);

	printf("%d, %d \n", index[0], index[1]);

	return 0;
}

int* Sum(int *arr, int size, int target){
	/*int indices[2];*/
	int num1 ;
	int num2 ;
	int i,j;

	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			if(i != j){
				if(arr[i] + arr[j] == target){
					num1 = i;
					num2 = j;
                    return 1;
				}
                    else return 0;

			}
		}
	}

}
