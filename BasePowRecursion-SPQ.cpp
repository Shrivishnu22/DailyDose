/*
base = 2
power = 4

1 + 2^1 + 2^2 + 2^3 + 2^4
    ---   ---   ---   ---
     1!    2!    3!    4!
*/

#include <bits/stdc++.h>

using namespace std;

int sample(int base, int power){
  if(power<1){
    return 1;
  }
  int fact=1;
  for(int i=power;i>0;i--){
    fact=fact*i;
  }
  int numi = pow(base,power);
  return sample(base,power-1)+numi/fact;
}

int main()
{
    int base,power;
    cin>>base>>power;
    int ans = sample(base,power);
    cout<<ans<<endl;
    return 0;
}
