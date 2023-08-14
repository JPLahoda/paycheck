#include <stdlib.h> 
int main() { 
   printf("\n"); 
   int employeeNumber; 
   float hourlySalary, weeklyTime, overtimePay, netPay, regularPay; 
   printf("Enter Employee Number: "); 
   scanf("%d", &employeeNumber); 
    
   printf("Enter hourly salary: "); 
   scanf("%f", &hourlySalary); 
    
   if (employeeNumber <= 0) { 
       printf("Invalid employee number. Please enter a valid one.\n"); 
       return 0; 
   } 
    
   if (hourlySalary <= 0) { 
       printf("Invalid hourly salary. Please enter a valid one.\n"); 
       return 0; 
   } 
    
   printf("Enter weekly time: "); 
   scanf("%f", &weeklyTime); 
   if (weeklyTime < 0) { 
       printf("Invalid weekly time. Please enter a valid one.\n"); 
       return 0; 
   } 
    
   printf("==============================\n"); 
    
   if (weeklyTime > 40) { 
       overtimePay = (weeklyTime - 40) * (hourlySalary * 1.5); 
       netPay = 40 * hourlySalary + overtimePay; 
   } else { 
       netPay = weeklyTime * hourlySalary; 
   } 
    
   regularPay = netPay - overtimePay; 
    
   printf("Employee Number: %d\n", employeeNumber); 
   printf("Hourly Salary: %.2f\n", hourlySalary); 
   printf("Weekly Time: %.2f\n", weeklyTime); 
   printf("Regular Pay: %.2f\n", regularPay); 
   printf("Overtime Pay: %.2f\n", overtimePay); 
   printf("Net pay: $%.2f\n", netPay); 
   printf("==============================\n"); 
   printf("Thank you for using \n"); 
    
   exit(0); 
}
