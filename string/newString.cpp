#include <iostream>
#include <string>

int main()
{
    std::string str1 = "HI str1";
    std::cout << "str1 = " << str1 << std::endl;

    std::string str2;
    str2 = std::string("HI str2");
    std::cout << "str2 = " << str2 << std::endl;

    // heap memory check
    int idx;
    std::cout << "idx : ";
    std::cin >> idx;

    int arr[idx];
    for (int i = 0; i < idx; i++)
    {
        std::cout << "arr[] : ";
        std::cin >> arr[i];
    }
    for (int i = 0; i < idx; i++)
    {
        std::cout << "arr = " << arr[i] << std::endl;
    }
    std::cout << "arr[idx] = " << arr[idx-1] << std::endl;
    // std::cout << "delete 전 메모리 위치 = " << arr << std::endl;
    // delete[idx] arr;
    // std::cout << "delete 후 메모리 위치 = " << arr << std::endl;
    // for (int i = 0; i < idx; i++)
    // {
    //     std::cout << "arr = " << arr[i] << std::endl;
    // }
    return 0;
}