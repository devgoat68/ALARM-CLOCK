#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
int M,H,S,h,m,s,x=0;
printf("Enter current time in 24 hr format:");
scanf("%d%d%d",&H,&M,&S);
printf("set the alarm");
scanf("%d%d%d",&h,&m,&s);

if(H<24 && M<60 && S<60 && h<24 && m<60 && s<60)
{
    loop:
        if(H==h && M==m && S==s){
            loop1:
                if(x<=20){
                    system("cls");
                    printf("....Time Up....\a");
                    Sleep(3000);
                    x++;
                }//for a minute
                goto loop1;
        }

        //Current time

        system("cls");
        printf("%d:%d:%d",H,M,S);
        Sleep(1000);
        S++;
        if(S==60){
            S=0;
            M++;
        }
         if(M==60){
            M=0;
            H++;
        }

 if(H==24){
            H=0;


}
goto loop;
}
else
    printf("You entered invalid time format");
}
