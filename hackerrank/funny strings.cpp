#include <bits/stdc++.h>

using namespace std;

string funnyString(string s)
{
    int l=s.length();
    int orgd[l-1], revd[l-1], i, done=0;
    for(i=0;i<l-1;i++)
    {
        orgd[i] = abs(s[i] - s[i+1]);
        revd[i] = abs(s[l-i-1] - s[l-i-2]);
    }

    for(i=0;i<l-1;i++)
    {
        if(orgd[i]!=revd[i])
            return "Not Funny";
        
    }
    return "Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();


    return 0;
}