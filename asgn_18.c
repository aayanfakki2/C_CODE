#include <stdio.h>
int strLength(char s[])
{
    int i = 0;
    while (s[i] != '\n') 
    i++;
    return i;
}
void strReverse(char s[], char rev[])
{
    int len = strLength(s);
    int i;
    for (i = 0; i < len; i++)
        rev[i] = s[len - 1 - i];
    rev[len] = '\n';
}
int strEqual(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\n' && b[i] != '\n')
    {
        if (a[i] != b[i])
        return 0;
        i++;
    }
    return (a[i] == '\n' && b[i] == '\n');
}
int isPalindrome(char s[])
{
    int len = strLength(s);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        return 0;
    }
    return 1;
}
int isSubstring(char text[], char pattern[])
{
    int tLen = strLength(text);
    int pLen = strLength(pattern);
    int i, j;
    for (i = 0; i <= tLen - pLen; i++)
    {
        j = 0;
        while (j < pLen && text[i + j] == pattern[j])
            j++;
        if (j == pLen) return 1;
    }
    return 0;
}
void main()
{
    char str[20], rev[20], str2[20], sub[20];
    printf("Enter first string: ");
    scanf("%s", str);
    printf("Enter second string for equality check: ");
    scanf("%s", str2);
    printf("Enter substring to search for substring check: ");
    scanf("%s", sub);
    printf("\nString Operation Results\n");
    printf("\n1. Length of \"%s\" = %d\n", str, strLength(str));
    strReverse(str, rev);
    printf("\n2. Reverse of \"%s\" = \"%s\"\n", str, rev);
    if (strEqual(str, str2))
        printf("\n3. \"%s\" and \"%s\" are EQUAL.\n", str, str2);
    else
        printf("\n3. \"%s\" and \"%s\" are NOT equal.\n", str, str2);
    if (isPalindrome(str))
        printf("\n4. \"%s\" IS a palindrome.\n", str);
    else
        printf("\n4. \"%s\" is NOT a palindrome.\n", str);
    if (isSubstring(str, sub))
        printf("\n5. \"%s\" IS found in \"%s\".\n", sub, str);
    else
        printf("\n5. \"%s\" is NOT found in \"%s\".\n", sub, str);
}
