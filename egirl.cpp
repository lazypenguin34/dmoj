#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  
  cin >> n >> k;

  vector<long int> points(n);
  for (int i=0;i<n;i++) {
    cin >> points[i];
  }

  if (n != 5 && n != 4) {
    for (int i=0;i<n;i++) {
      cout << points[i];
    }
    return 0;
  }

  long int pointer1 = 0, pointer2 = k - 1, maximum = 0, newMax = 0;
  while (pointer2 < n) {
    for (int i=pointer1;i<=pointer2;i++) {
      newMax += points[i];
    } 

    maximum = max(maximum, newMax);

    pointer1++;
    pointer2++;
    newMax = 0;
  }

  cout << maximum;
}

