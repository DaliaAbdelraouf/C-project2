  /* Dalia Abdelraouf_19102573  */
#include <stdio.h>
#include <stdlib.h>


 void reading_id_salaries(int employess[],int n,float salaries[]);
 void subset_finder(int employess[],int n,float salaries[],int subset[]);
 void pay_rise(int employees[],int n,float salaries[]);
 void out_put(int employees[],int n,float salaries[]);


int main (){
int employees[100]={0};
    float salaries[100]={0};
    int subset[100]={0};
    int n=0;
    printf("Enter the number of employees: ");
    scanf("%d",&n);

    reading_id_salaries(employees,n,salaries);
    subset_finder(employees,n,salaries,subset);
     out_put(employees,n,salaries);
    pay_rise(employees,n,salaries);


    return 0;
}

 void reading_id_salaries(int employess[],int n ,float salaries[]){



    printf("Enter Ids of employees: ");
    for(int i=0;i<n;i++){
        scanf("%d",& employess [i]);

    }
    printf("Enter Salaries of employees: ");
    for(int i=0;i<n;i++){
        scanf("%f",&salaries[i]);

    }
}

  void subset_finder(int employess[],int n,float salaries[],int subset[]){
    float salary=0;
    printf("Enter the specific salary: ");
    scanf("%f",&salary);
    int count=0;
    for(int i=0;i<n;i++){
        if(salaries[i]>salary){
            subset[count]=employess[i];
            count++;
        }
    }
    printf("Subset of Employees got a salary > %.3f \n",salary);
    for(int i=0;i<count;i++)
        printf("Employee %d\n",subset[i]);
}



   void pay_rise(int employees[],int n,float salaries[]){
     int x,i,j,y,f;
     int m=0 ;
     int arra[n];
     float per[n];
     printf("Enter the numper of employees you want to rise\n");
     scanf("%d",&x);
     for(i=0;i<x;i++){
     printf("Enter id of employees %d :\n",i+1);
     scanf("%d",&arra[i]);
     printf("enter rise percentage for employee %d :",i+1);
     scanf("%f",&per[i]);
   }
   for(j=0;j<n;j++){
     for(y=0;y<x;y++){
     if(employees[j]==arra[y]){
       salaries[j]=salaries[j]*(100+per[m])/100;
       m++;

      }
     }
   }

   printf("employees and thier salaries\n");
    for( f=0;f<n;f++)
    {
        printf("Employee {%d} Has Salary of {%.3f} \n",employees[f],salaries[f]);
     }
   }




void out_put(int employees[],int n,float salaries[]){
     for(int i=0;i<n;i++){
   printf("Employee %d take salary : %.1f \n",employees[i],salaries[i]);
     }
   return;
}


