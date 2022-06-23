#include <bits/stdc++.h>
int n;
std::set<std::string> set;
char str[1007];
int main() 
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf(" %s", str);
        int len = int(strlen(str));
        std::sort(str, str + len);
        len = int(std::unique(str, str + len) - str);
        str[len] = '\0';
        set.insert(str);
    }
    printf("%d\n", int(set.size()));
    return 0;
}