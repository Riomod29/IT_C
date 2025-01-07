/*
Khai báo và gán giá trị cho hai biến số nguyên bất kỳ và một biến kết quả,
xây dựng hàm sử dụng con trỏ để tính tổng hai số nguyên và lưu giá trị vào biến kết quả.
Gọi hàm và in biến kết quả để kiểm tra.
*/

#include <stdio.h>
#include <stdlib.h>

// Ham tinh tong hai so nguyen su dung con tro
void calculateSum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
	system("color 2");
    int num1 = 10; // Ban co the thay doi gia tri nay thanh bat ky so nguyen nao
    int num2 = 20; // Ban co the thay doi gia tri nay thanh bat ky so nguyen nao
    int sum;

    // Goi ham de tinh tong
    calculateSum(&num1, &num2, &sum);

    // In ket qua
    printf("Tong cua %d va %d la %d\n", num1, num2, sum);

}