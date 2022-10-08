#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 6e5 + 10;
int s[N];
int t, cnt, p;
inline double calc(int p)
{
  return (s[p] + t) / (p + 1.);
}

int read()
{
  char ch;
  int x;
  while (!isdigit(ch = getchar()))
    ;
  x = ch ^ 48;
  while (isdigit(ch = getchar()))
    x = (x << 3) + (x << 1) + (ch ^ 48);
  return x;
}

signed main()
{
  int Q;
  Q = read();
  while (Q --)
  {
    int opt;
    opt = read();
    if (opt == 1)
    {
      t = read();
      cnt ++;
      s[cnt] = s[cnt - 1] + t;
    }
    else
    {
      while (p < cnt - 1 && calc(p + 1) < calc(p))
        p ++;
      printf ("%.10lf\n", t - calc(p));
      // t 是最大值 calc(p) 是平均值
    }
  }
  return 0;
}
