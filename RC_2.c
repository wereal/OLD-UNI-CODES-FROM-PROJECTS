#include<stdio.h>

int StudID,TotalGrade;
float GradeLang,GradeMath,GradeEcon,GradeInfo;
int n1,n2,n3,n4,Base1,Base2,Base3,Base4,Base5 ;
int main ()

{
 
n1=200;
n2=330;
n3=200;
n4=270;

printf("KATAXWRISTE TON ARMITHMO MITROOY SAS : ");
 scanf("%i",&StudID ); 
printf("\e[1;1H\e[2J");
 scanf("%f",&GradeLang);
printf("\n KATAXWRISTE THN BATHMOLOGIA STO MATHIMA MATHIMATIKA:  " );
 scanf("%f",&GradeMath );
printf( "\n KATAXWRISTE THN MATHMOLOGIA STO MATHIMA ARXES OIKONOMIKIS THEORIAS: " );
 scanf("%f",&GradeEcon);
printf("\n KATAXWRISTE THN BATHMOLOGIA STO MATHIMA AEPP: " );
 scanf("%f",&GradeInfo );
TotalGrade=(n1*GradeLang+n2*GradeMath+n3*GradeEcon+n4*GradeInfo);
printf("\n O mathitis me AEM %d exei sugkentrosei %d moria apo tis eisagogikes e3etaseis",StudID,TotalGrade );
Base1=(3*1654+StudID);
Base2=(3*1630+StudID);
Base3=(3*1603+StudID);
Base4=(3*1554+StudID);
Base5=(3*1548+StudID);

if (TotalGrade<Base5) {
	printf(",den eisagetai se kanena apo ta 5 tmhmata",TotalGrade);
}else
	printf ("epetyxe me basi ta opia mporei na eisax8ei sto tmima \n me kodiko : 1654 poy exei bash 8174 \n me kodiko : 1630 poy exei bash 8102 \n me kodiko : 1603 poy exei bash 8021 \n me kodiko : 1554 pou exei bash 7871 \n me kodiko : 1548 pou exei bash 7856 ");
return 0 ;
}
 
