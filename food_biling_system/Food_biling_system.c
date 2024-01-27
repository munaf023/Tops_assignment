// Create a food biling system
#include<stdio.h>

int main()
{
    int choice;
    char cont_order;
    int quantity;
    int total_amt = 0;
    
    do{
        printf("\n1.Pizza\n");
        printf(" price = 180rs/pcs\n");
        printf("\n2.Burger\n");
        printf(" price = 100rs/pcs\n");
        printf("\n3.Dosa\n");
        printf(" price = 120rs/pcs\n");
        printf("\n4.idli\n");
        printf(" price = 50rs/pcs\n");
        
        printf("please enter your choice: ");
        scanf("%d",&choice);
        
        printf("Enter quauntity: ");
        scanf("%d",&quantity);
        
        switch(choice)
        {
            case 1: 
            total_amt += 180 * quantity;
            printf("you have selected pizza\n");
            break;
            
            case 2: 
            total_amt += 100 * quantity;
            printf("you have selected burger\n");
            break;
            
            case 3: 
            total_amt += 120 * quantity;
            printf("you have selected dosa\n");
            break;
            
            case 4: 
            total_amt += 50 * quantity;
            printf("you have selected idli\n");
            break;
            
            default:
                printf("Invalid choice");
        }

            printf("Amount: %d\n",total_amt);
            
            printf("Do you want place more order?(Y/N): ");
            scanf("%c",&cont_order);
    }
    while(cont_order == 'y' || cont_order == 'Y');
    
        printf("Total amount: %d\n",total_amt);
    
    return 0;
}
