#include<stdio.h>
int main()
    {
    int samosa =15, tea=10, sandwich=40, burgur=60;

    
    int q1=0 , q2=0, q3=0, q4=0;

    int choice, qty;
    float subtotal, discount=0, finalAmount;
    printf("WELCOME TO THE LOGIC LEGEND CANTEEN\n");

    
 while(1){
        printf("MENU\n");
        printf("1. SAMOSA=15\n");
        printf("2. TEA=10\n");
        printf("3. SANDWHICH=40\n");    
        printf("4. BURGUR=60\n");
        printf("0. finish and print bill\n");
        //LOGIC LEGENDS (ALI, RAM. ADITYA)
        printf("Enter item number: ");

       
        if (scanf("%d", &choice) !=1){
            printf("Please enter number only!\n");
            while (getchar() != '\n');
            continue;
        }

     if(choice==0){
        break;                 
        }

        if(choice < 1 || choice > 4) { 
            printf("Invalid item number\n");
            continue;                  
        }

      printf("Enter Quantity:");
        if (scanf("%d", &qty) !=1){
        //LOGIC LEGENDS (ALI, RAM. ADITYA)

            printf("Please enter number only!\n");
            while (getchar() != '\n');
            continue;
        }

        if (qty <= 0) {                 
            printf("Quantity must more than 0\n");
            continue;
        }

       
        switch (choice){
           case 1: q1 = q1 + qty;
            break;
            case 2: q2 = q2 + qty; 
            break;
            case 3: q3 = q3 + qty;
        //LOGIC LEGENDS (ALI, RAM. ADITYA)

            break;
            case 4: q4 = q4 + qty; 
            break;
        }
        printf("Item added\n");
    }

   
    subtotal = q1 * samosa + q2 * tea + q3 * sandwich + q4 * burgur;

if (subtotal==0){
    printf("\n No  items ordered. Bye\n");
        return 0;
}

    
  printf("\n============BILL===========\n");
   if (q1>0) printf("samosa %d X %d =%d\n", q1, samosa, q1* samosa);
        //LOGIC LEGENDS (ALI, RAM. ADITYA)

   if (q2>0) printf("Tea %d X %d = %d\n", q2, tea, q2*tea);
    if(q3>0) printf("Sandwich  %d X %d =%d\n", q3, sandwich,q3*sandwich);
    if(q4>0) printf("Burgur    %d x %d = %d\n", q4,burgur,q4*burgur);

    
    if(subtotal>200) {
    discount=subtotal *10/100;
    }
    finalAmount= subtotal-discount;

    printf("------------------\n");
    printf("Subtotal : Rs %.2f\n", subtotal);
    printf("Discount : Rs %.2f\n", discount);
    printf("TO Pay  : Rs %.2f\n", finalAmount);
    printf("===========================================\n");
    printf("Thank you! Visit again.\n");

    return 0;
}
        //LOGIC LEGENDS (ALI, RAM, ADITYA)