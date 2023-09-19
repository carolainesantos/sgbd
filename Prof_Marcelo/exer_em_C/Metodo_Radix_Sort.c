	 
/* Aplicação de Ordenação Radix Sort */ 
	
	#include <stdio.h>
	
	int encontrarMax(int arr[], int n) { 																		
	    int max = arr[0];				 
	    for (int i = 1; i < n; i++) {   
	        if (arr[i] > max) {
	            max = arr[i];	
	        }
	    }
	    return max;
	}
	
	                
	void radixSort(int arr[], int n) {
	    int max = encontrarMax(arr, n); 
	
	    for (int exp = 1; max / exp > 0; exp *= 10) {
	        int output[n]; 
	        int count[10] = {0}; 
	        	for (int i = 0; i < n; i++) {
	            	count[(arr[i] / exp) % 10]++;
	        	}
	
	        for (int i = 1; i < 10; i++) {
	            count[i] += count[i - 1];
	        }
	
	        for (int i = n - 1; i >= 0; i--) {
	            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
	            count[(arr[i] / exp) % 10]--;
	        }
	
	        for (int i = 0; i < n; i++) {
	            arr[i] = output[i];
	        }
	    }
	}
	
	int main() {
		system("chcp 65001"); 
		printf("\n\t  Exemplo de Ordenação");
		printf("\n\t\t Radix Sort\n\n");
		
	    int arr[] = {1000, 170, 45, 15, 75, 90, 802, 24, 2, 66, 99};
	    int n = sizeof(arr) / sizeof(arr[0]);
	
	    printf("\n\tArray antes da ordenação:\n\n");
	    printf(" \e[31;1m");
	    for (int i = 0; i < n; i++) {
	        printf("%d ", arr[i]);
	    }
	        printf("\033[0m");
	
	    radixSort(arr, n);
	
	    printf("\n\n\n\tArray após a ordenação:\n\n");
	    printf(" \e[32;1m");
	    for (int i = 0; i < n; i++) {
	        printf("%d ", arr[i]);
	    }
			printf("\033[0m");
	    return 0;
	}
