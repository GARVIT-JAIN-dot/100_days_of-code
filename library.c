//program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.

#include<stdio.h>
int main(){
    int days,fine;
    printf("Enter number of late days:");
    scanf("%d",&days);

    if(days <= 5){
    fine = days*2;
     printf("your fine:%dRs\n",fine);
    } else if (days <= 10) {
        fine = 10 + (days-5)*4;
      printf("your fine:%dRs\n",fine);
    } else if (days <= 30){
        fine = 30+(days-10)*6;
        printf("your fine:%dRs\n",fine);
    }else {
        printf("membership cancelled.\n");
    }
    return 0;

}
