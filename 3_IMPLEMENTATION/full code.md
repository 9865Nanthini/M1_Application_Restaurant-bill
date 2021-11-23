#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//functions to generate bills

void generatedBillHeader(char name[50],char date[30])
{
printf("\n\n");
    printf("\t ADV.Restaurant");
        printf("\n\t_____________________________");
    printf("\nDate:%s",date);
    printf("\nInvoice To:%s",name);
    printf("\n");
    printf("__________________________________\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n________________________________");
    printf("\n\n");
}
void generatedBillBody(char item[20],int qty,float price)
{
printf("%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty*price);
    printf("\n");
}
struct items{
    char item[20];
    float price;
    int qty;
};

struct orders{
    char customer[50];
    char date[50];
    int numofitems;
    struct items itm[50];
};

void generateBillFooter(float total)
{
printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal + 2*cgst;
    printf("__________________________________\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t_________");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST@9%s\t\t\t%.2f","%",cgst);
    printf("\n__________________________________");
    printf("\nGrand Total\t\t\t%.2f",grandTotal);
    printf("\n__________________________________\n");
}
int main()
{
   int opt,n,qty;
  float total;
  int date;
  struct orders ord;
  struct orders order;
  printf("\t===========ADV.RESTAURANT=========");

  printf("\n\n1.Generate Invoice");
  printf("\n2.show all Invoices");
  printf("\n3.Search Invoice");
  printf("\n4.Exit");
  printf("\n\nPlease select your preferred operation");
  scanf("%d",&opt);
  fgetc(stdin);

  switch(opt){
    case 1:
    printf("\nPlease enter the name of the customer:\t");
    fgets(ord.customer,50,stdin);
    ord.customer[strlen(ord.customer)-1] = 0;
        /*ord.numofitems = n;*/
    strcpy(ord.date,date);


  }
    printf("\n\n");
    return 0;
    }








o/p

	===========ADV.RESTAURANT=========

1.Generate Invoice
2.show all Invoices
3.Search Invoice
4.Exit

Please select your preferred operation1
Please enter the name of the customer:	Nanthini
Segmentation fault
