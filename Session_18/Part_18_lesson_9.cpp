#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sv {
	int ID;
	char name[20];
	int age;
	char phoneNumber[10];
};

void swap(struct sv *a, struct sv *b) {
	struct sv temp = *a;
	*a = *b;
	*b = temp;
}

void printList(struct sv studentList[], int *size) {
	printf("\n================Danh sach sinh vien================\n");
	printf("+-----+--------------------+-----+----------------+\n");
	printf("|%-5s|%-20s|%-5s|%-16s|\n", "ID", "Ho va ten", "Tuoi", "SDT");
	printf("+-----+--------------------+-----+----------------+\n");
	for(int i = 0; i < *size; i++) {
		printf("|%-5d|%-20s|%-5d|%-16s|\n", studentList[i].ID, studentList[i].name, studentList[i].age, studentList[i].phoneNumber);
		printf("+-----+--------------------+-----+----------------+\n");
	}
}

void addStudent(struct sv studentList[], int *size) {
	struct sv newStudent;
	newStudent.ID = *size + 1;
	printf("Nhap ho va ten sinh vien muon them: ");
	scanf("%s", newStudent.name);
	printf("Nhap tuoi sinh vien muon them: ");
	scanf("%d", &newStudent.age);
	printf("Nhap so dien thoai sinh vien muon them: ");
	scanf("%s", newStudent.phoneNumber);
	studentList[*size] = newStudent;
	(*size)++;
	printf("Them sinh vien thanh cong.\n");
}

void editStudent(struct sv studentList[], int *size) {
	int ID;
	printf("Nhap ID sinh vien can sua: ");
	scanf("%d", &ID);
	if (ID < 1 || ID > *size) {
		printf("ID khong hop le.\n");
		return;
	}
	struct sv *student = &studentList[ID - 1];
	printf("Nhap ho va ten moi cho sinh vien: ");
	scanf("%s", student->name);
	printf("Nhap tuoi moi cho sinh vien: ");
	scanf("%d", &student->age);
	printf("Nhap so dien thoai moi cho sinh vien: ");
	scanf("%s", student->phoneNumber);
	printf("Sua thong tin sinh vien thanh cong.\n");
}

void deleteStudent(struct sv studentList[], int *size, int ID) {
	int flag = 0; //de xem co tim thay sinh vien khong
	for (int i = 0; i < *size; i++) {
		if (studentList[i].ID == ID) {
			flag = 1;
			//dich cac phan tu den phia truoc
			for (int j = i; j < *size - 1; j++) {
				studentList[j] = studentList[j + 1];
			}
			(*size)--; //giam size
			//cap nhap lai ID
			for (int k = 0; k < *size; k++) {
				studentList[k].ID = k + 1;
			}
			printf("Da xoa sinh vien co ID = %d thanh cong.\n", ID);
		}
	}
	if (flag == 0) {
		printf("Khong tim thay sinh vien co ID = %d.\n", ID);
	}
}

void findStudentByID(struct sv studentList[], int *size, int ID) {
			printf("Nhap ID cua sinh vien can tim: ");
			scanf("%d", &ID);
	int flag = 0; //kiem tra xem co sv ko

	for (int i = 0; i < *size; i++) {
		if (studentList[i].ID == ID) {
			flag = 1;
			printf("\nThong tin sinh vien co ID = %d:\n", ID);
			printf("+-----+--------------------+-----+----------------+\n");
			printf("|%-5s|%-20s|%-5s|%-16s|\n", "ID", "Ho va ten", "Tuoi", "SDT");
			printf("+-----+--------------------+-----+----------------+\n");
			printf("|%-5d|%-20s|%-5d|%-16s|\n", studentList[i].ID, studentList[i].name, studentList[i].age,studentList[i].phoneNumber);
			printf("+-----+--------------------+-----+----------------+\n");
			break;
		}
	}
	if (flag == 0) {
		printf("Khong tim thay sinh vien co ID = %d.\n", ID);
	}
}

void sortStudent(struct sv studentList[], int *size) {
	for (int i = 0; i < *size - 1; i++) {
		for (int j = 0; j < *size - i - 1; j++) {
			//so sanh tuoi tang dan
			if(studentList[j].age > studentList[j + 1].age) {
				swap(&studentList[j], &studentList[j + 1]);
				//neu tuoi bang nhau so sanh ten
			} else if(studentList[j].age == studentList[j + 1].age) {
				if(strcmp(studentList[j].name, studentList[j + 1].name) < 0) {
					swap(&studentList[j], &studentList[j + 1]);
				}
			}
			//cap nhap lai ID
			for (int k = 0; k < *size; k++) {
				studentList[k].ID = k + 1;
			}
		}
	}
	printf("Danh sach sinh vien da duoc sap xep.\n");
}

int main() {
	system("color a");
	int choice, size = 0;
	struct sv studentList[50];
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &size);
	for(int i = 0; i < size; i++) {
		studentList[i].ID = i + 1;
		printf("Nhap ho va ten cua sinh vien thu %d: ", i+ 1);
		scanf("%s", studentList[i].name);
		printf("Nhap tuoi cua sinh vien thu %d: ", i+ 1);
		scanf("%d", &studentList[i].age);
		printf("Nhap so dien thoai cua sinh vien thu %d: ", i+ 1);
		scanf("%s", studentList[i].phoneNumber);

	}
	do {
		printf("\n=================Menu=================\n");
		printf("1. Hien thi danh sach sinh vien.\n");
		printf("2. Them sinh vien.\n");
		printf("3. Sua thong tin sinh vien.\n");
		printf("4. Xoa sinh vien.\n");
		printf("5. Tim kiem sinh vien.\n");
		printf("6. Sap xep danh sach sinh vien.\n");
		printf("7. Thoat.\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);

		switch(choice) {
		case 1:
			printList(studentList, &size);
			break;

		case 2:
			addStudent(studentList, &size);
			break;

		case 3:
			editStudent(studentList, &size);
			break;

		case 4:
		{
		    int ID;
		    printf("Nhap ID cua sinh vien can xoa: ");
			scanf("%d", &ID);
			deleteStudent(studentList, &size, ID);
			break;
		}
		
		case 5:
		{
		    int ID;
		    printf("Nhap ID cua sinh vien can tim: ");
			scanf("%d", &ID);
			findStudentByID(studentList, &size, ID);
			break;
		}
		
		case 6:
			sortStudent(studentList, &size);
			break;

		case 7:
			printf("Thoat chuong trinh.\n");
			return 0;
			break;
			
		default:
			printf("Lua chon khong hop le vui long nhap lai.\n");
		}
	} while(choice != 7);

	return 0;
}