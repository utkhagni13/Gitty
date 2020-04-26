#include <bits/stdc++.h>
using namespace std;

// Complete the encryption function below.
string encryption(string s)
{
    string ans="";
    int i,l,j,a;
    l = s.length();
    if(l==1 || l==4 || l==9 || l==16 || l==25 || l==36 || l==49 || l==64 || l==81)
    a = sqrt(l);
    else
    a = sqrt(l) + 1;
    for(i=0;i<a;i++)
    {
        j=i;
        while(j<l)
        {
            ans = ans + s[j];
            j = j + a;
        }
        ans = ans + " ";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}