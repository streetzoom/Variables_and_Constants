#include <iostream>
/*
 * Walter's carpet cleaning service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

int main() {
    std::cout << "Hello, welcome to Walter's Carpet Cleaning Service" << std::endl << std::endl;

    std::cout << "How many small rooms would you like cleaned?" << std::endl;
    short int small_room {0};
    std::cin >> small_room;

    std::cout << "How many large rooms would you like cleaned?" << std::endl;
    short int large_room {0};
    std::cin >> large_room;

    const double small_room_price {25.0};
    const double large_room_price {35.0};
    const double sales_tax {0.06};

    const double cost {(small_room * small_room_price) + (large_room * large_room_price)};
    const double tax {((small_room * small_room_price) + (large_room * large_room_price)) * sales_tax};
    const double total_estimate {cost + tax};

    const short int estimate_expiry {30}; // days

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_room << std::endl;
    std::cout << "Number of large rooms: " << large_room << std::endl;
    std::cout << "Price per small room: " << small_room_price << std::endl;
    std::cout << "Price per large room: " << large_room_price << std::endl;
    std::cout << "Cost: " << cost << std::endl;
    std::cout << "Tax: " << tax << std::endl;
    std::cout << "====================================================" << std::endl;
    std::cout << "Total estimate: " << total_estimate << std::endl;
    std::cout << "This estimate is valid for: " << estimate_expiry << " days";

    return 0;
}
