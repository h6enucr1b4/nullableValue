#ifndef NULLABLE_VALUE_H
#define NULLABLE_VALUE_H

#include <optional>

#include "nullableValue/define.h"

namespace NAMESPACE_NULLABLE_VALUE{
    template <typename T>
    class NullableValue {
    private:
        std::optional<T> value;

    public:
        // 無參數的構造函數，預設為空值
        NullableValue() : value(std::nullopt){

        }

        // 有參數的構造函數，設置值
        NullableValue(T value) : value(value){

        }

        // 設置值的函數
        void setValue(T newValue) {
            value = newValue;
        }

        // 獲取值的函數
        T getValue() const {
            if (!value.has_value()) {
                return NULL; // 如果是空值，回傳 NULL
            }
            return *value;
        }
    };
}

#endif // NULLABLE_VALUE_H