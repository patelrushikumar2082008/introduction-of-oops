#include <iostream>
using namespace std;
class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;
    FoodOrder(int id, string name, bool delivered) {
        orderId = id;
        restaurantName = name;
        isDelivered = delivered;
    }
};
int main()
{
    FoodOrder o(101, "Pizza Hut", false);
    cout << o.orderId << " " << o.restaurantName << " " << o.isDelivered;
}
