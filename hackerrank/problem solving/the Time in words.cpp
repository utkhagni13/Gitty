#include <bits/stdc++.h>
using namespace std;

string hrs_in_words(int h)
{
    string rett;
    switch(h)
    {
        case 1: rett = "one";
        break;
        case 2: rett =  "two";
        break;
        case 3: rett =  "three";
        break;
        case 4: rett =  "four";
        break;
        case 5: rett =  "five";
        break;
        case 6: rett =  "six";
        break;
        case 7: rett =  "seven";
        break;
        case 8: rett =  "eight";
        break;
        case 9: rett =  "nine";
        break;
        case 10: rett =  "ten";
        break;
        case 11: rett =  "eleven";
        break;
        case 12: rett =  "twelve";
        break;
        case 13: rett =  "thirteen";
        break;
        case 14: rett =  "fourteen";
        break;
        case 15: rett =  "fifteen";
        break;
        case 16: rett =  "sixteen";
        break;
        case 17: rett =  "seventeen";
        break;
        case 18: rett =  "eighteen";
        break;
        case 19: rett =  "nineteen";
        break;
        case 20: rett =  "twenty";
        break;
        case 21: rett =  "twenty one";
        break;
        case 22: rett =  "twenty two";
        break;
        case 23: rett =  "twenty three";
        break;
        case 24: rett =  "twenty four";
        break;
        case 25: rett =  "twenty five";
        break;
        case 26: rett =  "twenty six";
        break;
        case 27: rett =  "twenty seven";
        break;
        case 28: rett =  "twenty eight";
        break;
        case 29: rett =  "twenty nine";
        break;
    }
    return rett;
}

// Complete the timeInWords function below.
string timeInWords(int h, int m)
{
    string add,time;
    if(m>30)
    {
        if(m == 45)
        {
            if(h == 12)
                add = "one";
            else
                add = hrs_in_words(h+1);
            time = "quarter to " + add;
        }
        else
        {
            if(h == 12)
                add = "one";
            else
                add = hrs_in_words(h+1);
            string add2 = hrs_in_words(60-m);
            if(m == 59)
            time = add2 + " minute to " + add;
            else
            time = add2 + " minutes to " + add;
        }
    }
    else if(m == 30)
    {
        add = hrs_in_words(h);
        time = "half past " + add;
    }
    else if(m == 0)
    {
        add = hrs_in_words(h);
        time = add + " o' clock";
    }
    else
    {
        if(m == 15)
        {
            add = hrs_in_words(h);
            time = "quarter past " + add;
        }
        else
        {
            add = hrs_in_words(h);
            string add2 = hrs_in_words(m);
            if(m == 1)
            time = add2 + " minute past " + add;
            else
            time = add2 + " minutes past " + add;
        }
    }
    return time;
}

int main()
{
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result = timeInWords(h,m);
    cout << result;
    return 0;
}
