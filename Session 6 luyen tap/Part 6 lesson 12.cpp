#include <stdio.h>

// Hàm xác định cung hoàng đạo dựa trên ngày và tháng sinh
const char* zodiacSign(int day, int month) {
    if ((day >= 21 && month == 3) || (day <= 20 && month == 4)) {
        return "Bach Duong"; // Aries
    } else if ((day >= 21 && month == 4) || (day <= 20 && month == 5)) {
        return "Kim Nguu"; // Taurus
    } else if ((day >= 21 && month == 5) || (day <= 21 && month == 6)) {
        return "Song Tu"; // Gemini
    } else if ((day >= 22 && month == 6) || (day <= 22 && month == 7)) {
        return "Cu Giai"; // Cancer
    } else if ((day >= 23 && month == 7) || (day <= 22 && month == 8)) {
        return "Su Tu"; // Leo
    } else if ((day >= 23 && month == 8) || (day <= 22 && month == 9)) {
        return "Xu Nu"; // Virgo
    } else if ((day >= 23 && month == 9) || (day <= 23 && month == 10)) {
        return "Thien Binh"; // Libra
    } else if ((day >= 24 && month == 10) || (day <= 22 && month == 11)) {
        return "Bo Cap"; // Scorpio
    } else if ((day >= 23 && month == 11) || (day <= 21 && month == 12)) {
        return "Nhan Ma"; // Sagittarius
    } else if ((day >= 22 && month == 12) || (day <= 19 && month == 1)) {
        return "Ma Ket"; // Capricorn
    } else if ((day >= 20 && month == 1) || (day <= 18 && month == 2)) {
        return "Bao Binh"; // Aquarius
    } else if ((day >= 19 && month == 2) || (day <= 20 && month == 3)) {
        return "Song Ngu"; // Pisces
    } else {
        return "Ngay hoac thang nhap khong hop le";
    }
}

int main() {
    int day, month;

    // Nhập ngày sinh và tháng sinh
    printf("Nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Nhap thang sinh: ");
    scanf("%d", &month);

    // In ra cung hoàng đạo
    const char* zodiac = zodiacSign(day, month);
    printf("Cung hoang dao cua ban la: %s\n", zodiac);

    return 0;
}
