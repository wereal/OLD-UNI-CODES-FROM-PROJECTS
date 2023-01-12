#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int AEM[200],pos=1,GradeDistr[11],i,j,smath,temp1,K,Ap[80],posD=1,StudentDistrA=0,StudentDistrB=0,StudentDistrC=0,StudentDistrD=0,StudentDistrF=0;
float Grades[200],Gsum=0,Gmax=1,GradesD[200],GsumD=0,GmaxD=1;
     
srand(4061);
for (i = 0; i < 200; i++)
 {
AEM[i]=4000+i;
Grades[i]=rand()/(RAND_MAX/10.0);
printf("%d = %.1f \t" ,AEM[i],Grades[i]);	
Gsum=Gsum+Grades[i];
	if(Gmax<Grades[i])
	{ 
	Gmax=Grades[i];
	pos=i;
}
}
Gsum= Gsum/200 ;
printf("\n________________________\n");
printf("o mesos oros ton 200 mathiton einai : %.1f ",Gsum);
printf("\no fititis me AEM %d me megalitero bathmo: %.1f",AEM[pos],Gmax);
printf( "\n H katanomh ths bathmologias einai");
printf("\n________________________________________________________________\n");
for (i=0;i<200;i++)
{
for(j=1;j<=11;j++)GradeDistr[j]=0;{
for(i=0;i<=199;i++){
if (Grades[i]>=0.0 && Grades[i]<=0.9)GradeDistr[1]=GradeDistr[1]+1;
if (Grades[i]>=1.0 && Grades[i]<=1.9)GradeDistr[2]=GradeDistr[2]+1;
if (Grades[i]>=2.0 && Grades[i]<=2.9)GradeDistr[3]=GradeDistr[3]+1;
if (Grades[i]>=3.0 && Grades[i]<=3.9)GradeDistr[4]=GradeDistr[4]+1;
if (Grades[i]>=4.0 && Grades[i]<=4.9)GradeDistr[5]=GradeDistr[5]+1;
if (Grades[i]>=5.0 && Grades[i]<=5.9)GradeDistr[6]=GradeDistr[6]+1;
if (Grades[i]>=6.0 && Grades[i]<=6.9)GradeDistr[7]=GradeDistr[7]+1;
if (Grades[i]>=7.0 && Grades[i]<=7.9)GradeDistr[8]=GradeDistr[8]+1;
if (Grades[i]>=8.0 && Grades[i]<=8.9)GradeDistr[9]=GradeDistr[9]+1;
if (Grades[i]>=9.0 && Grades[i]<=9.9)GradeDistr[10]=GradeDistr[10]+1;
if (Grades[i]>9.9) GradeDistr[11]=GradeDistr[11]+1;	}
}
// temp1=0;
//for (i=0;i<11;i++){
//	temp1=temp1+GradeDistr[i];
}
printf("\n\n	0-0.9 = %d", GradeDistr[1]);
printf("\n\n	1-1.9 = %d", GradeDistr[2]);
printf("\n\n	2-2.9 = %d", GradeDistr[3]);
printf("\n\n	3-3.9 = %d", GradeDistr[4]);
printf("\n\n	4-4.9 = %d", GradeDistr[5]);
printf("\n\n	5-5.9 = %d", GradeDistr[6]);
printf("\n\n	6-6.9 = %d", GradeDistr[7]);
printf("\n\n	7-7.9 = %d", GradeDistr[8]);
printf("\n\n	8-8.9 = %d", GradeDistr[9]);
printf("\n\n	9-9.9 = %d", GradeDistr[10]);
printf("\n\n	10 = %d", GradeDistr[11]);
// printf("\n\n\n Oi foithtes pou proshlthan %d",temp1);

printf("\n\n sto montelo poy prosegkizei thn pragmatikothta ");
printf("\n_______________________________________________________\n\n");

smath=(200*60)/100;
srand(4061);
for (i = 0; i < 200; i++)
 {
AEM[i]=4000+i;
GradesD[i]=0;
}
for(K=0; K<=smath; K++)
{
i=rand()/(RAND_MAX/smath);
GradesD[i]=rand()/(RAND_MAX/10.0);
printf("%d = %.1f \t" ,AEM[i],GradesD[i]);
}

printf("\nOi foithtes pou den proshlthan \n");
printf("\n_______________________________________________________\n\n");

for(i=0 ; i<=80 ; i++)
{
Ap[i]=rand() % (4200-4000+1)+4000; 
printf("%d ", Ap[i] );
}

printf("\n_______________________________________________________ \n");

for (i=0;i<=120 ; i++)
{
	GsumD=GsumD+GradesD[i];	
}
GsumD= GsumD/120;
 
for (i=0;i<=120;i++)
{
 	if (GmaxD<= GradesD[i])
 	{ 
	GmaxD=GradesD[i];
	posD=i;
	}
}
printf("\nO mesos oros ths vathmologias twn 120 foithtwn einai: %.1f \n",GsumD);
printf("\nO megistos vathmos anhkei ston foithth me AEM %d kai einai: %.1f\n",AEM[posD],GmaxD);
printf("\nH katanomh ths vathmologias einai:\n");
printf("_______________________________________________________\n");
 
for(j=1;j<=11;j++)GradeDistr[j]=0;
{
for(i=0;i<=199;i++)
{
if (GradesD[i]>=8.5 && GradesD[i]<=10.0)StudentDistrA=StudentDistrA+1;
if (GradesD[i]>=6.5 && GradesD[i]<=8.4)StudentDistrB=StudentDistrB+1;
if (GradesD[i]>=5.0 && GradesD[i]<=6.4)StudentDistrC=StudentDistrC+1;
if (GradesD[i]>=3.0 && GradesD[i]<=4.9)StudentDistrD=StudentDistrD+1;
if (GradesD[i]>=0.0 && GradesD[i]<=2.9)StudentDistrF=StudentDistrF+1;
}
}
printf("\n\n	8.5-10.0 = %d",StudentDistrA);
printf("\n\n	6.5-8.4 = %d",StudentDistrB);
printf("\n\n	5.0-6.4 = %d",StudentDistrC);
printf("\n\n	3.0-4.9 = %d",StudentDistrD);
printf("\n\n	0.0-2.9 = %d",StudentDistrF);


 
 
 return 0; 

}


