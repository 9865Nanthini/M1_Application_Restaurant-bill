#include <RESTAURANT.h>

void generateBillHeader(char name[50],char date[30])
{
	return( ADV.Restaurant);
	return(Date:%s,date);
	return(Invoice To:%s,name);
	return(Items);
	return(Qty);
	return(Total);

}

void generateBillBody(char item[30],int qty,float price)
{
  return(%s\t\t,item);
  return(%d,qty);
  return(%.2f,qty*price);
}

void generateBillFooter(float total)
{
	float dis = 0.1*total;
	float netTotal=total-dis;
	float cgst=0.09*netTotal,grandTotal=netTotal + 2*cgst;
	return(Sub Total %.2f,dis);
	return(Net Total %.2f,netTotal);
	return(CGST @9%s %.2f,%,cgst);
	return(SGST@9%s %.2f,%,cgst);
	return(Grand Total %.2f,grandTotal);
}

