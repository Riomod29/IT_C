#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDien;
    long tienDien = 0;

    // Nhập chỉ số cũ và mới
    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    // Kiểm tra tính hợp lệ của chỉ số
    if (chiSoMoi < chiSoCu) {
        printf("Chi so moi khong hop le!\n");
        return 1;
    }

    // Tính số điện tiêu thụ
    soDien = chiSoMoi - chiSoCu;

    // Tính tiền điện theo các mức giá
    if (soDien > 200) {
        tienDien += (soDien - 200) * 30000;
        soDien = 200;
    }
    if (soDien > 150) {
        tienDien += (soDien - 150) * 25000;
        soDien = 150;
    }
    if (soDien > 100) {
        tienDien += (soDien - 100) * 20000;
        soDien = 100;
    }
    if (soDien > 50) {
        tienDien += (soDien - 50) * 15000;
        soDien = 50;
    }
    if (soDien > 0) {
        tienDien += soDien * 10000;
    }

    // Xuất kết quả
    printf("Tien dien phai tra: %ld VND\n", tienDien);

    return 0;
}
