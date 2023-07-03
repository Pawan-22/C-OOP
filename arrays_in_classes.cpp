#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of the item no " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "Enter price of the item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop DA;
    DA.initCounter();
    DA.setPrice();
    DA.setPrice();
    DA.setPrice();
    DA.displayPrice();
    return 0;
}