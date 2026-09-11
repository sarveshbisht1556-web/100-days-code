/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/



#include<stdio.h>
int main()
{
  int days , fee ;
 
 printf("Enter days after due date to calculate late fee: ");
 scanf("%d", &days);
  
  if(days<=5)
   {
    fee = days*2;
    printf("Fine Rs. %d", fee);
   }
 else if(6<=days && days<=10)
  {
   fee = 5*2 + (days-5)*4;
   printf("Fine Rs. %d", fee);
  }
 else if(11<=days && days<=30)
 {
  fee = 5*2 + 5*4 + (days-10)*6;
  printf("Fine Rs. %d", fee);
 }
 else
 {
 printf("Membership cancelled");
 }
 return 0;
}
 

   
 
 