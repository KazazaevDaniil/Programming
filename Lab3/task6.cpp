#include "iostream"
#include "vector"

using namespace std;

vector<int> prices;
int ArrSize, vars, FirstBuy, FirstSell = 0, SecondBuy, SecondSell = 0;

int main() {
   cout << "Razmer massiva\n";
   cin >> ArrSize;
   cout << "Chisla\n";
   for (int Nums = 0; Nums < ArrSize; ++Nums) {
       cin >> vars;
       cout << endl;
       prices.push_back(vars);
   }
   for (int price = 0; price < ArrSize; ++price) {
       FirstBuy = min(FirstBuy,price);
       FirstSell = max(FirstSell, price - FirstBuy);
       SecondBuy = min(SecondBuy, price - FirstSell);
       SecondSell = max(SecondSell, price - SecondBuy);
   }
}

