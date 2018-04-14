#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
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
   scanf("%lf", &en);              // scanf("%ld", &en);
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

void despatch() {
   long en;
   char desp[30];
   printf("Enter enrollment number\n");
   scanf("%ld", &en);
   switch (en) {
      case 176000100: strcpy(desp, "Due to despatch"); break;
      case 176000101: strcpy(desp, "Despatch"); break;
      case 176000102: strcpy(desp, "Due to despatch"); break;
      case 176000103: strcpy(desp, "Due to despatch"); break;
      case 176000104: strcpy(desp, "Despatch"); break;
      case 176000105: strcpy(desp, "Due to despatch"); break;
      case 176000106: strcpy(desp, "Despatch"); break;
   }
   printf("Your despatch %s\n", desp);
}

void fee() {
   printf("First Semister fee is 4000\n");
   printf("Second Semister fee is 5000\n");
   printf("Third Semister fee is 6000\n");
   printf("Forth Semister fee is 7000\n");
   printf("Fifth Semister fee is 8000\n");
   printf("Sixth Semister fee is 9000\n");
}

void theory() {
   char batch[7];
   printf("Enter batch number : \n");
   scanf("%s", batch);
   printf("C.Code\tTimings\tFEB\tMAR\tAPR\tMAY\n");
   if (strcmp(batch, "B2T1")==0) {
      printf("MCS-011\t3-5pm\t12,16,19,23,26\tXXXXXX\tXXXXXX\tXXXXXX\n");
      printf("MCS-012\t10-12pm\t13,15,20,22,27\t6,13,20\tXXXXXX\tXXXXXX\n");
      printf("MCS-013\t10-12pm\tXXXXXX\t27,28,29\tXXXXXX\tXXXXXX\n");
      printf("MCS-015\t3-5pm\t12,16,19,23,26\tXXXXXX\tXXXXXX\tXXXXXX\n");
      printf("ECO-02\t3-5pm\tXXXXXX\t12,16,19,23,26\tXXXXXX\tXXXXXX\n");
   } else if (strcmp(batch, "B2T2")==0) {
      printf("MCS-011\t8-10am\t11,17,18,24,25\tXXXXXX\tXXXXXX\tXXXXXX\n");
      printf("MCS-012\t8-10am\tXXXXXX\t3,4,10,11,17,18,24,25\tXXXXXX\tXXXXXX\n");
      printf("MCS-013\t1:30-3:30pm\tXXXXXX\t18,24,25\tXXXXXX\tXXXXXX\n");
      printf("MCS-015\t1:30-3:30pm\tXXXXXX\t10,11\tXXXXXX\tXXXXXX\n");
      printf("ECO-02\t1:30-3:30pm\t11,17,18,24,25\tXXXXXX\tXXXXXX\tXXXXXX\n");
   }
}

void practical() {
   char batch[7];
   printf("Enter batch number : ");
   scanf("%s", batch);
   printf("C.Code\tTimings\tFEB\tMAR\tAPR\tMAY\n");
   if (strcmp(batch, "B2T1")==0) {
      printf("BCSL-021\t7-10am\t13,15,20,22,27\t6,13,20,21,27\tXXXXXX\tXXXXXX\n");
      printf("BCSL-022\t7-10am\tXXXXXX\tXXXXXX\t2,4,9,11,16,18,23,25,30\t2\n");
   } else if (strcmp(batch, "B2T2")==0) {
      printf("BCSL-021\t10-1pm\t11,17,18,24,25\t3,4,10,11,17\tXXXXXX\tXXXXXX\n");
      printf("BCSL-022\t10-1pm\tXXXXXX\t18,24,25,31\t1,7,8,14,15,21\tXXXXXX\n");
   }
}

void assignment() {
   printf("Date\tTimings\n");
   printf("21-4-2018\t10-1pm\n");
}

void changeAddress() {
   char add[80];  //="Palam Extension Ramphal Chowk\nNew Delhi - 110077";
   char ch;
   FILE *fp;
   fp=fopen("address.dat", "r+b");
   if (fp==NULL) {
      printf("File not found\n");
      exit(1);
   }
   fseek(fp, 0, SEEK_SET);
   fflush(stdin);
   fscanf(fp, "%s", add);
   printf("Present Correspondence Address %s\n", add);
   printf("\nIf you change address (y/n) : ");
   scanf("%c", &ch);
   if (ch=='y') {
      printf("Write your Address : \n");
      scanf("%s", add);
      fprintf(fp, "%s", add);
      printf("\nYour Address will be updated\n");
   }
   fclose(fp);
}

void queries() {
   printf("1. What is Academic Schedule ?\n");
   printf("Ans. Admission to various programmes of the University are open as per the Academic Calendar. The admission announcements are widely publicised through national, regional media and IGNOU Web Site:- www.ignou.ac.in\n");
   printf("2. What is an auto generated Control Number ?\n");
   printf("Ans. An auto generated Control Number is allotted provisionally after submission of online application form.\n");
}
