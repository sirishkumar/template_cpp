//
// Created by Sirish Kumar Bethala on 28.02.22.
//

#ifndef SMART_POINTERS_UNIQUE_PTR_H
#define SMART_POINTERS_UNIQUE_PTR_H

#include <memory>

template<typename T>
class unique_ptr {
public:
    unique_ptr(T* ptr): ptr_(ptr) {
    }

    unique_ptr(unique_ptr&& other) {
        if(other.ptr_ == ptr_)
            return *this;

        delete ptr_;
        ptr_ = std::move(other.ptr_);
    }

    unique_ptr(const unique_ptr&) = delete;
private:
    T* ptr_;
};


#endif //SMART_POINTERS_UNIQUE_PTR_H
