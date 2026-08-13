#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double costPrice, sellingPrice;
    cout << "Enter the Cost Price (CP): ";
    cin >> costPrice;

    cout << "Enter the Selling Price (SP): ";
    cin >> sellingPrice;
    cout << fixed << setprecision(2);
    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        double profitPercent = (profit / costPrice) * 100;
        
        cout << "\nResult: Profit Generated!" << endl;
        cout << "Profit Amount: $" << profit << endl;
        cout << "Profit Percentage: " << profitPercent << "%" << endl;
    } 
    else if (costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        double lossPercent = (loss / costPrice) * 100;
        
        cout << "\nResult: Loss Incurred!" << endl;
        cout << "Loss Amount: $" << loss << endl;
        cout << "Loss Percentage: " << lossPercent << "%" << endl;
    } 
    else {
        cout << "\nResult: No Profit, No Loss (Break-even Condition)." << endl;
    }

    return 0;
}
