 #include<stdio.h>
 
 //functional prototype
 float calculateBill(float number_units);
 
 int main (){
 float calculatebill,Bill;
 printf("Enter the number of units consumed: \t");
 scanf("%f", &calculatebill);
 //function call
 Bill= calculateBill(calculatebill);
 
 printf("\n");
 printf("Kenya power \n");
 printf("======================= \n");
 printf("Units consumed: Ksh. %.2f \n",calculatebill);
 printf("final bill payable: Ksh. %.2f \n",Bill);
 printf("========================== \n");
 
 return 0;
 }
// Function definition
float calculateBill(float number_units)
{
    float amount;

    if (number_units <= 100)
    {
        amount = number_units * 10;
    }
    else if (number_units <= 200)
    {
        amount = (100 * 10) + ((number_units - 100) * 15);
    }
    else
    {
        amount = (100 * 10) + (100 * 15)
                 + ((number_units - 200) * 20);
    }

    return amount;
}