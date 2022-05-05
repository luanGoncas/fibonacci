#include <stdio.h>
#include <stdlib.h>

void minmax(int *v, int n, int *min, int *max){
	min = &v[0];
	max = &v[0];

	for(int i = 1; i < n; i++){
		if(v[i] > *max){
			max = &v[i];
		}
		if(v[i] < *min){
			min = &v[i];
		}
	}
}