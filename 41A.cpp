#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    char s1[105];
    scanf("%s%s",&s,&s1);
    int cnt=0;
    int len1=strlen(s);
    int len2=strlen(s1);
    for(int i=0; i<len1;)
    {
        for(int j=len2-1; j>=0;)
        {
            if(s[i]==s1[j])
            {
                cnt++;
            }
            i++;
            j--;
        }
    }
    if(cnt==len1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
