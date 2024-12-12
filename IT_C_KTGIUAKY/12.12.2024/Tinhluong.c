#include <stdio.h>

int main() {
    int soGioLamViec;
    double mucLuongTheoGio, luongCoBan, phuCap = 0.0, tongLuong;

    // B1: Nhập số giờ làm việc trong tháng và mức lương theo giờ
	    printf("Nhap so gio lam viec trong thang: ");
	    scanf("%d", &soGioLamViec);
	    printf("Nhap muc luong theo gio: ");
	    scanf("%lf", &mucLuongTheoGio);

    // B2: Tính lương cơ bản
    	luongCoBan = soGioLamViec * mucLuongTheoGio;

    // B3: Nếu số giờ làm việc > 160, tính phụ cấp 10%
	    if (soGioLamViec > 160) {
		phuCap = luongCoBan * 0.1;
	    }

    // B4: Tính tổng tiền lương
    	tongLuong = luongCoBan + phuCap;

    // In ra kết quả
	    printf("Luong co ban: %.2f\n", luongCoBan);
	    printf("Phu cap: %.2f\n", phuCap);
	    printf("Tong luong: %.2f\n", tongLuong);
	
	    return 0;
}
