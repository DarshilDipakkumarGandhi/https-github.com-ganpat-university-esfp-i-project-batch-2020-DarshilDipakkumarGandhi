#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char p[100],d[100],m[100],di[100],a[200],t[50],b[]="life saving";
char dc[]="Apex Clinic";
float mc,total=0,discount=0;
int age,q;
double c;
clrscr();
printf("\nClinic we offer 2% discount is:Apex Clinic");
printf("\nWe offer 10% discount for life saving type of drug.");
printf("\nWe offer 20% discount if patient age is greater than 60.");
printf("\nWe offer 5% discount if patient bill amount exceeds 1000.");
printf("\nEnter Patient's Name:");
gets(p);
printf("\nEnter Doctor's Clinic Name:");
gets(d);
printf("\nEnter Medicine name:");
gets(m);
printf("\nEnter Patient Disease diagnosed:");
gets(di);
printf("\nEnter Patient Address:");
gets(a);
printf("\nEnter Type of drug given to patient:");
gets(t);
printf("\nEnter Patient Age:");
scanf("%d",&age);
printf("\nEnter Medicine cost per unit:");
scanf("%f",&mc);
printf("\nEnter Quantity of medicine in unit:");
scanf("%d",&q);
printf("\nEnter Contact Number of Patient:");
scanf("%lf",&c);
total=(mc*q);
if(age>60)
{
if(strcmp(t,b)==0)
{
if(total>1000)
{
if(strcmp(d,dc)==0)
{
discount=(0.37*total);
total=total-discount;
}
else
{
discount=(0.35*total);
total=total-discount;
}
}
else if(strcmp(d,dc)==0)
{
discount=(0.32*total);
total=total-discount;
}
else
{
discount=(0.3*total);
total=total-discount;
}
}
else if(total>1000)
{
if(strcmp(d,dc)==0)
{
discount=(0.27*total);
total=total-discount;
}
else
{
discount=(0.25*total);
total=total-discount;
}
}
else if(strcmp(d,dc)==0)
{
discount=(0.22*total);
total=total-discount;
}
else
{
discount=(0.2*total);
total=total-discount;
}
}
else if(strcmp(t,b)==0)
{
if(total>1000)
{
if(strcmp(d,dc)==0)
{
discount=(0.17*total);
total=total-discount;
}
else
{
discount=(0.15*total);
total=total-discount;
}
}
else if(strcmp(d,dc)==0)
{
discount=(0.12*total);
total=total-discount;
}
else
{
discount=(0.1*total);
total=total-discount;
}
}
else if(total>1000)
{
if(strcmp(d,dc)==0)
{
discount=(0.07*total);
total=total-discount;
}
else
{
discount=(0.05*total);
total=total-discount;
}
}
else if(strcmp(d,dc)==0)
{
discount=(0.02*total);
total=total-discount;
}
printf("\nBill of patient");
printf("\nPatient's Name:%s",p);
printf("\nContact Number:%lf",c);
printf("\nDoctor's Clinic Name:%s",d);
printf("\nPatient's Address:%s",a);
printf("\nPatient's Age:%d",age);
printf("\nMedicine Name:%s",m);
printf("\nType of drug given to patient:%s",t);
printf("\nQuantity of medicine in unit:%d",q);
printf("\nPatient Disease diagnosed:%s",di);
printf("\nMedicine Cost per unit:%f",mc);
printf("\nDiscount offered to patient:%f",discount);
printf("\nTotal Bill to be payed:%f",total);
getch();
}