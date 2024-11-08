

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menuC();
void menu();
void introduction();
void adminS();
void Read();
void m();
void ATM();
void BKASH();
void NAGAD();
void Bill_Paper();
void Surprise();
void coustomar();
void Purchase();
void headl();
void headline();
struct Product
{
   int id;
   char name[20];
   int quantity;
   double price;
};
void headline()
{

        printf("\n\n\n\n\t\t\t\t          \t\t\t ***** WELCOME TO SNAPDRAGON SKULL ***** \n");
        printf ("\n\t\t\t\t  \t  ________________________________________________________________________________ \t\t\t\n");
          printf("\n\n\n");

}
void headl()
          {
        printf("\n\t\t\t\t\t\t                         ::    :::::::::::::::::::::::::   ::\n");Sleep(35);
        printf("\t\t\t\t\t\t                       ::    ::                         ::   ::\n");Sleep(50);
        printf("\t\t\t\t\t\t                      ::    ::                            ::   ::\n");Sleep(50);
        printf("\t\t\t\t\t\t                     ::    ::                              ::   ::\n");Sleep(50);
        printf("\t\t\t\t\t\t                   ::    ::                                 ::   ::\n");Sleep(50);
        printf("\t\t\t\t\t\t         ::::::=======================================================::::::\n");Sleep(50);
        printf("\t\t\t\t\t\t           :                                                             :\n");Sleep(50);
        printf("\t\t\t\t\t\t         ::::::======================================================::::::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                     HAPPY SHOPPING                       ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(60);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t          ::  ::                                                          ::\n");Sleep(35);
        printf("\t\t\t\t\t\t            ::::                                                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t               ===========================================================::\n");Sleep(50);
printf("\n\n\n");
          }


void m()
{
       system("cls");
int n,q;

printf ("Enter your rating(1 to 3) :");
scanf("%d",&n);
if(n==1)
{
    printf("\n\t\t  ('-')   *     not good");
}
 else if(n==2)
{
     printf("\n\t\t  (+ - +)    **     good\n");

}
else if(n==3)
{
   printf("\n\t\t (o w o)   ***     very good \n");
}
else
{
   menuC();
}
scanf("%d",&q);

}

void coustomar()
{ system("COLOR E0");
   system("cls");
   headline();
      headl();
   char name[200], email[200], pass1[200], pass2[200];
   int xy;
   printf("\n\tEnter  Name: ");
   scanf("%s", name);
   printf("\tEmail: ");
   scanf("%s", email);
   printf("\tEnter Passward : ");
   scanf("%s", pass1);
   printf("\tEnter Passward : ");
   scanf("%s", pass2);
   if (strcmp(pass1, pass2) == 0){
        system("cls");
        headline();
        printf("\t\t\t\t\t\t                                ::                                             ::\n");
        printf("\t\t\t\t\t\t                                ::                                             ::\n");
        printf("\t\t\t\t\t\t                          ::    ::                                       ::    ::  \n ");
        printf("\t\t\t\t\t\t         ::::::============================================================================::::::\n");
        printf("\t\t\t\t\t\t           :              ::                                             ::                   :\n");
        printf("\t\t\t\t\t\t         ::::::============================================================================::::::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::   |============= | What do you want to do?                  |=============|    ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::   |============= | 01. Do You Want To See the Product List? |=============|    ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::   |============= | 02. Do You Want To Generate Bill?        |=============|    ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::   |============= | 03. Do You Want To Give rating?          |=============|    ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t\t\t          ::  ::                                                                                ::\n");
        printf("\t\t\t\t\t\t            ::::                                                                                ::\n");
        printf("\t\t\t\t\t\t               =================================================================================::\n");

 printf("\n\t\t\t\t\t Enter choice: ");
 scanf("%d", &xy);
 if (xy == 1)
 {
      Readc();
 }
 else if (xy == 2)
 {
 Bill_Paper();
 }
 else
 {
  m();
 }
 }


}

void Surprise()
{
       system("cls");
 srand( time(NULL));

 switch(rand() % 10 == 0)
 {
      case 0:
    printf("\n\n\n\t\t\t(*o*)CONGRATULATIONS! YOU ARE THE LUCKY COSTUMER(*o*)\t\n\n\t\tA SPECIAL GIFT! (.*o*.)\n\t\t  ____(@)_(@)___\n\t\t  !-----|-|----!\n");
    printf("\t\t   |    | |   | \n\t\t   |    | |   | \n\t\t   |____|_|___|\n \n\t\tYOU WILL GET A LUXURY WATCH (-o-)\n\n\n");
     break;
     case 1:
          printf("\n\n\n\t\t\t(*o*)CONGRATULATIONS! YOU ARE THE LUCKY COSTUMER(*o*)\t\n\n ____(@)_(@)___\n !-----|-|----!\n ");
printf(" |    | |   | \n  |    | |   | \n  |____|_|___|\n");
     printf("\t\t(o^-^o)FREE DELIVARY! *O* \n");
     break;
     case 2:
         printf("\n\n\n\t\t\t(*o*)CONGRATULATIONS! YOU ARE THE LUCKY COSTUMER(*o*)\t\n\n ____(@)_(@)___\n !-----|-|----!\n ");
printf(" |    | |   | \n  |    | |   | \n  |____|_|___|\n");
     printf("\t\t(0-0)MONEY! |$|\n");
     break;
     default:
        printf("error");
 }
}
void Bill_Paper()
{
    system("COLOR FC");
   system("cls");
   FILE *f;
   char p_name[20];
   int cho;
   int z;
   printf("Enter your purchase database name: ");
   scanf("%s", p_name);
   f = fopen(p_name, "r");
   if(f == NULL){
       printf("File not found");
       exit(0);
   }
   else
   {
       Surprise();
       printf("\t\t\t============================================\n");
       printf("\t\t\t\tHere is Your Payment Bill\n");
       printf("\t\t\t============================================\n");
       printf("\t\t\tPurchase-Product\t\tPrice\n");
       double total = 0.00;
       int id;
       char name[20];
       int quantity;
       double price;
       while(fscanf(f, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
           printf("\t\t\t%s\t\t\t      %.2lf\n", name, price);
           total += price;
       }
       printf("\t\t\t============================================\n");
       printf("\t\t\tTotal: \t\t\t%.2lf\n", total);

         printf("\n\t\tEnter your choice:\n\t\t<1>Fahimun Islam Lamia\n\t\t<2>Nushera  Tajrin \n\t\t<3>Nushrat  Zahan\n");
       scanf("%d", &cho);
       switch (cho)
       {
       case 1:
           printf("\nYOU GOT 20%% DISCOUNT  : ");
           printf("\t\t\tTotal: \t\t\t%.2lf\n", total=total-total*0.2);
           break;
           case 2:
           printf("\nYOU GOT 40%% DISCOUNT  : ");
           printf("\t\t\tTotal: \t\t\t%.2lf\n", total=total-total*0.4);
           break;
            case 3:
           printf("\nYOU GOT 30%% DISCOUNT  : ");
           printf("\t\t\tTotal: \t\t\t%.2lf\n", total=total-total*0.3);
           break;
           default:
           printf("\n INVALID CHOICE");
       }
      fclose(f);
       int xy;

        printf("Press 1 for ATM\t Press 2 BKASH\t Press 3 for NAGAD \n");
       scanf("%d", &xy);
        switch (xy)
           {
           case 1:
           ATM();
           break;
           case 2:
           BKASH();
           break;
           case 3:
           NAGAD();
           break;
                 }
            m();

   }
}

void Purchase(int arr[20]){
    system ("cls");
     system("COLOR f0");
   FILE *p;
   printf("Enter your purchase database name: ");
   char p_name[20];
   scanf("%s", p_name);
   p = fopen(p_name, "a");
   if(p == NULL){
       printf("Error");
   }else{
       FILE *r;
       char f_name[20];
       printf("Enter the file name: ");
       scanf("%s", f_name);
       r = fopen(f_name, "r");
       if(r == NULL){
           printf("Error");
       }else{
           system("cls");
           int id;
           int quantity;
           double price;
           char name[20];
           while(fscanf(r, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
               for(int i=0; i<20; i++){
                   if(id == arr[i]){
                       fprintf(p, "%d %s %d %.2lf\n", id, name, quantity, price);
                   }
               }
           }
       }
       rewind(r);
       remove(f_name);
       FILE *q;
       q = fopen(f_name, "w");
       if(q == NULL){
           printf("Error");
       }else{
           for(int i=0; i<20; i++){
               int id;
               int quantity;
               double price;
               char name[20];
               while(fscanf(r, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
                   if(id == arr[i]){
                       quantity = quantity - 1;
                       fprintf(q, "%d %s %d %.2lf\n", id, name, quantity, price);
                   }else{
                       fprintf(q, "%d %s %d %.2lf\n", id, name, quantity, price);
                   }
               }
           }
       }
       fclose(r);
       fclose(q);
       fclose(p);

   }


}
void BKASH()
{
    system("cls");
     system("COLOR E0");
   unsigned long amount = 782345, deposit, withdraw;
   int choice, x, k, euro;
   char transaction = 'y';
   while (x != 1720)
   {
       printf("ENTER YOUR SECRET PIN NUMBER:");
       scanf("%d", &x);
       if (x != 1720)
           printf("PLEASE ENTER VALID PASSWORD\n");
   }
   do
   {
       printf("********Welcome to BKASH Service**************\n");
       printf("1. Check Balance\n");
       printf("2. Payment\n");
       printf("3. Quit\n");
       printf("******************?**************************?*\n\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       switch (choice)
       {
       case 1:
           printf("\n YOUR BALANCE IN Rs : %lu ", amount);
           break;
       case 2:
           printf("\n ENTER THE AMOUNT TO PAY");
           scanf("%lu", &deposit);
           amount = amount-deposit;
           printf("YOUR BALANCE IS %lu", amount);
           printf("\nPAYMENT SUCCESSFUL");
           break;
       case 3:
           printf("\n THANK U USING ATM");
           break;
       default:
           printf("\n INVALID CHOICE");
       }
       printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
       fflush(stdin);
       scanf("%c", &transaction);
       if (transaction == 'n' || transaction == 'N')
           k = 1;
   } while (!k);
   printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
void NAGAD()
{
    system("cls");
     system("COLOR E0");
   unsigned long amount = 23450, deposit, withdraw;
   int choice, x, k, euro;
   char transaction = 'y';
   while (x != 1920)
   {
       printf("ENTER YOUR SECRET PIN NUMBER:");
       scanf("%d", &x);
       if (x != 1920)
           printf("PLEASE ENTER VALID PASSWORD\n");
   }
   do
   {
       printf("********Welcome to NAGAD Service**************\n");
       printf("1. Check Balance\n");
       printf("2. Payment\n");
       printf("3. Quit\n");
       printf("******************?**************************?*\n\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       switch (choice)
       {
       case 1:
           printf("\n YOUR BALANCE IN Rs : %lu ", amount);
           break;
       case 2:
           printf("\n ENTER THE AMOUNT TO PAY");
           scanf("%lu", &deposit);
           amount = amount-deposit;
           printf("YOUR BALANCE IS %lu", amount);
           printf("\nPAYMENT SUCCESSFUL");
           break;
       case 3:
           printf("\n THANK U USING ATM");
           break;
       default:
           printf("\n INVALID CHOICE");
       }
       printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
       fflush(stdin);
       scanf("%c", &transaction);
       if (transaction == 'n' || transaction == 'N')
           k = 1;
   }
   while (!k);
   printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}

void ATM()
{
    system("cls");
     system("COLOR E0");
   unsigned long amount = 92345, deposit, withdraw;
   int choice, x, k, euro;
   char transaction = 'y';
   while (x != 1520)
   {
       printf("ENTER YOUR SECRET PIN NUMBER:");
       scanf("%d", &x);
       if (x != 1520)
           printf("PLEASE ENTER VALID PASSWORD\n");
   }
   do
   {
       printf("********Welcome to ATM Service**************\n");
       printf("1. Check Balance\n");
       printf("2. Payment\n");
       printf("3. Quit\n");
       printf("******************?**************************?*\n\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       switch (choice)
       {
       case 1:
           printf("\n YOUR BALANCE IN Rs : %lu ", amount);
           break;
       case 2:
           printf("\n ENTER THE AMOUNT TO PAY");
           scanf("%lu", &deposit);
           amount = amount-deposit;
           printf("YOUR BALANCE IS %lu", amount);
           printf("\nPAYMENT SUCCESSFUL");
           break;
       case 3:
           printf("\n THANK U USING ATM");
           break;
       default:
           printf("\n INVALID CHOICE");
       }
       printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
       fflush(stdin);
       scanf("%c", &transaction);
       if (transaction == 'n' || transaction == 'N')
           k = 1;
   } while (!k);
   printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}

void itroduction()
{

   int i;
   system("cls");
   system("COLOR 09");
   headline();
   printf("\n\n\n\t\t\t    Project by : \n\n");
   printf("\t\t\t    =================================================================================================================\n");
   printf("\n\t\t\t    Fahimun Islam Lamia \t\tNushera  Tajrin \t\tNushrat  Zahan ");
   printf("\n\n\t\t\t    Id : 2021-3-60-181 \t\t\tID: 2021-3-60-227 \t\tID: 2021-3-60-213\n");
   printf("\t\t\t    _________________________________________________________________________________________________________________\n");
   printf("\n\n\t\t\t    Submitted to : ");
   printf("\n\t\t\t    =================================================================================================================\n");
   printf("\n\t\t\t    Dr. Ahmed Wasif Reza\n\t\t\t    Associate Professor\n\t\t\t    Department of Computer Science & Engineering\n\t\t\t    East West University\n");
   printf("\n\t\t\t    _________________________________________________________________________________________________________________\n");
   printf("\n\n\t\t\t    Press any key to continue....");
   scanf("%d", &i);
}

void admin()
{
    system("COLOR 03");
   system("cls");
   headline();
   headl();
   char n[50], p=12345,y,i;
       printf("\nlog in as admin\n\n");
       printf("\n\t     Email :: ");
       scanf("%s", &n);
       printf("\t     Password :: ");
       scanf("%d", &y);
       if(y==p)
            {

               system ("cls");
                headline();
               printf("successfully login\n");
            }
                else
        {
            printf("invalid pass\n");
        }
        printf("press any key to continue\n");
        scanf("%d",&i);

          }


void adminS()
{
     system("COLOR 0c");
   system("cls");
   int f;
  headline();
  headl();
   printf("\n\t\t\t\t  Enter Your Choice: ");
   printf("\n\t\t\t\t  1. admin");
   printf("\n\t\t\t\t  2. costomur");
   printf("\n\t\t\t\t  Enter your choice :");
   scanf("%d", &f);
   if (f == 1)
   {
       admin();
   }
   else if (f == 2)
   {
       coustomar();
   }
}

void Create()
{
     system("COLOR 03");
   system("cls");
   char f_name[50];
   headline();
    menuC();
   printf("Enter file name: ");
   scanf("%s", f_name);
   FILE *cf;
   cf = fopen(f_name, "w");
   if (cf == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
       system("cls");
       printf("How Many Products You Want To Store In Your Shop: ");
       int n;
       scanf("%d", &n);
       struct Product arr[n];
       for (int i = 0; i < n; i++)
       {
           system("cls");
           printf("You are entering %d th product information\n", i + 1);
           arr[i].id = i + 1;
           printf("\nEnter Product Name: ");
           scanf("%s", arr[i].name);
           printf("\nEnter Product Quantity: ");
           scanf("%d", &arr[i].quantity);
           printf("\nEnter Product Price: ");
           scanf("%lf", &arr[i].price);
           fprintf(cf, "%d %s %d %.2f\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
       }
       fclose(cf);

       FILE *rf;
       rf = fopen(f_name, "r");
       if (rf == NULL)
       {
           printf("Error Opening File\n");
           exit(1);
       }
       else
       {
           system("cls");
           printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
           printf("\t\t\t\t\t=====================================\n");
           printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
           printf("\t\t\t\t\t=====================================\n");
           for (int i = 0; i < n; i++)
           {
               while (fscanf(rf, "%d %s %d %lf", &arr[i].id, arr[i].name, &arr[i].quantity, &arr[i].price) != EOF)
               {
                   printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
               }
           }
           printf("\t\t\t\t\t=====================================\n");
           fclose(rf);
       }
   }
   int choice;
   printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
   printf("\t\t\t\t\tYour Choice:: ");
   scanf("%d", &choice);
   if (choice == 1)
   {
       menu();
   }
   else
   {
       exit(0);
   }
}

void Add()
{
system("COLOR 03");
   system("cls");
   char f_name[50];
   printf("Enter file name: ");
   scanf("%s", f_name);
   FILE *cf;
   cf = fopen(f_name, "r");
   if (cf == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
       system("cls");
       int id=0;
       char name[20];
       int quantity;
       double price;
       printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
       printf("\t\t\t\t\t=====================================\n");
       printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
       printf("\t\t\t\t\t=====================================\n");
       while (fscanf(cf, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
       {
           printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", id, name, quantity, price);
       }
       printf("\t\t\t\t\t=====================================\n");
       fclose(cf);
       FILE *af;
       af = fopen(f_name, "a");
       printf("\t\t\t\t\tHow many products you want to add in your shop: ");
       int n;
       scanf("%d", &n);
       struct Product arr[n];
       for (int i = 0; i < n; i++)
       {
           system("cls");
           printf("You are entering %d th product information\n", id + 1);
           arr[i].id = id + 1;
           printf("\nEnter Product Name: ");
           scanf("%s", arr[i].name);
           printf("\nEnter Product Quantity: ");
           scanf("%d", &arr[i].quantity);
           printf("\nEnter Product Price: ");
           scanf("%lf", &arr[i].price);
           fprintf(af, "%d %s %d %.2f\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
       }
       fclose(af);
   }
   int choice;
   printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
   printf("\t\t\t\t\tYour Choice:: ");
   scanf("%d", &choice);
   if (choice == 1)
   {
       menu();
   }
   else
   {
      admin();
   }
}
void Readc()
{
 system("COLOR e0");
   system("cls");
   headline();
    menuC();
   char f_name[50];
   printf("Enter file name: ");
   scanf("%s", f_name);
   FILE *rf;
   rf = fopen(f_name, "r");
   if (rf == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
       system("cls");
       headline();
       headl();
         int id;
         char name[20];
         int quantity;
         double price;
         printf("\n\t\t\t\t\t Current Product in Your Shop\n");
         printf("\t\t\t\t\t=====================================\n");
         printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
         printf("\t\t\t\t\t=====================================\n");
         while (fscanf(rf, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
         {
             printf("\t\t\t\t\t%d. %s\t %d\t\t%.2lf\n", id, name, quantity, price);
         }
         printf("\t\t\t\t\t=====================================\n");
   }

   // Buying Option for Customer
   int choice, i=0;
   int option[20];
   printf("\t\t\t\t\tWhich Item You want To Buy? Please Enter ID: ");
    scanf("%d", &option[i]);
    while(option[i] != -1){
       i++;
       scanf("%d", &option[i]);
       }
     Purchase(option);
     int choi;
   printf("\n\t\t\t\t\tIf For Purchase Press 1\n\t\t\t\t\tIf You Want To Go To Menu Press 2.\n");
   printf("\t\t\t\t\tYour Choice:: ");
   scanf("%d", &choi);
   if (choi == 1)
   {
      Bill_Paper();
   }
   else
   {
      menuC();
   }

}

void Read()
{
system("COLOR 03");
   system("cls");
   headline();
headl();
   char f_name[50];
   printf("Enter File Name: ");
   scanf("%s", f_name);
   FILE *rf;
   rf = fopen(f_name, "r");
   if (rf == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
{
         system("cls");
         int id;
         char name[20];
         int quantity;
         double price;
         printf("\n\t\t\t\t\t Current Product in Your Shop\n");
         printf("\t\t\t\t\t=====================================\n");
         printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
         printf("\t\t\t\t\t=====================================\n");
         while (fscanf(rf, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
         {
             printf("\t\t\t\t\t%d. %s\t %d\t\t%.2lf\n", id, name, quantity, price);
         }
         printf("\t\t\t\t\t=====================================\n");
         int choice;
   printf("\n\t\t\t\t\tIf You Want To Go Menu Press 1\n\t\t\t\t\tIf You Want to Exit Press 2.\n");
   printf("\t\t\t\t\tYour Choice:: ");
         scanf("%d", &choice);
   if (choice == 1)
   {
       menu();
   }
   else
   {
       exit(0);
   }
   }
   }
}
void Update()
{
     system("COLOR 03");
     system("cls");
     char f_name[50];
     printf("Enter file name: ");
     scanf("%s", f_name);
     FILE *ef,*temp;
     ef = fopen(f_name, "r");
     if (ef == NULL)
     {
         printf("Error Opening File\n");
         exit(1);
     }
     else
     {
         system("cls");
         int id;
         char name[20];
         int quantity;
         double price;
         printf("\n\t\t\t\t\t Current Product in Your Shop\n");
         printf("\t\t\t\t\t=====================================\n");
         printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
         printf("\t\t\t\t\t=====================================\n");
         while (fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
         {
             printf("\t\t\t\t\t%d. %s\t %d\t\t%.2lf\n", id, name, quantity, price);
         }
         printf("\t\t\t\t\t=====================================\n");
   }
   fclose(ef);
   printf("\n\n\t\t\t\t\tEnter Product ID You Want To Edit: ");
   int target;
   scanf("%d", &target);
   temp = fopen("temp.txt", "w");
   ef = fopen(f_name, "r");
   if (ef == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
       system("cls");
       int id;
       char name[20];
       int quantity;
       double price;
       while (fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
       {
           if (id == target)
           {
               printf("\n\t\t\t\t\t You Are Updating This Product\n");
               printf("\t\t\t\t\t=====================================\n");
               printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
               printf("\t\t\t\t\t=====================================\n");
               printf("\t\t\t\t\t%d. %s\t %d\t\t%.2lf\n", id, name, quantity, price);
               printf("\n\n\t\t\t\t\tEnter New Product Name: ");
               scanf("%s", name);
               printf("\n\n\t\t\t\t\tEnter New Product Quantity: ");
               scanf("%d", &quantity);
               printf("\n\n\t\t\t\t\tEnter New Product Price: ");
               scanf("%lf", &price);
               fprintf(temp, "%d %s %d %.2lf\n", id, name, quantity, price);
           }
           else
           {
               fprintf(temp, "%d %s %d %.2lf\n", id, name, quantity, price);
           }
       }
       system("cls");
       printf("\n\t\t\t\t\t Your Shop Updated Succesfully!\n");


       fclose(temp);
   }
   fclose(ef);
   temp = fopen("temp.txt", "r");
   ef = fopen(f_name, "w");
   int id;
       char name[20];
       int quantity;
       double price;
   while (fscanf(temp, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
    {
      fprintf(ef, "%d %s %d %.2lf\n", id, name, quantity, price);
   }
   fclose(temp);
   fclose(ef);
   remove(temp);
   int choice;
   printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
   printf("\t\t\t\t\tYour Choice:: ");
   scanf("%d", &choice);
   if (choice == 1)
   {
       menu();
   }
   else
   {
       exit(0);
   }
}

void Delete()
{
   system("COLOR 03");
   system("cls");
   char f_name[50];
   printf("Enter file name: ");
   scanf("%s", f_name);
   FILE *ef,*temp;
   ef = fopen(f_name, "r");
   temp = fopen("temp.txt", "w");
   if (ef == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
       system("cls");
       int id;
       char name[20];
       int quantity;
       double price;
       printf("\n\t\t\t\t\t Current Product in Your Shop\n");
       printf("\t\t\t\t\t=====================================\n");
       printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
       printf("\t\t\t\t\t=====================================\n");
       while (fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
       {
           printf("\t\t\t\t\t%d. %s\t %d\t\t%.2lf\n", id, name, quantity, price);
           fprintf(temp, "%d %s %d %.2lf\n", id, name, quantity, price);
       }
   }
   fclose(ef);
   fclose(temp);
   printf("\n\n\t\t\t\t\tEnter Product ID You Want To Delete: ");
   int target;
   scanf("%d", &target);
   ef = fopen(f_name, "w");
   temp = fopen("temp.txt", "r");
   if (ef == NULL)
   {
       printf("Error Opening File\n");
       exit(1);
   }
   else
   {
       system("cls");
       int id;
       char name[20];
       int quantity;
       double price;
       while (fscanf(temp, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
       {
           if (id == target)
           {
               continue;
           }
           else
           {
               fprintf(ef, "%d %s %d %.2lf\n", id, name, quantity, price);
           }
       }
       system("cls");
       printf("\n\t\t\t\t\t %dth Target Deleted Succesfully! \n", target);
       fclose(ef);
   }
   fclose(temp);
   remove(temp);
   int choice;
   printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
   printf("\t\t\t\t\tYour Choice:: ");
   scanf("%d", &choice);
   if (choice == 1)
   {
       menu();
   }
   else
   {
       exit(0);
   }
}
void menu()
{
     system("COLOR 03");
   system("cls");
   headline();

        printf("\t\t\t\t\t\t                         ::    :::::::::::::::::::::::::   ::\n");
        printf("\t\t\t\t\t\t                       ::    ::                         ::   ::\n");
        printf("\t\t\t\t\t\t                      ::    ::                            ::   ::\n");
        printf("\t\t\t\t\t\t                     ::    ::                              ::   ::\n");
        printf("\t\t\t\t\t\t                   ::    ::                                 ::   ::\n");
        printf("\t\t\t\t\t\t         ::::::=======================================================::::::\n");
        printf("\t\t\t\t\t\t           :                     What do you want to do?                 :\n");
        printf("\t\t\t\t\t\t         ::::::=======================================================:::::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::           01. Do You Want To Create A File?              ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::        02. Do You Want To Add Product in your shop?      ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::           03. Do You Want To Read A File?                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::           04. Do You Want To Edit A File?                ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::           05. Do You Want To Delete A Product?           ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t          ::  ::                                                          ::\n");
        printf("\t\t\t\t\t\t            ::::                                                          ::\n");
        printf("\t\t\t\t\t\t               ===========================================================::\n");
   int n;
   printf("\n\t\t\t\tEnter Your Choice: ");
   scanf("%d", &n);
   if (n == 1)
   {
       Create();
   }
   else if (n == 2)
   {
       Add();
   }
   else if (n == 3)
   {
       Read();
   }
   else if (n == 4)
   {
       Update();
   }
   else if (n == 5)
   {
       Delete();
   }
}
void menuC()
{
        printf("\n\t\t\t\t\t\t                         ::    :::::::::::::::::::::::::   ::\n");
        printf("\t\t\t\t\t\t                       ::    ::                         ::   ::\n");
        printf("\t\t\t\t\t\t                      ::    ::                            ::   ::\n");
        printf("\t\t\t\t\t\t                     ::    ::                              ::   ::\n");
        printf("\t\t\t\t\t\t                   ::    ::                                 ::   ::\n");
        printf("\t\t\t\t\t\t         ::::::=======================================================::::::\n");
        printf("\t\t\t\t\t\t           :                    | Featured Category |                    :\n");
        printf("\t\t\t\t\t\t         ::::::=======================================================:::::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          | ITEM NO | ITEM NAME  |   PRICE    |           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          | 1 | FASHION.txt      |  40-1200   |           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          | 2 | BAKERY.txt       |  50-1400   |           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          | 3 | DEVICE.txt       | 200-300000 |           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          | 4 | Grocery.txt      |  150-6000  |           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          | 5 | Household.txt    |  150-6000  |           ::\n");
        printf("\t\t\t\t\t\t        ::    ::          -------------------------------------           ::\n");
        printf("\t\t\t\t\t\t        ::    ::                                                          ::\n");
        printf("\t\t\t\t\t\t          ::  ::                                                          ::\n");
        printf("\t\t\t\t\t\t            ::::                                                          ::\n");
        printf("\t\t\t\t\t\t               ===========================================================::\n");
}

int main()
{
   itroduction();
   adminS();
   menu();
   menuC();
   return 0;
}
