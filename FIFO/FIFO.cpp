#include <bits/stdc++.h>
using namespace std;


int getPageFaults(int pages[], int n, int frames)
{
    unordered_set <int> set; 
    queue <int> indexes;
    int countPageFaults = 0;

    for (int i=0; i < n; i++)
    {
        if (set.size() < frames)
        {
            if (set.find(pages[i])==set.end())
            {
                set.insert(pages[i]);
                countPageFaults++;
                indexes.push(pages[i]);
            }
        }
        else
        {
            if (set.find(pages[i]) == set.end())
            {
                int val = indexes.front();
                indexes.pop();
                set.erase(val);
                set.insert(pages[i]);
                indexes.push(pages[i]);
                countPageFaults++;
            }
        }
    }

    return countPageFaults;
}


int main()
{
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int frames = 4;

    cout << "Page Faults: " << getPageFaults(pages, n, frames);

    return 0;
}
