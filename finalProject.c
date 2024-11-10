#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product
{
    char name[50];
    int price;
    int stock;
};

struct PurchasedItem
{
    char name[50];
    int quantity;
    int price;
};

struct Product electronics[] = {

    // 0-5
    {"Iphone 14 pro max", 130000, 10},
    {"Iphone 14 pro", 120000, 15},
    {"Iphone 13 pro max", 115000, 8},
    {"Iphone 13 pro ", 11000, 8},
    {"Iphone 12 pro max", 15000, 70},
    {"Iphone 12 pro", 10000, 70},

    // 6-11
    {"Vivo X90 Pro", 84000, 44},
    {"Vivo X80 Pro", 70000, 32},
    {"Vivo V27 Pro", 43000, 14},
    {"Vivo V25 Pro", 37000, 32},
    {"Vivo Y100", 25000, 43},
    {"Vivo Y75", 22000, 57},

    // 12-17
    {"Oppo Find X6 Pro", 82000, 10},
    {"Oppo Reno10 Pro+", 55000, 15},
    {"Oppo Reno10 Pro", 45000, 8},
    {"Oppo Reno8 Pro", 35000, 12},
    {"Oppo F23 5G", 25000, 5},
    {"Oppo A78", 18000, 20},

    // 18-23
    {"Redmi Note 12 Pro+", 30000, 10},
    {"Redmi Note 12 Pro", 25000, 15},
    {"Redmi Note 12", 20000, 8},
    {"Redmi K50i", 22000, 8},
    {"Redmi 12 5G", 18000, 70},
    {"Redmi 10", 15000, 70},

    // 24-29
    {"Realme GT 3", 45000, 10},
    {"Realme GT 2 Pro", 40000, 12},
    {"Realme 11 Pro+", 30000, 8},
    {"Realme 11 Pro", 28000, 10},
    {"Realme Narzo 60 Pro", 25000, 15},
    {"Realme C55", 18000, 20},
};

struct Product desktops[] = {

    {"Dell - Inspiron", 55000, 10},
    {"Dell - XPS", 90000, 8},
    {"HP - Pavilion", 65000, 12},
    {"HP - Omen", 120000, 6},
    {"Apple - iMac", 150000, 5},
    {"Apple - Mac Pro", 250000, 3},
    {"Lenovo - ThinkCentre", 50000, 15},
    {"Lenovo - Legion", 85000, 7},
    {"Asus - ROG", 100000, 9},
    {"Asus - VivoPC", 60000, 11},
    {"Acer - Aspire", 40000, 14},
    {"Acer - Predator", 95000, 4},

};

struct Product laptops[] = {
    {"Dell - Inspiron", 60000, 12},
    {"Dell - XPS", 95000, 10},
    {"HP - Pavilion", 70000, 14},
    {"HP - Omen", 130000, 5},
    {"Apple - iMac", 160000, 4},
    {"Apple - Mac Pro", 260000, 2},
    {"Lenovo - ThinkCentre", 55000, 18},
    {"Lenovo - Legion", 90000, 8},
    {"Asus - ROG", 105000, 6},
    {"Asus - VivoPC", 65000, 13},
    {"Acer - Aspire", 45000, 16},
    {"Acer - Predator", 100000, 3},
};

struct Product speakers[] = {
    {"JBL - Flip 5", 8000, 20},
    {"JBL - Charge 4", 12000, 15},
    {"Sony - SRS-XB12", 5000, 25},
    {"Sony - SRS-XB43", 15000, 10},
    {"Bose - SoundLink", 20000, 8},
    {"Bose - Home Speaker", 25000, 5},
    {"Marshall - Emberton", 18000, 12},
    {"Marshall - Stanmore", 35000, 7},

};

struct Product headphones[] = {
    {"Sony - WH-1000XM4", 25000, 15},
    {"Sony - WF-1000XM3", 15000, 20},
    {"Bose - QC35 II", 30000, 10},
    {"Bose - Sport Earbuds", 18000, 18},
    {"Sennheiser - HD 450BT", 12000, 22},
    {"Sennheiser - Momentum", 35000, 8},
    {"Marshall - Emberton", 18000, 12},
    {"Marshall - Stanmore", 35000, 7},
};

struct Product shirts[] = {
    {"Levi's - 511 Slim Fit", 3000, 20},
    {"Levi's - 502 Regular Fit", 3500, 15},
    {"Tommy Hilfiger - Regular", 3000, 18},
    {"Tommy Hilfiger - Slim", 3500, 10},
    {"Ralph Lauren - Polo", 4000, 12},
    {"Ralph Lauren - Dress Shirt", 5000, 8}};

struct Product trousers[] = {
    {"Levi's - 511 Slim Fit", 3000, 20},
    {"Levi's - 502 Regular Fit", 3500, 15},
    {"Tommy Hilfiger - Chino", 4000, 18},
    {"Tommy Hilfiger - Slim", 4500, 10},
    {"Ralph Lauren - Classic Chino", 5000, 12},
    {"Ralph Lauren - Slim Chino", 5500, 8}};

struct Product jackets[] = {
    {"Levi's - Trucker Jacket", 5000, 10},
    {"Levi's - Sherpa Trucker", 6000, 7},
    {"Tommy Hilfiger - Casual", 7000, 5},
    {"Tommy Hilfiger - Field", 8000, 3},
    {"Ralph Lauren - Blazer", 9000, 6},
    {"Ralph Lauren - Sport Coat", 12000, 4}};

struct Product shoes[] = {
    {"Nike - Air Max 270", 8000, 25},
    {"Nike - Air Force 1", 7500, 20},
    {"Adidas - Ultraboost", 10000, 15},
    {"Adidas - NMD", 9000, 18},
    {"Puma - RS-X", 7000, 22},
    {"Puma - Suede Classic", 6500, 30}};

struct Product cars[] = {
    {"Toyota - Corolla", 2500000, 10},
    {"Toyota - Camry", 3500000, 8},
    {"Honda - Civic", 2700000, 12},
    {"Honda - Accord", 3300000, 6},
    {"Ford - Mustang", 5500000, 5},
    {"Ford - Endeavour", 4500000, 7}};

struct Product motorcycles[] = {
    {"Yamaha - YZF R15", 150000, 20},
    {"Yamaha - MT-15", 140000, 18},
    {"Honda - CBR 250R", 165000, 10},
    {"Honda - CB Shine", 75000, 25},
    {"Suzuki - Gixxer SF", 130000, 15},
    {"Suzuki - Intruder", 155000, 12}};

struct PurchasedItem purchasedItems[100];
int purchaseCount = 0;

void addPurchase(const char *name, int quantity, int price)
{
    strcpy(purchasedItems[purchaseCount].name, name);
    purchasedItems[purchaseCount].quantity = quantity;
    purchasedItems[purchaseCount].price = price;
    purchaseCount++;
}

void onlineshopping(float *billamount)
{
    int choice;
    int item;
    int quantity;

    printf("\n====================================================\n");
    printf("*************Welcome to Online Shopping*************");
itemLevel:
    printf("\n=====================================================\n");
    printf("-----------Please follow the instructions-----------");
    printf("\n====================================================\n");
    printf("(1) Electric devices\n");
    printf("(2) Clothes\n");
    printf("(3) Shoes\n");
    printf("(4) Cars\n");
    printf("(5) Bikes\n");

    scanf("%d", &choice);

    // electronics
    if (choice == 1)
    {
    electricLevel:
        system("clear");
        printf("\n====================================================\n");
        printf("Electronic device categories:\n");
        printf("(1) Mobile Phones\n");
        printf("(2) Desktops\n");
        printf("(3) Laptops\n");
        printf("(4) Speaker\n");
        printf("(5) Headphone\n");
        printf("\n====================================================\n");
        printf("Please enter your choice(in number) : ");
        scanf("%d", &item);
        // Mobile
        if (item == 1)
        {
            system("clear");
        mobileLevel:
            printf("\n==============================================\n");
            printf("Available mobile models:\n");
            printf("(1) Apple   \n");
            printf("(2) Vivo    \n");
            printf("(3) Oppo    \n");
            printf("(4) Redmi   \n");
            printf("(5) Realme  \n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("Apple mobile details\n");
                for (int i = 0; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, electronics[i].name, electronics[i].price, electronics[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 6)
                {
                    int index = item - 1;
                    if (electronics[index].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[index].price);
                        electronics[index].stock -= quantity;
                        addPurchase(electronics[index].name, quantity, quantity * electronics[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", electronics[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto mobileLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Vivo mobile details\n");
                for (int i = 6; i < 12; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 5, electronics[i].name, electronics[i].price, electronics[i].stock);
                }
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 6)
                {
                    int index = item + 5;
                    if (electronics[index].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[index].price);
                        electronics[index].stock -= quantity;
                        addPurchase(electronics[index].name, quantity, quantity * electronics[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", electronics[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto mobileLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Oppo mobile details\n");
                for (int i = 12; i < 18; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 11, electronics[i].name, electronics[i].price, electronics[i].stock);
                }
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 6)
                {
                    int index = item + 11;
                    if (electronics[index].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[index].price);
                        electronics[index].stock -= quantity;
                        addPurchase(electronics[index].name, quantity, quantity * electronics[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", electronics[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto mobileLevel;
                }
            }

            else if (item == 4)
            {
                printf("\n==============================================\n");
                printf("Redmi mobile details\n");
                for (int i = 18; i < 24; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 17, electronics[i].name, electronics[i].price, electronics[i].stock);
                }
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 6)
                {
                    int index = item + 17;
                    if (electronics[index].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[index].price);
                        electronics[index].stock -= quantity;
                        addPurchase(electronics[index].name, quantity, quantity * electronics[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", electronics[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto mobileLevel;
                }
            }

            else if (item == 5)
            {
                printf("\n==============================================\n");
                printf("Realme mobile details\n");
                for (int i = 24; i < 30; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 23, electronics[i].name, electronics[i].price, electronics[i].stock);
                }
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 6)
                {
                    int index = item + 23;
                    if (electronics[index].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[index].price);
                        electronics[index].stock -= quantity;
                        addPurchase(electronics[index].name, quantity, quantity * electronics[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", electronics[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto mobileLevel;
                }
            }
        }
        // Desktop
        else if (item == 2)
        {
            system("clear");
        desktopLevel:
            printf("\n==============================================\n");
            printf("Available desktop models:\n");
            printf("(1) DELL   \n");
            printf("(2) HP     \n");
            printf("(3) APPLE    \n");
            printf("(4) LENOVO   \n");
            printf("(5) ASUS  \n");
            printf("(6) ACER \n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("DELL Desktop details\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, desktops[i].name, desktops[i].price, desktops[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (desktops[index].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[index].price);
                        desktops[index].stock -= quantity;
                        addPurchase(desktops[index].name, quantity, quantity * desktops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", desktops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto desktopLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("HP Desktop details\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, desktops[i].name, desktops[i].price, desktops[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (desktops[index].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[index].price);
                        desktops[index].stock -= quantity;
                        addPurchase(desktops[index].name, quantity, quantity * desktops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", desktops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto desktopLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("APPLE Desktop details\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, desktops[i].name, desktops[i].price, desktops[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (desktops[index].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[index].price);
                        desktops[index].stock -= quantity;
                        addPurchase(desktops[index].name, quantity, quantity * desktops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", desktops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto desktopLevel;
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("LENOVO Desktop details\n");
                for (int i = 6; i < 8; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 5, desktops[i].name, desktops[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 5;
                    if (desktops[index].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[index].price);
                        desktops[index].stock -= quantity;
                        addPurchase(desktops[index].name, quantity, quantity * desktops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", desktops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto desktopLevel;
                }
            }

            else if (item == 5)
            {

                printf("\n==============================================\n");
                printf("ASUS Desktop details\n");
                for (int i = 8; i < 10; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 7, desktops[i].name, desktops[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 7;
                    if (desktops[index].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[index].price);
                        desktops[index].stock -= quantity;
                        addPurchase(desktops[index].name, quantity, quantity * desktops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", desktops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto desktopLevel;
                }
            }

            else if (item == 6)
            {

                printf("\n==============================================\n");
                printf("ACER Desktop details\n");
                for (int i = 10; i < 12; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 9, desktops[i].name, desktops[i].price, desktops[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item >= 1 && item <= 2)
                {
                    int index = item + 9;
                    if (desktops[index].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[index].price);
                        desktops[index].stock -= quantity;
                        addPurchase(desktops[index].name, quantity, quantity * desktops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", desktops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto desktopLevel;
                }
            }

            else
            {
                system("clear");
                printf("You have entered wrong option,please choose between 1 to 6\n");
                goto desktopLevel;
            }
        }

        // Laptop
        else if (item == 3)
        {
            system("clear");
        laptopLevel:
            printf("\n==============================================\n");
            printf("Available laptop models:\n");
            printf("(1) DELL   \n");
            printf("(2) HP     \n");
            printf("(3) APPLE    \n");
            printf("(4) LENOVO   \n");
            printf("(5) ASUS  \n");
            printf("(6) ACER \n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");

            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("DELL Laptop details\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, laptops[i].name, laptops[i].price, desktops[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (laptops[index].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[index].price);
                        laptops[index].stock -= quantity;
                        addPurchase(laptops[index].name, quantity, quantity * laptops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", laptops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto laptopLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("HP Laptop details\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, laptops[i].name, laptops[i].price, laptops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (laptops[index].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[index].price);
                        laptops[index].stock -= quantity;
                        addPurchase(laptops[index].name, quantity, quantity * laptops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", laptops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto laptopLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("APPLE Laptop details\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, laptops[i].name, laptops[i].price, laptops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (laptops[index].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[index].price);
                        laptops[index].stock -= quantity;
                        addPurchase(laptops[index].name, quantity, quantity * laptops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", laptops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto laptopLevel;
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("LENOVO Laptop details\n");
                for (int i = 6; i < 8; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 5, laptops[i].name, laptops[i].price, laptops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 5;
                    if (laptops[index].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[index].price);
                        laptops[index].stock -= quantity;
                        addPurchase(laptops[index].name, quantity, quantity * laptops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", laptops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto laptopLevel;
                }
            }

            else if (item == 5)
            {

                printf("\n==============================================\n");
                printf("ASUS Laptop details\n");
                for (int i = 8; i < 10; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 7, laptops[i].name, laptops[i].price, laptops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 7;
                    if (laptops[index].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[index].price);
                        laptops[index].stock -= quantity;
                        addPurchase(laptops[index].name, quantity, quantity * laptops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", laptops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto laptopLevel;
                }
            }

            else if (item == 6)
            {

                printf("\n==============================================\n");
                printf("ACER Laptop details\n");
                for (int i = 10; i < 12; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 9, laptops[i].name, laptops[i].price, laptops[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item >= 1 && item <= 2)
                {
                    int index = item + 9;
                    if (laptops[index].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[index].price);
                        laptops[index].stock -= quantity;
                        addPurchase(laptops[index].name, quantity, quantity * laptops[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", laptops[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto laptopLevel;
                }
            }

            else
            {
                system("clear");
                printf("You have entered wrong option,please choose between 1 to 6\n");
                goto laptopLevel;
            }
        }

        // speaker
        else if (item == 4)
        {
            system("clear");
        speakerLevel:
            printf("\n==============================================\n");
            printf("Available speaker models:\n");
            printf("(1) JBL   \n");
            printf("(2) Sony     \n");
            printf("(3) Bose    \n");
            printf("(4) Marshall   \n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");

            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("JBL speaker details\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, speakers[i].name, speakers[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (speakers[index].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[index].price);
                        speakers[index].stock -= quantity;
                        addPurchase(speakers[index].name, quantity, quantity * speakers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", speakers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto speakerLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Sony speaker details\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, speakers[i].name, speakers[i].price, speakers[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (speakers[index].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[index].price);
                        speakers[index].stock -= quantity;
                        addPurchase(speakers[index].name, quantity, quantity * speakers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", speakers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto speakerLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Bose speaker details\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, speakers[i].name, speakers[i].price, speakers[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (speakers[index].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[index].price);
                        speakers[index].stock -= quantity;
                        addPurchase(speakers[index].name, quantity, quantity * speakers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", speakers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto speakerLevel;
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("Marshall speaker details\n");
                for (int i = 6; i < 8; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 5, speakers[i].name, speakers[i].price, speakers[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 5;
                    if (speakers[index].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[index].price);
                        speakers[index].stock -= quantity;
                        addPurchase(speakers[index].name, quantity, quantity * speakers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", speakers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto speakerLevel;
                }
            }

            else
            {
                system("clear");
                printf("You have entered wrong option,please choose between 1 to 6\n");
                goto speakerLevel;
            }
        }

        // headphone
        else if (item == 5)
        {
            system("clear");
        headphoneLevel:
            printf("\n==============================================\n");
            printf("Available headphone models:\n");
            printf("(1) Sony   \n");
            printf("(2) Bose     \n");
            printf("(3) Sennheiser    \n");
            printf("(4) Marshall   \n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("Sony headphone details\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, headphones[i].name, headphones[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (headphones[index].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[index].price);
                        headphones[index].stock -= quantity;
                        addPurchase(headphones[index].name, quantity, quantity * headphones[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", headphones[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto headphoneLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Bose headphone details\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, headphones[i].name, headphones[i].price, headphones[i].stock);
                }

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (headphones[index].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[index].price);
                        headphones[index].stock -= quantity;
                        addPurchase(headphones[index].name, quantity, quantity * headphones[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", headphones[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto headphoneLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Sennheiser headphone details\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, headphones[i].name, headphones[i].price, headphones[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (headphones[index].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[index].price);
                        headphones[index].stock -= quantity;
                        addPurchase(headphones[index].name, quantity, quantity * headphones[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", headphones[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto headphoneLevel;
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("Marshall headphone details\n");
                for (int i = 6; i < 8; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 5, headphones[i].name, headphones[i].price, headphones[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 5;
                    if (headphones[index].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[index].price);
                        headphones[index].stock -= quantity;
                        addPurchase(headphones[index].name, quantity, quantity * headphones[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", headphones[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto headphoneLevel;
                }
            }

            else
            {
                system("clear");
                printf("\n==============================================\n");
                printf("You have entered wrong option,please try again");
                printf("\n==============================================\n");
                goto headphoneLevel;
            }
        }

        else
        {
            system("clear");
            printf("\n==============================================\n");
            printf("You have entered wrong option,please try again");
            printf("\n==============================================\n");
            goto electricLevel;
        }
    }

    // clothes
    else if (choice == 2)
    {

    clothesLevel:
        system("clear");
        printf("\n==============================================\n");
        printf("Available clothes categories:\n");
        printf("(1) Shirt\n");
        printf("(2) Trousers\n");
        printf("(3) Jackets\n");
        printf("==============================================\n");
        printf("Please enter your choice(in number) : ");
        scanf("%d", &item);
        // Shirt
        if (item == 1)
        {
            system("clear");
        shirtlevel:
            printf("\n==============================================\n");
            printf("Available Shirt brands:\n");
            printf("(1) Levi\n");
            printf("(2) Tommy Hilfiger\n");
            printf("(3) Ralph Lauren\n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");

            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("Levi's shirt details\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, shirts[i].name, shirts[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (shirts[index].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[index].price);
                        shirts[index].stock -= quantity;
                        addPurchase(shirts[index].name, quantity, quantity * shirts[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", shirts[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto shirtlevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Tommy Hilfiger shirt details\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, shirts[i].name, shirts[i].price, shirts[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (shirts[index].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[index].price);
                        shirts[index].stock -= quantity;
                        addPurchase(shirts[index].name, quantity, quantity * shirts[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", shirts[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto shirtlevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Ralph Lauren shirt details\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, shirts[i].name, shirts[i].price, shirts[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (shirts[index].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[index].price);
                        shirts[index].stock -= quantity;
                        addPurchase(shirts[index].name, quantity, quantity * shirts[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", shirts[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto shirtlevel;
                }
            }

            else
            {
                system("clear");
                printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
                goto shirtlevel;
            }
        }

        // trousers
        else if (item == 2)
        {
            system("clear");
        trouserLevel:
            printf("\n==============================================\n");
            printf("Available trouser brands:\n");
            printf("(1) Levi\n");
            printf("(2) Tommy Hilfiger\n");
            printf("(3) Ralph Lauren\n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("Levi's trouser details:\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, trousers[i].name, trousers[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (trousers[index].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[index].price);
                        trousers[index].stock -= quantity;
                        addPurchase(trousers[index].name, quantity, quantity * trousers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", trousers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto trouserLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Tommy Hilfiger trouser details:\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, trousers[i].name, trousers[i].price, trousers[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (trousers[index].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[index].price);
                        trousers[index].stock -= quantity;
                        addPurchase(trousers[index].name, quantity, quantity * trousers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", trousers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto trouserLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Ralph Lauren trouser details:\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, trousers[i].name, trousers[i].price, trousers[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (trousers[index].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[index].price);
                        trousers[index].stock -= quantity;
                        addPurchase(trousers[index].name, quantity, quantity * trousers[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", trousers[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto trouserLevel;
                }
            }

            else
            {
                system("clear");
                printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
                goto trouserLevel;
            }
        }

        // Jackets
        else if (item == 3)
        {

            system("clear");
        jacketLevel:
            printf("\n==============================================\n");
            printf("Available jacket brands:\n");
            printf("(1) Levi\n");
            printf("(2) Tommy Hilfiger\n");
            printf("(3) Ralph Lauren\n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("Levi's jacket details:\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, jackets[i].name, jackets[i].price, desktops[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item - 1;
                    if (jackets[index].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[index].price);
                        jackets[index].stock -= quantity;
                        addPurchase(jackets[index].name, quantity, quantity * jackets[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", jackets[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto jacketLevel;
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Tommy Hilfiger jacket details:\n");
                for (int i = 2; i < 4; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, jackets[i].name, jackets[i].price, jackets[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 1;
                    if (jackets[index].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[index].price);
                        jackets[index].stock -= quantity;
                        addPurchase(jackets[index].name, quantity, quantity * jackets[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", jackets[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto jacketLevel;
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Ralph Lauren jacket details:\n");
                for (int i = 4; i < 6; i++)
                {
                    printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, jackets[i].name, jackets[i].price, jackets[i].stock);
                }
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item >= 1 && item <= 2)
                {
                    int index = item + 3;
                    if (jackets[index].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[index].price);
                        jackets[index].stock -= quantity;
                        addPurchase(jackets[index].name, quantity, quantity * jackets[index].price);
                    }
                    else
                    {
                        printf("\n\nSorry, we only have %d pieces in our stock\n\n", jackets[index].stock);
                    }
                }
                else
                {
                    printf("Invalid choice, please try again.\n");
                    goto jacketLevel;
                }
            }

            else
            {
                system("clear");
                printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
                goto jacketLevel;
            }
        }

        else
        {
            system("clear");
            printf("\n==============================================\n");
            printf("You have entered wrong option,please try again");
            printf("\n==============================================\n");
            goto clothesLevel;
        }
    }

    // Shoes
    else if (choice == 3)
    {

    shoesLevel:
        system("clear");
        printf("\n==============================================\n");
        printf("Available shoe brands:\n");
        printf("(1) Nike\n");
        printf("(2) Adidas\n");
        printf("(3) Puma\n");
        printf("==============================================\n");
        printf("Please enter your choice(in number) : ");
        scanf("%d", &item);
        // Nike
        if (item == 1)
        {
            system("clear");
        nikeLevel:
            printf("\n==============================================\n");
            printf("Nike shoe details:\n");
            for (int i = 0; i < 2; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, shoes[i].name, shoes[i].price, desktops[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item >= 1 && item <= 2)
            {
                int index = item - 1;
                if (shoes[index].stock >= quantity)
                {
                    *billamount += (quantity * shoes[index].price);
                    shoes[index].stock -= quantity;
                    addPurchase(shoes[index].name, quantity, quantity * shoes[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", shoes[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto shoesLevel;
            }
        }

        // adidas
        else if (item == 2)
        {
            system("clear");
            printf("\n==============================================\n");
            printf("Adidas shoe details:\n");
            for (int i = 2; i < 4; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, shoes[i].name, shoes[i].price, shoes[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item >= 1 && item <= 2)
            {
                int index = item + 1;
                if (shoes[index].stock >= quantity)
                {
                    *billamount += (quantity * shoes[index].price);
                    shoes[index].stock -= quantity;
                    addPurchase(shoes[index].name, quantity, quantity * shoes[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", shoes[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto shoesLevel;
            }
        }

        // puma
        else if (item == 3)
        {
            system("clear");
            printf("\n==============================================\n");
            printf("Puma shoe details:\n");
            for (int i = 4; i < 6; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, shoes[i].name, shoes[i].price, shoes[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item >= 1 && item <= 2)
            {
                int index = item + 3;
                if (shoes[index].stock >= quantity)
                {
                    *billamount += (quantity * shoes[index].price);
                    shoes[index].stock -= quantity;
                    addPurchase(shoes[index].name, quantity, quantity * shoes[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", shoes[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto shoesLevel;
            }
        }

        else
        {
            system("clear");
            printf("You have entered You have entered wrong option,please choose between 1 to 3\n");
            goto shoesLevel;
        }
    }

    // Cars
    else if (choice == 4)
    {

    carlevel:
        system("clear");
        printf("\n==============================================\n");
        printf("Available Cars brands:\n");
        printf("(1) Toyota\n");
        printf("(2) Honda\n");
        printf("(3) Ford\n");
        printf("==============================================\n");
        printf("Please enter your choice(in number) : ");
        scanf("%d", &item);

        // Toyota
        if (item == 1)
        {
            system("clear");

            printf("\n==============================================\n");
            printf("Available Toyota cars:\n");
            for (int i = 0; i < 2; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, cars[i].name, cars[i].price, desktops[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item >= 1 && item <= 2)
            {
                int index = item - 1;
                if (cars[index].stock >= quantity)
                {
                    *billamount += (quantity * cars[index].price);
                    cars[index].stock -= quantity;
                    addPurchase(cars[index].name, quantity, quantity * cars[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", cars[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto carlevel;
            }
        }

        // Honda
        else if (item == 2)
        {
            printf("\n==============================================\n");
            printf("Available Honda cars:\n");
            for (int i = 2; i < 4; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, cars[i].name, cars[i].price, cars[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item >= 1 && item <= 2)
            {
                int index = item + 1;
                if (cars[index].stock >= quantity)
                {
                    *billamount += (quantity * cars[index].price);
                    cars[index].stock -= quantity;
                    addPurchase(cars[index].name, quantity, quantity * cars[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", cars[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto carlevel;
            }
        }

        // Suzuki
        else if (item == 3)
        {
            printf("\n==============================================\n");
            printf("Available Ford cars:\n");
            for (int i = 4; i < 6; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, cars[i].name, cars[i].price, cars[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (item >= 1 && item <= 2)
            {
                int index = item + 3;
                if (cars[index].stock >= quantity)
                {
                    *billamount += (quantity * cars[index].price);
                    cars[index].stock -= quantity;
                    addPurchase(cars[index].name, quantity, quantity * cars[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", cars[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto carlevel;
            }
        }

        else
        {
            system("clear");
            printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
            goto carlevel;
        }
    }

    // Bikes
    else if (choice == 5)
    {

    bikeLevel:
        system("clear");
        printf("\n==============================================\n");
        printf("Available Bike brands:\n");
        printf("(1) Yamaha\n");
        printf("(2) Honda\n");
        printf("(3) Suzuki\n");
        printf("==============================================\n");
        printf("Please enter your choice(in number) : ");
        scanf("%d", &item);

        // Yamaha
        if (item == 1)
        {
            system("clear");

            printf("\n==============================================\n");
            printf("Available Yamaha bikes:\n");
            for (int i = 0; i < 2; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i + 1, motorcycles[i].name, motorcycles[i].price, desktops[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (item >= 1 && item <= 2)
            {
                int index = item - 1;
                if (motorcycles[index].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[index].price);
                    motorcycles[index].stock -= quantity;
                    addPurchase(motorcycles[index].name, quantity, quantity * motorcycles[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", motorcycles[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto bikeLevel;
            }
        }

        // Honda
        else if (item == 2)
        {
            printf("\n==============================================\n");
            printf("Available Honda motorcycles:\n");
            for (int i = 2; i < 4; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 1, motorcycles[i].name, motorcycles[i].price, motorcycles[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (item >= 1 && item <= 2)
            {
                int index = item + 1;
                if (motorcycles[index].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[index].price);
                    motorcycles[index].stock -= quantity;
                    addPurchase(motorcycles[index].name, quantity, quantity * motorcycles[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", motorcycles[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto bikeLevel;
            }
        }

        // Suzuki
        else if (item == 3)
        {
            printf("\n==============================================\n");
            printf("Available Suzuki motorcycles:\n");
            for (int i = 4; i < 6; i++)
            {
                printf("(%d) %s => Price: %d => Stock: %d pieces\n", i - 3, motorcycles[i].name, motorcycles[i].price, motorcycles[i].stock);
            }
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item >= 1 && item <= 2)
            {
                int index = item + 3;
                if (motorcycles[index].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[index].price);
                    motorcycles[index].stock -= quantity;
                    addPurchase(motorcycles[index].name, quantity, quantity * motorcycles[index].price);
                }
                else
                {
                    printf("\n\nSorry, we only have %d pieces in our stock\n\n", motorcycles[index].stock);
                }
            }
            else
            {
                printf("Invalid choice, please try again.\n");
                goto bikeLevel;
            }
        }

        else
        {
            system("clear");
            printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
            goto bikeLevel;
        }
    }

    else
    {
        system("clear");
        printf("\n==============================================\n");
        printf("You have entered wrong option,please try again");
        printf("\n==============================================\n");
        goto itemLevel;
    }
}

int main()
{
    char choiceagain;
    float billamount = 0;
    char customerName[100], customerAddress[200], paymentType[20], mobileNumber[20], email[50];

    system("clear");

    onlineshopping(&billamount);
    printf("\n==============================================\n");
    printf("\nTotal amount is: %.2f Taka\n", billamount);
    printf("\n==============================================\n");

checkAgain:
    printf("\nDo you want to continue shopping?\nPress 'y' for yes and 'n' for no\n");
    scanf(" %c", &choiceagain);
    if (choiceagain == 'y' || choiceagain == 'Y')
    {
        system("clear");
        onlineshopping(&billamount);
        printf("\nTotal amount is: %.2f Taka\n", billamount);
        goto checkAgain;
    }
    else if (choiceagain == 'n' || choiceagain == 'N')
    {
        if (billamount == 0)
        {
            printf("You don't have to pay any money, thanks for visiting.\n");
        }
        else
        {
        
            printf("Enter your name: ");
            scanf(" %[^\n]%*c", customerName);
            printf("Enter your address: ");
            scanf(" %[^\n]%*c", customerAddress);
            printf("Enter mobile number: ");
            scanf(" %[^\n]%*c", mobileNumber);
            printf("Enter email address: ");
            scanf(" %[^\n]%*c", email);
            printf("Enter payment type (Cash, Card, etc.): ");
            scanf(" %[^\n]%*c", paymentType);

          
            system("clear");
            printf("\n==============================================\n");
            printf("************** PURCHASE SUMMARY **************\n");
            printf("Customer Name   : %s\n", customerName);
            printf("Customer Address: %s\n", customerAddress);
            printf("Mobile Number   : %s\n", mobileNumber);
            printf("Email Address   : %s\n", email);
            printf("Payment Type    : %s\n", paymentType);
            printf("==============================================\n");
            printf("Items Purchased:\n");
            for (int i = 0; i < purchaseCount; i++)
            {
                printf(" - %s, Quantity: %d, Total: %d Taka\n",
                       purchasedItems[i].name,
                       purchasedItems[i].quantity,
                       purchasedItems[i].price);
            }
            printf("==============================================\n");
            printf("Total Amount    : %.2f Taka\n", billamount);
            printf("==============================================\n");
            printf("************* Thanks for Shopping *************\n");
            printf("==============================================\n");
        }
    }
    else
    {
        printf("You have entered an invalid option, please try again.\n");
        goto checkAgain;
    }

    return 0;
}
