#include <stdio.h>
int main(){
    int array[5] = {1, 3, 5, 7, 9}, flag = 0;
    	for(int i = 0; i < 5; i++){
	        if(array[i] % 2 == 0){
		        printf("So chan la: %d\n", array[i]);
		        flag = 1;
		        } 
		    }
    	if(flag == 0){
	        printf("Khong co so chan nao");
	    }
    return 0;
}
