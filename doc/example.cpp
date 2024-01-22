#include <iostream>
#include <string>

#include "nullableValue/nullableValue.h"

using namespace NAMESPACE_NULLABLE_VALUE;

int main() {
// ex1

    NullableValue<double> n;
    
    // 檢查初始狀態
    if (n.getValue() == NULL) {
        std::cout << "n is null." << std::endl;
    }

    // 設置一個值
    n.setValue(11.11);

    // 獲取並顯示值
    if (n.getValue() != NULL) {
        std::cout << "n value: " << n.getValue() << std::endl;
    }

    // 獲取值並做四則運算
    if (n.getValue() != NULL) {
        std::cout << "n + 10 value: " << n.getValue() + 10 << std::endl;
    }

// ex2

    NullableValue<int> n2(1);

    // 可以設置為空
    n2.setValue(NULL);

    int val = n2.getValue();

    // n2設置為空指定給val為0
    if (val == 0) {
        std::cout << "val value: " << val << std::endl;
    }    

    return 0;
}
