#include <bits/stdc++.h>
using namespace std;

struct data
{
    int elem;
    int freq;
    data *next;
};
data *head = NULL , *tail = NULL;

void add_node(int e, int f)
{
    data *newnode = new data;
    newnode->elem = e;
    newnode->freq = f;
    if(head == NULL)
    {
        head = tail = newnode;
        newnode->next = NULL;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        newnode->next = NULL;
    }
}

/*void display_list()
{
    tail = head;
    while(tail!=NULL)
    {
        cout << "(" << tail->elem << "," << tail->freq << ")--> ";
        tail = tail->next;
    }
    cout << "end";*/
//}

int main()
{
    int i,n,k,j,fr;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
    cin >> arr[i];

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //for(i=0;i<n;i++)
      //  cout << arr[i] << " ";
    //cout << endl;

    for(i=0;i<n;i++)
    {
        k=1;
        fr=1;
        while(arr[i] == arr[i+k])
        {
            fr++;
            i++;
        }
        add_node(arr[i],fr);
    }

  //  display_list();

    tail = head;
    int f[n] = {};
    i=0;
    while(tail != NULL)
    {
        data *temp = tail->next;
        if(temp!=NULL && abs(tail->elem - temp->elem) == 1)
        {
            f[i] = temp->freq + tail->freq;
            i++;
        }
        else
        {
            f[i] = tail->freq;
            i++;
        }
        tail = temp;
    }

    int maxm = f[0];
    for(i=1;i<n;i++)
        if(f[i] > maxm)
        maxm = f[i];

    cout << maxm;
}