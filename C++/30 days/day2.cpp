#include <bits/stdc++.h>

using namespace std;

int main() {
	double mealCost;
	int tipPercent;
	int taxPercent;
	int tip;
	int tax;
	int totalCost;
	
	cin >> mealCost >> tipPercent >> taxPercent;
	
	tip = mealCost * tipPercent / 100;
	tax = mealCost * taxPercent / 100;
	totalCost = (int) round(mealCost + tip + tax);
	cout << totalCost;
	
	

	return 0;
}


