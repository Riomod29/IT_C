#include <stdio.h>
int main (){
	float cash;
    int num;

    printf ("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n");
    printf ("1. USD to VND\n");
    printf ("2. EUR to VND\n");
    printf ("3. GBP to VND\n");
    printf ("4. JPY to VND\n");
    printf ("5. VND to USD\n");
    printf ("6. VND to EUR\n");
    printf ("7. VND to GBP\n");
    printf ("8. VND to JPY\n");
    printf ("Nhap don vi tien te ban muon chuyen doi (1-8): ");
    scanf ("%d", &num);
    printf ("Hay nhap so tien ban muon chuyen doi: ");
    scanf ("%f", &cash);
    switch (num)
    {
    case 1:
        cash= cash * 23500;
        printf ("Ty gia da chuyen doi USD to VND la: %.0f VND\n", cash);
        break;
    case 2:
        cash= cash * 25000;
        printf ("Ty gia da chuyen doi EUR to VND la: %.0fVND\n", cash);
        break;
    case 3:
        cash= cash * 28000;
        printf ("Ty gia da chuyen doi GBP to VND la: %.0fVND\n", cash);
        break;
    case 4:
        cash= cash * 180;
        printf ("Ty gia da chuyen doi JBY to VND la: %.0fVND\n", cash);
        break;
    case 5:
        cash= cash / 23500;
        printf ("Ty gia da chuyen doi VND to USD la: %.0fUSD\n", cash);
        break;
    case 6:
        cash= cash / 25000;
        printf ("Ty gia da chuyen doi VND to EUR la: %.0fEUR\n", cash);
        break;
    case 7:
        cash= cash / 28000;
        printf ("Ty gia da chuyen doi VND to GBP la: %.0fGBP\n", cash);
        break;
    case 8:
        cash= cash /180;
        printf ("Ty gia da chuyen doi VND to JPY la: %.0fJPY\n", cash);
        break;
    default:
        printf ("Vui long chon dung don vi tien te ban muon chuyen doi (1-8)!");
        break;
    }
	
	return 0;
}