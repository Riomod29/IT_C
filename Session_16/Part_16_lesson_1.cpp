#include <stdio.h>

int main (){
	int var = 10;
	int *ptr = &var;
	
	printf("Gia tri cua bien var: %d\n", var); //%d được sử dụng để in giá trị của biến var.
	printf("Dia chi cua bien var: %p\n", (void*)&var); //%p được sử dụng để in địa chỉ của biến var.
	
	printf("Gia tri cua bien var (thong qua con tro): %d\n", *ptr);
	printf("Gia tri cua bien var (thong qua con tro): %p\n", (void*)ptr);
	
	return 0;
}

/*
Địa chỉ này được ép kiểu về (void*) để đảm bảo rằng nó được in đúng định dạng.
Kết quả đầu ra sẽ hiển thị giá trị của biến var và địa chỉ của nó trong bộ nhớ.
*/ 