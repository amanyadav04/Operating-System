#include <bits/stdc++.h>
using namespace std;
//Aman Yadav

void RoundRobin() {
  int n, qt;
  cout << "enter number of processes" << endl;
  cin >> n;

  int p[n];
  int Bt[n];
  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << "enter burst of processes" << endl;
    cin >> Bt[i];
  }

  cout << "enter quantum time" << endl;
  cin >> qt;
  cout << "Ready Queue :- " << endl;
  int tot = 0;
  for (int i = 0; i < n; i++) {
    tot = tot + Bt[i];
  }
  int x = 0;

  while (x <= tot) {

    for (int i = 0; i < n; i++) {
      if (Bt[i] > qt) {
        cout << p[i] << " ";
        x = x + qt;
        Bt[i] = Bt[i] - qt;
      } else if (Bt[i] <= qt and Bt[i] != 0) {
        x = x + qt;
        cout << p[i] << " ";
        Bt[i] = 0;
      }
    }
  }
}
int main() {

  RoundRobin();
  return 0;
}
