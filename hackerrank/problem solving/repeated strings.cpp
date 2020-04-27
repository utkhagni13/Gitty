#include <bits/stdc++.h>
using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    int l = s.length();
    long na=0;
    long rep = n/l;

    for(int i=0;i<l;i++)
    if(s[i] == 'a')
    na++;

    na = na*rep;
    long rem = n%l;
    for(int i=0;i<rem;i++)
    if(s[i] == 'a')
    na++;

    return na;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
