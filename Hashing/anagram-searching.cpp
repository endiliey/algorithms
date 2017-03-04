#include <bits/stdc++.h>

using namespace std;

bool isAnagram(int ca[], int cb[])
{
    int ascii = 256;
    for (int i = 0; i < ascii; i++)
    {
        if (ca[i] != cb[i])
            return false;
    }
    return true;
}


int main()
{
    string txt, anagram;
    cin >> txt >> anagram;
    int ca[256]= {0};
    int cb[256] = {0};
    int cntr = 0;
    memset(ca, 0, sizeof(ca));
    memset(cb, 0, sizeof(cb));
    int m = anagram.size();
    for(int i = 0; i < m; i++)
    {
        ca[txt[i] - 'a']++;
        cb[anagram[i] - 'a']++;
    }
    
    for (int i = m ;i < (int) txt.length(); i++)
    {
        if (isAnagram(ca, cb))
            cntr++;
            
        ca[txt[i - m] - 'a']--;
        ca[txt[i] -'a']++;
    }
            
    if (isAnagram(ca, cb))
        cntr++;
    cout << cntr << endl;
}
