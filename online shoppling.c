#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void introduction();
void menuC();
void menu();
void login();
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
    printf("\n\n\t\t\t\t\t\t\t  |=====================================================|");
    Sleep(35);
    printf("\n\t\t\t\t\t\t\t  |                                                     |");
    Sleep(50);
    printf("\n\t\t\t\t\t\t\t  |              WELCOME TO HAPPY SHOPPING              |");
    Sleep(50);
    printf("\n\t\t\t\t\t\t\t  |                                                     |");
    Sleep(50);
    printf("\n\t\t\t\t\t\t\t  |=====================================================|\n");
    Sleep(35);

}
void headl()
{
    printf("\n\n\t\t\t\t\t                         ::  :::::::::::::::::::::::::   ::\n");
    Sleep(35);
    printf("\t\t\t\t\t                       ::    ::                         ::   ::\n");
    Sleep(50);
    printf("\t\t\t\t\t                     ::    ::                              ::   ::\n");
    Sleep(50);
    printf("\t\t\t\t\t                   ::    ::                                 ::   ::\n");
    Sleep(50);
    printf("\t\t\t\t\t         ::::::=======================================================::::::\n");
    Sleep(50);
    printf("\t\t\t\t\t           :                                                             :\n");
    Sleep(50);
    printf("\t\t\t\t\t         ::::::======================================================::::::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(35);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(35);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                     HAPPY SHOPPING                       ::\n");
    Sleep(35);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(60);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(35);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(35);
    printf("\t\t\t\t\t        ::    ::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t          ::  ::                                                          ::\n");
    Sleep(35);
    printf("\t\t\t\t\t            ::::                                                          ::\n");
    Sleep(50);
    printf("\t\t\t\t\t               ===========================================================::\n");
    Sleep(50);
    printf("\n\n\n");
}


void m()
{
    system("cls");
    int n,q;

    printf ("\n\t\t\t\t\tEnter your rating(1 to 3) :");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\n\t\t\t\t\t  ('-')   *     not good");
    }
    else if(n==2)
    {
        printf("\n\t\t\t\t\t\t\t  (+ - +)    **     good\n");

    }
    else if(n==3)
    {
        printf("\n\t\t\t\t\t\t\t (o w o)   ***     very good \n");
    }
    else
    {
        printf("\n\t\t\t    PError....");
    }
    printf("\n\t\t\t    Press any key to exit....");
    scanf("%d",&q);


}

void coustomar()
{
    system("COLOR E0");
    system("cls");
    char name[200], email[200], pass1[200], pass2[200];
    int xy;
    printf("\n\t\t\t\t\tEnter  Name: ");
    scanf("%s", name);
    printf("\n\t\t\t\t\tEmail: ");
    scanf("%s", email);
    printf("\n\t\t\t\t\tEnter Passward : ");
    scanf("%s", pass1);
    printf("\n\t\t\t\t\tEnter Passward : ");
    scanf("%s", pass2);
    if (strcmp(pass1, pass2) == 0)
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\t                                ::                                             ::\n");
        printf("\t\t\t\t                                ::                                             ::\n");
        printf("\t\t\t\t                          ::    ::                                       ::    ::  \n ");
        printf("\t\t\t\t         ::::::============================================================================::::::\n");
        printf("\t\t\t\t           :              ::                                             ::                   :\n");
        printf("\t\t\t\t         ::::::============================================================================::::::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::   |============= | What do you want to do?                  |=============|    ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::   |============= | 01. Do You Want To See the Product List? |=============|    ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::   |============= | 02. Do You Want To Generate Bill?        |=============|    ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::   |============= | 03. Do You Want To Give rating?          |=============|    ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t        ::    ::                                                                                ::\n");
        printf("\t\t\t\t          ::  ::                                                                                ::\n");
        printf("\t\t\t\t            ::::                                                                                ::\n");
        printf("\t\t\t\t               =================================================================================::\n");

        printf("\n\n\t\t\t\t\t Enter choice: ");
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
        printf("\n\n\t\t\t\t\t\t\t(*o*)CONGRATULATIONS! YOU ARE THE LUCKY COSTUMER(*o*)\t\n\n\t\tA SPECIAL GIFT! (.*o*.)\n\t\tYOU WILL GET A LUXURY WATCH (-o-)\n\n\n");
        break;
    case 1:
        printf("\n\t\t\t\t\t\t\t(*o*)CONGRATULATIONS! YOU ARE THE LUCKY COSTUMER(*o*) ");
        printf("\t\t(o^-^o)FREE DELIVARY! *O* \n");
        break;
    case 2:
        printf("\n\t\t\t\t\t\t\t(*o*)CONGRATULATIONS! YOU ARE THE LUCKY COSTUMER(*o*)");
        printf("\n\t\t\t\t\t\t\t(0-0)MONEY! |$|\n");
        break;
    default:
        printf("error");
    }
}
void Bill_Paper()
{
    system("COLOR FC");
    system("cls");
    FILE *fp;
    fp=fopen("purchase.txt","r");
    int cho,z,xy;
    if(fp == NULL)
    {
        printf("File not found");
        exit(0);
    }
    else
    {
        Surprise();
        printf("\n\t\t\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\t\t\tHere is Your Payment Bill\n");
        printf("\t\t\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\t\t\tPurchase-Product\t\tPrice\n");
        double total = 0.00;
        int id;
        char name[20];
        int quantity;
        double price;
        while(fscanf(fp, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
        {
            printf("\n\t\t\t\t\t\t\t%s\t\t\t      %.2lf\n", name, price);
            total += price;
        }
        printf("\t\t\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\t\t\tTotal: \t\t\t%.2lf\n", total);
        printf("\t\t\t\t\t\t\tPress 1 for ATM\t Press 2 BKASH\t Press 3 for NAGAD \n");
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
        fclose(fp);
        m();

    }
}

void Purchase(int arr[20])
{
    system ("cls");
    system("COLOR f0");
    FILE *p;
    printf("Enter your purchase database name: ");
    char p_name[20];
    scanf("%s", p_name);
    p = fopen(p_name, "a");
    if(p == NULL)
    {
        printf("Error");
    }
    else
    {
        FILE *r;
        char f_name[20];
        printf("Enter the file name: ");
        scanf("%s", f_name);
        r = fopen(f_name, "r");
        if(r == NULL)
        {
            printf("Error");
        }
        else
        {
            system("cls");
            int id;
            int quantity;
            double price;
            char name[20];
            while(fscanf(r, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
            {
                for(int i=0; i<20; i++)
                {
                    if(id == arr[i])
                    {
                        fprintf(p, "%d %s %d %.2lf\n", id, name, quantity, price);
                    }
                }
            }
        }
        rewind(r);
        remove(f_name);
        FILE *q;
        q = fopen(f_name, "w");
        if(q == NULL)
        {
            printf("Error");
        }
        else
        {
            for(int i=0; i<20; i++)
            {
                int id;
                int quantity;
                double price;
                char name[20];
                while(fscanf(r, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
                {
                    if(id == arr[i])
                    {
                        quantity = quantity - 1;
                        fprintf(q, "%d %s %d %.2lf\n", id, name, quantity, price);
                    }
                    else
                    {
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
    system("COLOR E0");
    FILE *fp;
    unsigned long amount = 782345, deposit, withdraw;
    int choice, x, k, euro,amt;
    char transaction = 'y';
    while (x != 1720)
    {
        printf("\n\t\t\t\t\t\t\tENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d", &x);
        if (x != 1720)
            printf("\n\t\t\t\t\t\t\tPLEASE ENTER VALID PASSWORD \n");
    }
    do
    {
        printf("\n\t\t\t\t\t\t\t********Welcome to BKASH Service**************\n");
        printf("\n\t\t\t\t\t\t\t1. Check Balance\n");
        printf("\n\t\t\t\t\t\t\t2. Payment\n");
        printf("\n\t\t\t\t\t\t\t3. Quit\n");
        printf("\n\t\t\t\t\t\t\t******************?**************************?*\n\n");
        printf("\n\t\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\n\t\t\t\t\t\t\t YOUR BALANCE IN Rs : %lu ", amount);
            break;
        case 2:
            printf("\n\t\t\t\t\t\t\t THE AMOUNT %2lf IS PAID .",deposit);
            amt = amount-deposit;
            printf("\n\t\t\t\t\t\t\tYOUR BALANCE IS %lu", amt);
            printf("\n\t\t\t\t\t\t\tPAYMENT SUCCESSFUL");
            break;
        case 3:
            printf("\n\t\t\t\t\t\t\tTHANK U USING ATM");
            break;
        default:
            printf("\n\t\t\t\t\t\t\t INVALID CHOICE");
        }
        fclose(fp);
        printf("\n\n\n\t\t\t\t\t\t\t DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    }
    while (!k);
    printf("\n\n\t\t\t\t\t\t\t THANKS FOR USING OUT ATM SERVICE");

}
void NAGAD()
{
    system("COLOR E0");
    unsigned long amount = 23450, deposit, withdraw;
    int choice, x, k, euro,amt;
    char transaction = 'y';
    while (x != 1920)
    {
        printf("\n\t\t\t\t\t\t\tENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &x);
        if (x != 1920)
            printf("\n\t\t\t\t\t\t\tPLEASE ENTER VALID PASSWORD\n");
    }
    do
    {
        printf("\t\t\t\t\t\t\t********Welcome to NAGAD Service**************\n");
        printf("\t\t\t\t\t\t\t1. Check Balance\n");
        printf("\t\t\t\t\t\t\t2. Payment\n");
        printf("\t\t\t\t\t\t\t3. Quit\n");
        printf("\t\t\t\t\t\t\t******************?**************************?*\n\n");
        printf("\t\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\t\t\t\t\t\t\t YOUR BALANCE IN Rs : %lu ", amount);
            break;
        case 2:
            printf("\n\t\t\t\t\t\t\t THE AMOUNT %2lf IS PAID .",deposit);
            amt = amount-deposit;
            printf("\n\t\t\t\t\t\t\tYOUR BALANCE IS %lu", amt);
            printf("\n\t\t\t\t\t\t\tPAYMENT SUCCESSFUL");
            break;
        case 3:
            printf("\n\t\t\t\t\t\t\t THANK U USING ATM");
            break;
        default:
            printf("\n\t\t\t\t\t\t\t INVALID CHOICE");
        }
        printf("\n\n\n\t\t\t\t\t\t\t DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    }
    while (!k);
    printf("\n\n\t\t\t\t\t\t\t THANKS FOR USING OUT ATM SERVICE");
}

void ATM()
{
    system("COLOR E0");
    unsigned long amount = 92345, deposit, withdraw;
    int choice, x, k, euro;
    char transaction = 'y';
    while (x != 1520)
    {
        printf("\n\t\t\t\t\t\t\tENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &x);
        if (x != 1520)
            printf("\n\t\t\t\t\t\t\tPLEASE ENTER VALID PASSWORD\n");
    }
    do
    {
        printf("\n\t\t\t\t\t\t\t********Welcome to ATM Service**************\n");
        printf("\n\t\t\t\t\t\t\t1. Check Balance\n");
        printf("\n\t\t\t\t\t\t\t2. Payment\n");
        printf("\n\t\t\t\t\t\t\t3. Quit\n");
        printf("\n\t\t\t\t\t\t\t******************?**************************?*\n\n");
        printf("\n\t\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\t\t\t\t\t\t\t YOUR BALANCE IN Rs : %lu ", amount);
            break;
        case 2:
            printf("\n\t\t\t\t\t\t\t ENTER THE AMOUNT TO PAY");
            scanf("%lu", &deposit);
            amount = amount-deposit;
            printf("\n\t\t\t\t\t\t\tYOUR BALANCE IS %lu", amount);
            printf("\n\t\t\t\t\t\t\tPAYMENT SUCCESSFUL");
            break;
        case 3:
            printf("\n\t\t\t\t\t\t\t THANK U USING ATM");
            break;
        default:
            printf("\n\t\t\t\t\t\t\t INVALID CHOICE");
        }
        printf("\n\n\n\t\t\t\t\t\t\t DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            k = 1;
    }
    while (!k);
    printf("\n\n\t\t\t\t\t\t\t THANKS FOR USING OUT ATM SERVICE");
}


void admin()
{
    system("COLOR 03");
    system("cls");
    headline();
    char n[50], p=12345,y,i;
    printf("\n\n\n\t\t\t\tLog in as admin\n\n");
    printf("\n\t\t\t\t\t   Email :: ");
    scanf("%s", &n);
    printf("\t\t\t\t\t   Password :: ");
    scanf("%d", &y);
    if(y==p)
    {
        system ("cls");
        menu();
        printf("\n\t\t\t\t\t successfully login\n");
    }
    else
    {
        printf("\n\t\t\t\t\t invalid pass\n");
    }
    printf("\t\t\t\t\t press any key to continue\n");
    scanf("%d",&i);

}


void login()
{
    system("COLOR 0c");
    system("cls");
    int f;
    headl();
    printf("\n\t\t\t\t  Enter Your Choice: ");
    printf("\n\t\t\t\t  1. admin");
    printf("\n\t\t\t\t  2. costomur");
    printf("\n\t\t\t\t  Enter your choice :");
    scanf("%d", &f);
    if (f==1)
    {
        admin();
    }
    else if (f==2)
    {
        coustomar();
    }
    else
    {
        printf("\n\t\t\t\t      YOUR CHOICE IS INVALID");
    }

}

void Create()
{
    system("COLOR 03");
    system("cls");
    char f_name[50];
    menuC();
    printf("\n\t\t\t\t\tEnter file name: ");
    scanf("%s", f_name);
    FILE *cf;
    cf = fopen(f_name, "w");
    if (cf == NULL)
    {
        printf("\n\t\t\t\t\tError Opening File\n");
        exit(1);
    }
    else
    {
        system("cls");
        printf("/n/nHow Many Products You Want To Store In Your Shop: ");
        int n;
        scanf("%d", &n);
        struct Product arr[n];
        for (int i = 0; i < n; i++)
        {
            system("cls");
            printf("\n\t\t\t\t\tYou are entering %d th product information\n", i + 1);
            arr[i].id = i + 1;
            printf("\n\t\t\t\t\tEnter Product Name: ");
            scanf("%s", arr[i].name);
            printf("\n\t\t\t\t\tEnter Product Quantity: ");
            scanf("%d", &arr[i].quantity);
            printf("\n\t\t\t\t\tEnter Product Price: ");
            scanf("%lf", &arr[i].price);
            fprintf(cf, "\t\t\t\t\t%d %s %d %.2f\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
        }
        fclose(cf);

        FILE *rf;
        rf = fopen(f_name, "r");
        if (rf == NULL)
        {
            printf("\n\t\t\t\t\tError Opening File\n");
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
    printf("\n\t\t\t\t\tEnter file name: ");
    scanf("%s", f_name);
    FILE *cf;
    cf = fopen(f_name, "r");
    if (cf == NULL)
    {
        printf("\n\t\t\t\t\tError Opening File\n");
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
    menuC();
    char f_name[50];
    printf("\n\n\t\t\t\t\tEnter file name: ");
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
        int id;
        char name[20];
        int quantity;
        double price;
        printf("\n\n\t\t\t\t\t\t\t Current Product in Your Shop\n");
        printf("\t\t\t\t\t\t\t=====================================\n");
        printf("\t\t\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
        printf("\t\t\t\t\t\t\t=====================================\n");
        while (fscanf(rf, "%d %s %d %lf", &id, name, &quantity, &price) != EOF)
        {
            printf("\t\t\t\t\t\t\t%d. %s\t %d\t\t%.2lf\n", id, name, quantity, price);
        }
        printf("\t\t\t\t\t\t\t=====================================\n");
    }

    // Buying Option for Customer
    int choice, i=0;
    int option[20];
    int choi;
    printf("\n\t\t\t\t\t\t\tIf For Purchase Press 1\n\t\t\t\t\t\t\tIf You Want To Go To Menu Press 2.\n");
    printf("\n\t\t\t\t\t\t\ttYour Choice:: ");
    scanf("%d", &choi);
    if (choi == 1)
    {
        printf("\n\t\t\t\t\t\t\tWhich Item You want To Buy? Please Enter ID(End Enter -1): ");
        scanf("%d", &option[i]);
        while(option[i] != -1)
        {
            i++;
            scanf("%d", &option[i]);
        }
        // Purchase(option);
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
    char f_name[50];
    printf("\n\t\t\t\t\tEnter File Name: ");
    scanf("%s", f_name);
    FILE *rf;
    rf = fopen(f_name, "r");
    if (rf == NULL)
    {
        printf("\n\t\t\t\t\tError Opening File\n");
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
                system("cls");
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
    printf("\n\t\t\t\t\tEnter file name: ");
    scanf("%s", f_name);
    FILE *ef,*temp;
    ef = fopen(f_name, "r");
    if (ef == NULL)
    {
        printf("\n\t\t\t\t\tError Opening File\n");
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
        printf("\n\t\t\t\t\tError Opening File\n");
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
    printf("\n\t\t\t\t\tEnter file name: ");
    scanf("%s", f_name);
    FILE *ef,*temp;
    ef = fopen(f_name, "r");
    temp = fopen("temp.txt", "w");
    if (ef == NULL)
    {
        printf("\n\t\t\t\t\tError Opening File\n");
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
    printf("\n\t\t\t\t\t\t                         ::    :::::::::::::::::::::::::   ::\n");
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
    printf("\n\n\t\t\t\t\t\t                         ::    :::::::::::::::::::::::::   ::\n");
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

    int i;
    system("cls");
    system("COLOR 09");
    headl();
    printf("\n\t\t\t    Press any key to continue....");
    scanf("%d", &i);
    login();
    return 0;
}
