#include<stdio.h>
#include<string.h>
int main()
{
char s1[100], s2[100];
int choice, i, j;
printf("Enter first string:\n");
gets(s1);
printf("Enter second string:\n");
gets(s2);
// Second string is only used in Concatenation and Compare
printf("\n1. Concatenation\n2. Compare\n3. Copy\n4. Find Length\n5. Reverse\n");
printf("Enter your choice:\n");
scanf("%d", &choice);
switch(choice)
{
case 1: // Concatenation
for (i = 0; s1[i]!='\0'; i++);
for (j = 0; s2[j]!='\0'; j++)
{
s1[i+j] = s2[j];
}
s1[i+j] = '\0';
printf("Concatenated string: %s\n", s1);
break;
case 2: // Compare
for(i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);
if(s1[i] < s2[i])
{
printf("string 1 is Less than string 2\n");
}
else if(s1[i] > s2[i])
{
printf("string 2 is Less than string 1\n");
}
else
{
printf("string 1 is Equal to string 2\n");
}
break;
case 3: // Copy
for (i = 0; s1[i] != '\0'; i++)
{
s2[i] = s1[i];
}
s2[i] = '\0';
printf("Copied string: %s\n",s2);
break;
case 4: // Find Length
for (i = 0; s1[i] != '\0'; i++);
printf("Length of the string: %d\n",i);
break;
case 5: // Reverse
for (i = 0; s1[i] != '\0'; i++);
for (j = 0; j < i; j++)
{
s2[j] = s1[i-j-1];
}
s2[j] = '\0';
printf("Reversed string: %s\n",s2);
break;
default:
printf("Invalid choice\n");
break;
}
return 0;
}