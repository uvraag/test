#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void studentInfo();
void despatch();
void fee();
void theory();
void practical();
void assignment();
void changeAddress();
void queries();
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
      printf("9) Quit\n\n");
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

void studentInfo() {
   long en;
   int yos, fee;
   char nop[5],
      batch[7],
      dur[20],
      nosc[30],
      norc[30];
   printf("\nEnter Enrollment Number : \n", );
   scanf("%lf", &en);
   switch (en) {
      case 176000100:   yos=1;
         strcpy(nop, "BCA");
         strcpy(batch, "B2T1");
         strcpy(dur, "5 years only");
         strcpy(nosc, "TSL Institute");
         strcpy(norc, "Ramphal Chowk");
         fee=1000;
         break;
      case 176000101:   yos=2;
         strcpy(nop, "BCA");
         strcpy(batch, "B2T1");
         strcpy(dur, "4 years only");
         strcpy(nosc, "TSL Institute");
         strcpy(norc, "Tilak Nagar");
         fee=1500;
         break;
      case 176000102:   yos=3;
         strcpy(nop, "BCA");
         strcpy(batch, "B2T2");
         strcpy(dur, "3 years only");
         strcpy(nosc, "KML Institute");
         strcpy(norc, "Dwarka Sector 9");
         fee=2000;
         break;
      default: printf("You Entered Wrong enrollment number\nTry Again\n");
         exit(0);
   }

   printf("Year of Study is %d\n", yos);
   printf("Programme name is %s\n", nop);
   printf("Your batch is %s\n", batch);
   printf("Duration : %s\n", dur);
   printf("Your Study Centre is %s\n", nosc);
   printf("Your Regional Centre is %s\n", nosc);
   printf("Due balance is %d\n", fee);
}
