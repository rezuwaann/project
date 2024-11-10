#include <stdio.h>
#include <stdlib.h>

struct Product
{
    char name[50];
    int price;
    int stock;
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
    // You can add more products if needed

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
    {"Ford - Endeavour", 4500000, 7}
};

struct Product motorcycles[] = {
    {"Yamaha - YZF R15", 150000, 20},
    {"Yamaha - MT-15", 140000, 18},
    {"Honda - CBR 250R", 165000, 10},
    {"Honda - CB Shine", 75000, 25},
    {"Suzuki - Gixxer SF", 130000, 15},
    {"Suzuki - Intruder", 155000, 12}
};


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
    if (choice == 1 )
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
            printf("(6) Samsung \n");
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");
            if (item == 1)
            {
                printf("\n==============================================\n");
                printf("Apple mobile details\n");
                printf("(1) Iphone 14 pro max=> Price : %d   => On stock :%d pieces\n", electronics[0].price, electronics[0].stock);
                printf("(2) Iphone 14 pro => Price : %d => On stock :%d pieces\n", electronics[1].price, electronics[1].stock);
                printf("(3) Iphone 13 pro max=> Price : %d => On stock :%d pieces\n", electronics[2].price, electronics[2].stock);
                printf("(4) Iphone 13 pro => Price : %d => On stock :%d pieces\n", electronics[3].price, electronics[3].stock);
                printf("(5) Iphone 12 pro max=> Price : %d => On stock :%d pieces\n", electronics[4].price, electronics[4].stock);
                printf("(6) Iphone 12 pro => Price : %d => On stock :%d pieces\n", electronics[5].price, electronics[5].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (electronics[0].stock >= quantity)
                    {

                        *billamount += (quantity * electronics[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[0].stock);
                        electronics[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (electronics[1].stock >= quantity)
                    {

                        *billamount += (quantity * electronics[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[1].stock);
                        electronics[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[1].stock);
                    }
                }
                else if (item == 3)
                {
                    if (electronics[2].stock >= quantity)
                    {

                        *billamount += (quantity * electronics[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[2].stock);
                        electronics[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[2].stock);
                    }
                }
                else if (item == 4)
                {
                    if (electronics[3].stock >= quantity)
                    {

                        *billamount += (quantity * electronics[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[3].stock);
                        electronics[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[3].stock);
                    }
                }
                else if (item == 5)
                {
                    if (electronics[4].stock >= quantity)
                    {

                        *billamount += (quantity * electronics[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[4].stock);
                        electronics[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[4].stock);
                    }
                }
                else if (item == 6)
                {
                    if (electronics[4].stock >= quantity)
                    {

                        *billamount += (quantity * electronics[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[4].stock);
                        electronics[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[4].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Vivo mobile details\n");
                printf("(1) Vivo X90 Pro        => Price : %d => On stock :%d pieces\n", electronics[6].price, electronics[6].stock);
                printf("(2) Vivo X80 Pro        => Price : %d => On stock :%d pieces\n", electronics[7].price, electronics[7].stock);
                printf("(3) Vivo V27 Pro        => Price : %d => On stock :%d pieces\n", electronics[8].price, electronics[8].stock);
                printf("(4) Vivo V25 Pro        => Price : %d => On stock :%d pieces\n", electronics[9].price, electronics[9].stock);
                printf("(5) Vivo Y100           => Price : %d => On stock :%d pieces\n", electronics[10].price, electronics[10].stock);
                printf("(6) Vivo Y75            => Price : %d => On stock :%d pieces\n", electronics[11].price, electronics[11].stock);
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (electronics[6].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[6].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[6].stock);
                        electronics[6].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[6].stock);
                    }
                }
                else if (item == 2)
                {
                    if (electronics[7].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[7].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[7].stock);
                        electronics[7].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[7].stock);
                    }
                }
                else if (item == 3)
                {
                    if (electronics[8].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[8].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[8].stock);
                        electronics[8].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[8].stock);
                    }
                }
                else if (item == 4)
                {
                    if (electronics[9].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[9].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[9].stock);
                        electronics[9].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[9].stock);
                    }
                }
                else if (item == 5)
                {
                    if (electronics[10].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[10].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[10].stock);
                        electronics[10].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[10].stock);
                    }
                }
                else if (item == 6)
                {
                    if (electronics[11].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[11].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[11].stock);
                        electronics[11].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[11].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Oppo mobile details\n");
                printf("(1) Oppo Find X6 Pro    => Price : %d => On stock :%d pieces\n", electronics[12].price, electronics[12].stock);
                printf("(2) Oppo Reno10 Pro+    => Price : %d => On stock :%d pieces\n", electronics[13].price, electronics[13].stock);
                printf("(3) Oppo Reno10 Pro     => Price : %d => On stock :%d pieces\n", electronics[14].price, electronics[14].stock);
                printf("(4) Oppo Reno8 Pro      => Price : %d => On stock :%d pieces\n", electronics[15].price, electronics[15].stock);
                printf("(5) Oppo F23 5G         => Price : %d => On stock :%d pieces\n", electronics[16].price, electronics[16].stock);
                printf("(6) Oppo A78            => Price : %d => On stock :%d pieces\n", electronics[17].price, electronics[17].stock);
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (electronics[12].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[12].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[12].stock);
                        electronics[12].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[12].stock);
                    }
                }
                else if (item == 2)
                {
                    if (electronics[13].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[13].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[13].stock);
                        electronics[13].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[13].stock);
                    }
                }
                else if (item == 3)
                {
                    if (electronics[14].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[14].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[14].stock);
                        electronics[14].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[14].stock);
                    }
                }
                else if (item == 4)
                {
                    if (electronics[15].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[15].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[15].stock);
                        electronics[15].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[15].stock);
                    }
                }
                else if (item == 5)
                {
                    if (electronics[16].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[16].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[16].stock);
                        electronics[16].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[16].stock);
                    }
                }
                else if (item == 6)
                {
                    if (electronics[17].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[17].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[17].stock);
                        electronics[17].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[17].stock);
                    }
                }
            }

            else if (item == 4)
            {
                printf("\n==============================================\n");
                printf("Redmi mobile details\n");
                printf("(1) Redmi Note 12 Pro+  => Price : %d => On stock :%d pieces\n", electronics[18].price, electronics[18].stock);
                printf("(2) Redmi Note 12 Pro   => Price : %d => On stock :%d pieces\n", electronics[19].price, electronics[19].stock);
                printf("(3) Redmi Note 12       => Price : %d => On stock :%d pieces\n", electronics[20].price, electronics[20].stock);
                printf("(4) Redmi K50i          => Price : %d => On stock :%d pieces\n", electronics[21].price, electronics[21].stock);
                printf("(5) Redmi 12 5G         => Price : %d => On stock :%d pieces\n", electronics[22].price, electronics[22].stock);
                printf("(6) Redmi 10            => Price : %d => On stock :%d pieces\n", electronics[23].price, electronics[23].stock);
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (electronics[18].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[18].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[18].stock);
                        electronics[18].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[18].stock);
                    }
                }
                else if (item == 2)
                {
                    if (electronics[19].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[19].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[19].stock);
                        electronics[19].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[19].stock);
                    }
                }
                else if (item == 3)
                {
                    if (electronics[20].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[20].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[20].stock);
                        electronics[20].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[20].stock);
                    }
                }
                else if (item == 4)
                {
                    if (electronics[21].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[21].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[21].stock);
                        electronics[21].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[21].stock);
                    }
                }
                else if (item == 5)
                {
                    if (electronics[22].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[22].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[22].stock);
                        electronics[22].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[22].stock);
                    }
                }
                else if (item == 6)
                {
                    if (electronics[23].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[23].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[23].stock);
                        electronics[23].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[23].stock);
                    }
                }
            }

            else if (item == 5)
            {
                printf("\n==============================================\n");
                printf("Realme mobile details\n");
                printf("(1) Realme GT 3         => Price : %d => On stock :%d pieces\n", electronics[24].price, electronics[24].stock);
                printf("(2) Realme GT 2 Pro     => Price : %d => On stock :%d pieces\n", electronics[25].price, electronics[25].stock);
                printf("(3) Realme 11 Pro+      => Price : %d => On stock :%d pieces\n", electronics[26].price, electronics[26].stock);
                printf("(4) Realme 11 Pro       => Price : %d => On stock :%d pieces\n", electronics[27].price, electronics[27].stock);
                printf("(5) Realme Narzo 60 Pro => Price : %d => On stock :%d pieces\n", electronics[28].price, electronics[28].stock);
                printf("(6) Realme C55          => Price : %d => On stock :%d pieces\n", electronics[29].price, electronics[29].stock);
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (electronics[24].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[24].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[24].stock);
                        electronics[24].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[24].stock);
                    }
                }
                else if (item == 2)
                {
                    if (electronics[25].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[25].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[25].stock);
                        electronics[25].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[25].stock);
                    }
                }
                else if (item == 3)
                {
                    if (electronics[26].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[26].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[26].stock);
                        electronics[26].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[26].stock);
                    }
                }
                else if (item == 4)
                {
                    if (electronics[27].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[27].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[27].stock);
                        electronics[27].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[27].stock);
                    }
                }
                else if (item == 5)
                {
                    if (electronics[28].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[28].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[28].stock);
                        electronics[28].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[28].stock);
                    }
                }
                else if (item == 6)
                {
                    if (electronics[29].stock >= quantity)
                    {
                        *billamount += (quantity * electronics[29].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", electronics[29].stock);
                        electronics[29].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", electronics[29].stock);
                    }
                }
            }

            else if (item == 6)
            {
                printf("\n==============================================\n");
                printf("Samsung mobile details\n");
                printf("(1) Samsung Galaxy S23 Ultra  => Price : 125000 => On stock :%d pieces\n", quantity);
                printf("(2) Samsung Galaxy S23+       => Price : 95000 => On stock :%d pieces\n", quantity);
                printf("(3) Samsung Galaxy S23        => Price : 80000 => On stock :%d pieces\n", quantity);
                printf("(4) Samsung Galaxy Z Flip 5   => Price : 100000 => On stock :%d pieces\n", quantity);
                printf("(5) Samsung Galaxy A54 5G     => Price : 40000 => On stock :%d pieces\n", quantity);
                printf("(6) Samsung Galaxy M34 5G     => Price : 20000 => On stock :%d pieces\n", quantity);
                printf("==============================================\n");

                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {

                    *billamount = *billamount + (quantity * 125000);
                }
                else if (item == 2)
                {

                    *billamount = *billamount + (quantity * 95000);
                }
                else if (item == 3)
                {

                    *billamount = *billamount + (quantity * 80000);
                }
                else if (item == 4)
                {

                    *billamount = *billamount + (quantity * 100000);
                }
                else if (item == 5)
                {

                    *billamount = *billamount + (quantity * 40000);
                }
                else if (item == 6)
                {

                    *billamount = *billamount + (quantity * 20000);
                }
            }

            else
            {
                system("clear");
                printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
                goto mobileLevel;
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
                printf("(1) Dell - Inspiron      => Price : %d => On stock :%d pieces\n", desktops[0].price, desktops[0].stock);
                printf("(2) Dell - XPS           => Price : %d => On stock :%d pieces\n", desktops[1].price, desktops[1].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (desktops[0].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[0].stock);
                        desktops[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (desktops[1].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[1].stock);
                        desktops[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("HP Desktop details\n");
                printf("(1) HP - Pavilion        => Price : %d => On stock :%d pieces\n", desktops[2].price, desktops[2].stock);
                printf("(2) HP - Omen            => Price : %d => On stock :%d pieces\n", desktops[3].price, desktops[3].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item == 1)
                {
                    if (desktops[2].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[2].stock);
                        desktops[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (desktops[3].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[3].stock);
                        desktops[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("APPLE Desktop details\n");
                printf("(1) Apple - iMac         => Price : %d => On stock :%d pieces\n", desktops[4].price, desktops[4].stock);
                printf("(2) Apple - Mac Pro      => Price : %d => On stock :%d pieces\n", desktops[5].price, desktops[5].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (desktops[4].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[4].stock);
                        desktops[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (desktops[5].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[5].stock);
                        desktops[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[5].stock);
                    }
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("LENOVO Desktop details\n");
                printf("(1) Lenovo - ThinkCentre => Price : %d  => On stock :%d pieces\n", desktops[6].price, desktops[6].stock);
                printf("(2) Lenovo - Legion      => Price : %d  => On stock :%d pieces\n", desktops[7].price, desktops[7].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (desktops[6].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[6].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[6].stock);
                        desktops[6].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[6].stock);
                    }
                }
                else if (item == 2)
                {
                    if (desktops[7].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[7].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[7].stock);
                        desktops[7].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[7].stock);
                    }
                }
            }

            else if (item == 5)
            {

                printf("\n==============================================\n");
                printf("ASUS Desktop details\n");
                printf("(1) Asus - ROG           => Price : %d => On stock :%d pieces\n", desktops[8].price, desktops[8].stock);
                printf("(2) Asus - VivoPC       => Price : %d => On stock :%d pieces\n", desktops[9].price, desktops[9].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (desktops[8].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[8].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[8].stock);
                        desktops[8].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[8].stock);
                    }
                }
                else if (item == 2)
                {
                    if (desktops[9].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[9].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[9].stock);
                        desktops[9].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[9].stock);
                    }
                }
            }

            else if (item == 6)
            {

                printf("\n==============================================\n");
                printf("ACER Desktop details\n");
                printf("(1) Acer - Aspire       => Price : %d => On stock :%d pieces\n", desktops[10].price, desktops[10].stock);
                printf("(2) Acer - Predator     => Price : %d => On stock :%d pieces\n", desktops[11].price, desktops[11].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item == 1)
                {
                    if (desktops[10].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[10].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[10].stock);
                        desktops[10].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[10].stock);
                    }
                }
                else if (item == 2)
                {
                    if (desktops[11].stock >= quantity)
                    {
                        *billamount += (quantity * desktops[11].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", desktops[11].stock);
                        desktops[11].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", desktops[11].stock);
                    }
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
                printf("(1) Dell - Inspiron      => Price : %d => On stock :%d pieces\n", laptops[0].price, laptops[0].stock);
                printf("(2) Dell - XPS           => Price : %d => On stock :%d pieces\n", laptops[1].price, laptops[1].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[0].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[0].stock);
                        laptops[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[1].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[1].stock);
                        laptops[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("HP Laptop details\n");
                printf("(1) HP - Pavilion        => Price : %d => On stock :%d pieces\n", laptops[2].price, laptops[2].stock);
                printf("(2) HP - Omen            => Price : %d => On stock :%d pieces\n", laptops[3].price, laptops[3].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item == 1)
                {
                    if (laptops[2].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[2].stock);
                        laptops[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[3].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[3].stock);
                        laptops[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("APPLE Laptop details\n");
                printf("(1) Apple - MacBook Air  => Price : %d => On stock :%d pieces\n", laptops[4].price, laptops[4].stock);
                printf("(2) Apple - MacBook Pro  => Price : %d => On stock :%d pieces\n", laptops[5].price, laptops[5].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[4].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[4].stock);
                        laptops[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[5].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[5].stock);
                        laptops[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[5].stock);
                    }
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("LENOVO Laptop details\n");
                printf("(1) Lenovo - ThinkPad    => Price : %d  => On stock :%d pieces\n", laptops[6].price, laptops[6].stock);
                printf("(2) Lenovo - Legion      => Price : %d  => On stock :%d pieces\n", laptops[7].price, laptops[7].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[6].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[6].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[6].stock);
                        laptops[6].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[6].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[7].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[7].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[7].stock);
                        laptops[7].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[7].stock);
                    }
                }
            }

            else if (item == 5)
            {

                printf("\n==============================================\n");
                printf("ASUS Laptop details\n");
                printf("(1) Asus - ROG           => Price : %d => On stock :%d pieces\n", laptops[8].price, laptops[8].stock);
                printf("(2) Asus - VivoBook      => Price : %d => On stock :%d pieces\n", laptops[9].price, laptops[9].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[8].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[8].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[8].stock);
                        laptops[8].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[8].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[9].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[9].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[9].stock);
                        laptops[9].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[9].stock);
                    }
                }
            }

            else if (item == 6)
            {

                printf("\n==============================================\n");
                printf("ACER Laptop details\n");
                printf("(1) Acer - Aspire        => Price : %d => On stock :%d pieces\n", laptops[10].price, laptops[10].stock);
                printf("(2) Acer - Predator      => Price : %d => On stock :%d pieces\n", laptops[11].price, laptops[11].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (item == 1)
                {
                    if (laptops[10].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[10].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[10].stock);
                        laptops[10].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[10].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[11].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[11].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[11].stock);
                        laptops[11].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[11].stock);
                    }
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
                printf("(1) JBL - Flip 5       => Price : %d => On stock :%d pieces\n", speakers[0].price, speakers[0].stock);
                printf("(2) JBL - Charge 4     => Price : %d => On stock :%d pieces\n", speakers[1].price, speakers[1].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (speakers[0].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[0].stock);
                        speakers[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (speakers[1].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[1].stock);
                        speakers[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Sony speaker details\n");
                printf("(1) Sony - SRS-XB12    => Price : %d => On stock :%d pieces\n", speakers[2].price, speakers[2].stock);
                printf("(2) Sony - SRS-XB43    => Price : %d => On stock :%d pieces\n", speakers[3].price, speakers[3].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (speakers[2].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[2].stock);
                        speakers[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (speakers[3].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[3].stock);
                        speakers[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Bose speaker details\n");
                printf("(1) Bose - SoundLink   => Price : %d => On stock :%d pieces\n", speakers[4].price, speakers[4].stock);
                printf("(2) Bose - Home Speaker => Price : %d => On stock :%d pieces\n", speakers[5].price, speakers[5].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (speakers[4].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[4].stock);
                        speakers[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (speakers[5].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[5].stock);
                        speakers[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[5].stock);
                    }
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("Marshall speaker details\n");
                printf("(7) Marshall - Emberton => Price : %d => On stock :%d pieces\n", speakers[6].price, speakers[6].stock);
                printf("(8) Marshall - Stanmore => Price : %d => On stock :%d pieces\n", speakers[7].price, speakers[7].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (speakers[6].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[6].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[6].stock);
                        speakers[6].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[6].stock);
                    }
                }
                else if (item == 2)
                {
                    if (speakers[7].stock >= quantity)
                    {
                        *billamount += (quantity * speakers[7].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", speakers[7].stock);
                        speakers[7].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", speakers[7].stock);
                    }
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
                printf("(1) Sony - WH-1000XM4  => Price : %d => On stock :%d pieces\n", headphones[0].price, headphones[0].stock);
                printf("(2) Sony - WF-1000XM3  => Price : %d => On stock :%d pieces\n", headphones[1].price, headphones[1].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (headphones[0].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[0].stock);
                        headphones[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[0].stock);
                    }
                }

                else if (item == 2)
                {
                    if (headphones[1].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[1].stock);
                        headphones[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Bose headphone details\n");
                printf("(1) Bose - QC35 II     => Price : %d => On stock :%d pieces\n", headphones[2].price, headphones[2].stock);
                printf("(2) Bose - Sport Earbuds => Price : %d => On stock :%d pieces\n", headphones[3].price, headphones[3].stock);

                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (headphones[2].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[2].stock);
                        headphones[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (headphones[3].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[3].stock);
                        headphones[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Sennheiser headphone details\n");
                printf("(1) Sennheiser - HD 450BT => Price : %d => On stock :%d pieces\n", headphones[4].price, headphones[4].stock);
                printf("(2) Sennheiser - Momentum => Price : %d => On stock :%d pieces\n", headphones[5].price, headphones[5].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (headphones[4].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[4].stock);
                        headphones[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (headphones[5].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[5].stock);
                        headphones[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[5].stock);
                    }
                }
            }

            else if (item == 4)
            {

                printf("\n==============================================\n");
                printf("Marshall headphone details\n");
                printf("(1) Marshall - Emberton => Price : %d => On stock :%d pieces\n", headphones[6].price, headphones[6].stock);
                printf("(2) Marshall - Stanmore => Price : %d => On stock :%d pieces\n", headphones[7].price, headphones[7].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (headphones[6].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[6].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[6].stock);
                        headphones[6].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[6].stock);
                    }
                }
                else if (item == 2)
                {
                    if (headphones[7].stock >= quantity)
                    {
                        *billamount += (quantity * headphones[7].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", headphones[7].stock);
                        headphones[7].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", headphones[7].stock);
                    }
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
    else if (choice == 2 )
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
                printf("(1) Levi's - 511 Slim Fit       => Price : %d => On stock :%d pieces\n", shirts[0].price, shirts[0].stock);
                printf("(2) Levi's - 502 Regular Fit    => Price : %d => On stock :%d pieces\n", shirts[1].price, shirts[1].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (shirts[0].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", shirts[0].stock);
                        shirts[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", shirts[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (shirts[1].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", shirts[1].stock);
                        shirts[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", shirts[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Tommy Hilfiger shirt details\n");
                printf("(1) Tommy Hilfiger - Regular  => Price : %d => On stock :%d pieces\n", shirts[2].price, shirts[2].stock);
                printf("(2) Tommy Hilfiger - Slim     => Price : %d => On stock :%d pieces\n", shirts[3].price, shirts[3].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (shirts[2].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", shirts[2].stock);
                        shirts[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", shirts[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (shirts[3].stock >= quantity)
                    {
                        *billamount += (quantity * shirts[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", shirts[3].stock);
                        shirts[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", shirts[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Ralph Lauren shirt details\n");
                printf("(1) Ralph Lauren - Polo       => Price : %d => On stock :%d pieces\n", shirts[4].price, shirts[4].stock);
                printf("(2) Ralph Lauren - Dress Shirt => Price : %d => On stock :%d pieces\n", shirts[5].price, shirts[5].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[4].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[4].stock);
                        laptops[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[5].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[5].stock);
                        laptops[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[5].stock);
                    }
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
                printf("(1) Levi's - 511 Slim Fit       => Price : %d => On stock :%d pieces\n", trousers[0].price, trousers[0].stock);
                printf("(2) Levi's - 502 Regular Fit    => Price : %d => On stock :%d pieces\n", trousers[1].price, trousers[1].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (trousers[0].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", trousers[0].stock);
                        trousers[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", trousers[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (trousers[1].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", trousers[1].stock);
                        trousers[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", trousers[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Tommy Hilfiger trouser details:\n");
                printf("(1) Tommy Hilfiger - Chino      => Price : %d => On stock :%d pieces\n", trousers[2].price, trousers[2].stock);
                printf("(2) Tommy Hilfiger - Slim       => Price : %d => On stock :%d pieces\n", trousers[3].price, trousers[3].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (trousers[2].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", trousers[2].stock);
                        trousers[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", trousers[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (trousers[3].stock >= quantity)
                    {
                        *billamount += (quantity * trousers[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", trousers[3].stock);
                        trousers[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", trousers[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Ralph Lauren trouser details:\n");
                printf("(5) Ralph Lauren - Classic Chino => Price : %d => On stock :%d pieces\n", trousers[4].price, trousers[4].stock);
                printf("(6) Ralph Lauren - Slim Chino   => Price : %d => On stock :%d pieces\n", trousers[5].price, trousers[5].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[4].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[4].stock);
                        laptops[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[5].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[5].stock);
                        laptops[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[5].stock);
                    }
                }
            }

            else
            {
                system("clear");
                printf("You have entered You have entered wrong option,please choose between 1 to 6\n");
                goto trouserLevel;
            }
        }

        // Jaclets
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
                printf("(1) Levi's - Trucker Jacket     => Price : %d => On stock :%d pieces\n", jackets[0].price, jackets[0].stock);
                printf("(2) Levi's - Sherpa Trucker     => Price : %d => On stock :%d pieces\n", jackets[1].price, jackets[1].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (jackets[0].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[0].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", jackets[0].stock);
                        jackets[0].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", jackets[0].stock);
                    }
                }
                else if (item == 2)
                {
                    if (jackets[1].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[1].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", jackets[1].stock);
                        jackets[1].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", jackets[1].stock);
                    }
                }
            }

            else if (item == 2)
            {
                printf("\n==============================================\n");
                printf("Tommy Hilfiger jacket details:\n");
                printf("(1) Tommy Hilfiger - Casual     => Price : %d => On stock :%d pieces\n", jackets[2].price, jackets[2].stock);
                printf("(2) Tommy Hilfiger - Field      => Price : %d => On stock :%d pieces\n", jackets[3].price, jackets[3].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (jackets[2].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[2].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", jackets[2].stock);
                        jackets[2].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", jackets[2].stock);
                    }
                }
                else if (item == 2)
                {
                    if (jackets[3].stock >= quantity)
                    {
                        *billamount += (quantity * jackets[3].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", jackets[3].stock);
                        jackets[3].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", jackets[3].stock);
                    }
                }
            }

            else if (item == 3)
            {
                printf("\n==============================================\n");
                printf("Ralph Lauren jacket details:\n");
                printf("(1) Ralph Lauren - Blazer       => Price : %d => On stock :%d pieces\n", jackets[4].price, jackets[4].stock);
                printf("(2) Ralph Lauren - Sport Coat   => Price : %d => On stock :%d pieces\n", jackets[5].price, jackets[5].stock);
                printf("==============================================\n");
                printf("Please enter your choice(in number) : ");
                scanf("%d", &item);

                printf("\n==============================================\n");

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if (item == 1)
                {
                    if (laptops[4].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[4].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[4].stock);
                        laptops[4].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[4].stock);
                    }
                }
                else if (item == 2)
                {
                    if (laptops[5].stock >= quantity)
                    {
                        *billamount += (quantity * laptops[5].price);
                        printf("\n\nWe have %d pieces in our stock\n\n", laptops[5].stock);
                        laptops[5].stock -= quantity;
                    }
                    else
                    {
                        printf("\n\nSorry, We only have %d pieces in our stock\n\n", laptops[5].stock);
                    }
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
    else if (choice == 3 )
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
            printf("(1) Nike - Air Max 270          => Price : %d => On stock :%d pieces\n", shoes[0].price, shoes[0].stock);
            printf("(2) Nike - Air Force 1          => Price : %d => On stock :%d pieces\n", shoes[1].price, shoes[1].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("\n");

            if (item == 1)
            {
                if (shoes[0].stock >= quantity)
                {
                    *billamount += (quantity * shoes[0].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", shoes[0].stock);
                    shoes[0].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", shoes[0].stock);
                }
            }
            else if (item == 2)
            {
                if (shoes[1].stock >= quantity)
                {
                    *billamount += (quantity * shoes[1].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", shoes[1].stock);
                    shoes[1].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", shoes[1].stock);
                }
            }
        }

        // adidas
        else if (item == 2)
        {
            system("clear");
            printf("\n==============================================\n");
            printf("Adidas shoe details:\n");
            printf("(1) Adidas - Ultraboost         => Price : %d => On stock :%d pieces\n", shoes[2].price, shoes[2].stock);
            printf("(2) Adidas - NMD                => Price : %d => On stock :%d pieces\n", shoes[3].price, shoes[3].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item == 1)
            {
                if (shoes[2].stock >= quantity)
                {
                    *billamount += (quantity * shoes[2].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", shoes[2].stock);
                    shoes[2].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", shoes[2].stock);
                }
            }
            else if (item == 2)
            {
                if (shoes[3].stock >= quantity)
                {
                    *billamount += (quantity * shoes[3].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", shoes[3].stock);
                    shoes[3].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", shoes[3].stock);
                }
            }
        }

        // puma
        else if (item == 3)
        {
            system("clear");
            printf("\n==============================================\n");
            printf("Puma shoe details:\n");
            printf("(1) Puma - RS-X                => Price : %d => On stock :%d pieces\n", shoes[4].price, shoes[4].stock);
            printf("(2) Puma - Suede Classic       => Price : %d => On stock :%d pieces\n", shoes[5].price, shoes[5].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item == 1)
            {
                if (shoes[4].stock >= quantity)
                {
                    *billamount += (quantity * shoes[4].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", shoes[4].stock);
                    shoes[4].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", shoes[4].stock);
                }
            }
            else if (item == 2)
            {
                if (shoes[5].stock >= quantity)
                {
                    *billamount += (quantity * shoes[5].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", shoes[5].stock);
                    shoes[5].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", shoes[5].stock);
                }
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
    else if (choice == 4 )
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
            printf("(1) Toyota - Corolla          => Price : %d => On stock :%d pieces\n", cars[0].price,cars[0].stock);
            printf("(2) Toyota - Camry            => Price : %d => On stock :%d pieces\n", cars[1].price,cars[1].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

             if (item == 1)
            {
                if (cars[0].stock >= quantity)
                {
                    *billamount += (quantity * cars[0].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", cars[0].stock);
                    cars[0].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", cars[0].stock);
                }
            }
            else if (item == 2)
            {
                if (cars[1].stock >= quantity)
                {
                    *billamount += (quantity * cars[1].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", cars[1].stock);
                    cars[1].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", cars[1].stock);
                }
            }
        }

        // Honda
        else if (item == 2)
        {
            printf("\n==============================================\n");
            printf("Available Honda cars:\n");
            printf("(1) Honda - Civic             => Price : %d => On stock :%d pieces\n", cars[2].price,cars[2].stock);
            printf("(2) Honda - Accord            => Price : %d => On stock :%d pieces\n", cars[3].price,cars[3].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item == 1)
            {
                if (cars[2].stock >= quantity)
                {
                    *billamount += (quantity * cars[2].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", cars[2].stock);
                    cars[2].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", cars[2].stock);
                }
            }
            else if (item == 2)
            {
                if (cars[3].stock >= quantity)
                {
                    *billamount += (quantity * cars[3].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", cars[3].stock);
                    cars[3].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", cars[3].stock);
                }
            }
        }

        // Suzuki
        else if (item == 3)
        {
            printf("\n==============================================\n");
            printf("Available Ford cars:\n");
            printf("(1) Ford - Mustang            => Price : %d => On stock :%d pieces\n", cars[4].price,cars[4].stock);
            printf("(2) Ford - Endeavour          => Price : %d => On stock :%d pieces\n", cars[5].price,cars[5].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

             if (item == 1)
            {
                if (cars[4].stock >= quantity)
                {
                    *billamount += (quantity * cars[4].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", cars[4].stock);
                    cars[4].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", cars[4].stock);
                }
            }
            else if (item == 2)
            {
                if (cars[5].stock >= quantity)
                {
                    *billamount += (quantity * cars[5].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", cars[5].stock);
                    cars[5].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", cars[5].stock);
                }
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
    else if (choice == 5 )
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
            printf("(1) Yamaha - YZF R15          => Price : %d => On stock :%d pieces\n", motorcycles[0].price,motorcycles[0].stock);
            printf("(2) Yamaha - MT-15            => Price : %d => On stock :%d pieces\n", motorcycles[1].price,motorcycles[1].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item == 1)
            {
                if (motorcycles[0].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[0].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", motorcycles[0].stock);
                    motorcycles[0].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", motorcycles[0].stock);
                }
            }
            else if (item == 2)
            {
                if (motorcycles[1].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[1].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", motorcycles[1].stock);
                    motorcycles[1].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", motorcycles[1].stock);
                }
            }
        }

        // Honda
        else if (item == 2)
        {
            printf("\n==============================================\n");
            printf("Available Honda bikes:\n");
            printf("(1) Honda - CBR 250R          => Price : %d => On stock :%d pieces\n", motorcycles[2].price,motorcycles[2].stock);
            printf("(2) Honda - CB Shine          => Price : %d => On stock :%d pieces\n", motorcycles[3].price,motorcycles[3].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

           if (item == 1)
            {
                if (motorcycles[2].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[2].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", motorcycles[2].stock);
                    motorcycles[2].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", motorcycles[2].stock);
                }
            }
            else if (item == 2)
            {
                if (motorcycles[3].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[3].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", motorcycles[3].stock);
                    motorcycles[3].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", motorcycles[3].stock);
                }
            }
        }

        // Suzuki
        else if (item == 3)
        {
            printf("\n==============================================\n");
            printf("Available Suzuki bikes:\n");
            printf("(1) Suzuki - Gixxer SF        => Price : %d => On stock :%d pieces\n", motorcycles[4].price,motorcycles[4].stock);
            printf("(2) Suzuki - Intruder         => Price : %d => On stock :%d pieces\n", motorcycles[5].price,motorcycles[5].stock);
            printf("==============================================\n");
            printf("Please enter your choice(in number) : ");
            scanf("%d", &item);

            printf("\n==============================================\n");

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (item == 1)
            {
                if (motorcycles[4].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[4].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", motorcycles[4].stock);
                    motorcycles[4].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", motorcycles[4].stock);
                }
            }
            
            else if (item == 2)
            {
                if (motorcycles[5].stock >= quantity)
                {
                    *billamount += (quantity * motorcycles[5].price);
                    printf("\n\nWe have %d pieces in our stock\n\n", motorcycles[5].stock);
                    motorcycles[5].stock -= quantity;
                }
                else
                {
                    printf("\n\nSorry, We only have %d pieces in our stock\n\n", motorcycles[5].stock);
                }
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

    char startValue;
    char choiceagain;
    float billamount = 0;

start:

againLevel:
    system("clear");
    onlineshopping(&billamount);
    printf("\n==============================================\n");
    printf("\nTotal amount is: %.2f Taka\n", billamount);
    printf("\n==============================================\n");

checkAgain:

    printf("\nDo you want to continue shopping??\nPress y for yes and n for no\n");
    scanf(" %c", &choiceagain);
    if (choiceagain == 'y' || choiceagain == 'Y')
    {
        goto againLevel;
    }
    else if (choiceagain == 'n' || choiceagain == 'N')
    {

        system("clear");
        printf("\n==============================================\n\n");
        printf("You have to pay %.2f Taka\n", billamount);
        printf("\n==============================================\n");
        printf("*************Thanks for Shopping*************");
        printf("\n==============================================\n");
    }
    else
    {
        system("clear");
        printf("You have entered wrong option,please type again");
        goto checkAgain;
    }
}
