#include<stdio.h>
int main()
{
     char str1[3],str2[2];
     char str[35]={"Computer Science & Engineering"};
     char str3[10]={"Operator"};
     puts("Enter CSE");
     gets(str1);
     if(str1[0]=='C' && str1[1]=='S' && str1[2]=='E')
         puts(str);
     puts("Press any of: +,-,*,/,=");
     gets(str2);
     if(str2[0]=='+' || str2[0]=='-' ||  str2[0]=='*' || str2[0]=='/' || str2[0]=='=')
         puts(str3);

     return 0;
}
