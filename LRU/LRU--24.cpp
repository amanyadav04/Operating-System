#include <bits/stdc++.h>
using namespace std;
int pageFaults(int page[], int n, int memcap) {
  int pagefault = 0;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    auto it = find(v.begin(), v.end(), page[i]);
    if (it == v.end()) {
      if (v.size() == memcap) {
        v.erase(v.begin());
      }
      v.push_back(page[i]);
      pagefault++;

    } else {
      v.erase(it);
      v.push_back(page[i]);
    }
  }
  return pagefault;
}
int main() {
  int page[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
  cout << pageFaults(page, 13, 4);

  return 0;
}
