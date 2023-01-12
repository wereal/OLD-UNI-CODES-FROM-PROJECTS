#include <stdio.h>
#include <stdlib.h>
#define max_size 5


int main(){
	
 int stack[max_size],top=0,F,t=1000,i,z;

 for(i=0;i<4;i++)
 {
    printf("Δωστε τα νουμερα που θελει να βαλει στην στηβα:");
    scanf("%d",&z);
    top=top+1;
    stack[top]=z;
    F=F+(z*t);
    t=t/10;
 }
printf("%d\n",F);
printf("Το ΑΕΜ σε οκταδικη μορφη ειναι : %d\n",convertDecimalToOctal(F));
palindrome(convertDecimalToOctal(F));
   return 0;
 }


 int convertDecimalToOctal(int decimalNumber){
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
    }



int palindrome(int num )
{
    int ans = 0,copy;
    copy = num;

    while(num > 0)
    {
        int mod = num % 10;

        ans = ans * 10 + mod;

        num = num / 10;
    }
    if(ans == copy)
           printf("	ΠΑΛΙΝΔΡΟΜΙΚΟΣ\n");
    else
           printf("ΟΧΙ ΠΑΛΙΔΡΟΜΙΚΟΣ\n");

    return 0;
}
