#include <stdio.h>
#include <conio.h>
void main() {
   int choice;
   char ch='n';
   clrscr();
   do {
      printf("1) Student Information\n");
      printf("2) Course Material Despatch Status\n");
      printf("3) Fee Status (Paid or Due for payment)\n");
      printf("4) Time Table for Theory Counselling\n");
      printf("5) Time Table for Practical Counselling\n");
      printf("6) Assignment Submission Schedules\n");
      printf("7) Change of the Correspondence Address\n");
      printf("8) General Queries\n");
      printf("9) Quit\n");
      printf("Enter your choice : \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:  studentInfo(); break;
         case 2:  despatch(); break;
         case 3:  fee(); break;
         case 4:  theory(); break;
         case 5:  practical(); break;
         case 6:  assignment(); break;
         case 7:  changeAddress(); break;
         case 8:  queries(); break;
         case 9:  exit(0); break;
         default: ch='y'; clrscr();
      }
   } while(ch=='y');
}
