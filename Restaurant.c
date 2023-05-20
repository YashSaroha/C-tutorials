#include <stdio.h>
#include <conio.h>
int main() 
{
    int choice,choice1;
    int rate, quantity,final;
    printf("Welcome to Yash's Restaurant!\nYou will find here various food items to eat and if it's your birthday, various cakes to splash on your face.");
    printf("\nPress 1 to see our food menu. \nPress 2 to see our drinks menu. \nPress 3 to see our dessert menu.\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Looking for the best food to eat while being in your budget? You are in the right place for it. \nPress 1 for Indian Food.\nPress 2 for Italian Food.\nPress 3 for Continental Food.\nPress 4 for our non-veg menu.\n");
        scanf("%d",&choice1);
        switch(choice1) 
        {
            case 1:
                printf("Enter the number of Indian meals you want to order\n");
                scanf("%d",&quantity);
                rate=200;
                printf("You have ordered %d number of Indian Food.",quantity);
                break;
            case 2:
                printf("Enter the number of Italian meals you want to order\n");
                scanf("%d",&quantity);
                rate=300;
                printf("You have ordered %d number of Italian Food.",quantity);
                break;
            case 3:
                printf("Enter the number of continental meals you want to order\n");
                scanf("%d",&quantity);
                rate=400;
                printf("You have ordered %d number of Continental Food.",quantity);
                break;
            case 4:
                printf("Enter the number of non-veg meals you want to order\n");
                scanf("%d",&quantity);
                rate=400;
                printf("You have ordered %d number of Non-Veg Food.",quantity);           
                break;
        }
    }   
    else if(choice==2)
    {
        printf("Looking for best drinks to have? Try this Drinks Menu and you will find best cocktails and mocktails to have. \nPress 1 for Mint Mojito.\nPress 2 for Blue Lagoon.\nPress 3 for Lemonade with Ice.\nPress 4 for Cold Coffee with Ice-cream\n");
        scanf("%d",&choice1);
        switch(choice1) 
        {
            case 1:
                printf("Enter the number of Mint Mojito you want to order\n");
                scanf("%d",&quantity);
                rate=50;
                printf("You have ordered %d number of Mint Mojito.",quantity);
                break;
            case 2:
                printf("Enter the number of Blue Lagoon you want to order\n");
                scanf("%d",&quantity);
                rate=100;
                printf("You have ordered %d number of Blue Lagoon.",quantity);
                break;
            case 3:
                printf("Enter the number of Lemonade with Ice you want to order\n");
                scanf("%d",&quantity);
                rate=70;
                printf("You have ordered %d number of Lemonade with Ice.",quantity);
                break;
            case 4:
                printf("Enter the number of Cold Coffee with Ice-Cream you want to order\n");
                scanf("%d",&quantity);
                rate=150;
                printf("You have ordered %d number of Cold-Coffee with Ice-cream.",quantity);           
                break; 
        }
    }   
    else if(choice==3)
    {
        printf("You have a sweet-tooth. Let's get started with dessert.\nPress 1 for Gulab Jamun.\nPress 2 for Rasgulla.\nPress 3 for Brownie(Not funny brownies).\nPress 4 for Cake to splash all over face(Cheap ones)\n");
        scanf("%d",&choice1);
        switch(choice1) 
        {
            case 1:
                printf("Enter the number of Gulab Jamun you want to order\n");
                scanf("%d",&quantity);
                rate=20;
                printf("You have ordered %d number of Gulab Jamun.",quantity);
                break;
            case 2:
                printf("Enter the number of Rasgulla you want to order\n");
                scanf("%d",&quantity);
                rate=20;
                printf("You have ordered %d number of Rasgulla.",quantity);
                break;
            case 3:
                printf("Enter the number of Brownie you want to order\n");
                scanf("%d",&quantity);
                rate=50;
                printf("You have ordered %d number of Brownie.",quantity);
                break;
            case 4:
                printf("Enter the number of Cake you want to order\n");
                scanf("%d",&quantity);
                rate=150;
                printf("You have ordered %d number of Cake.",quantity);           
                break; 
        }
    } 
    final=rate*quantity;
    printf("\nYour total bill would be : %d",final);
    printf("\nHave a good day! Please come back again.");
    return 0;
}