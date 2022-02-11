#include "binary_search_tree.h"

namespace binary_search_tree {

template <class T> auto binary_tree<T>::insert(const T value) noexcept {
    if (value > data_) {
      if (right_) {
        if (right_.get() != this) right_->insert(value);
        else                      right_ = Branch(new T(value));
      } else if (left_.get() != this) {
        if (left_)                left_->insert(value);
        else                      left_ = Branch(new T(value));
      }
    }
 }
 template <class T> auto binary_tree<T>::right() const noexcept -> Branch  {
   return right_;
 }
 template <class T> auto binary_tree<T>::left() const noexcept -> Branch {
   return left_;
 }
 template <class T> auto binary_tree<T>::data() noexcept -> T& {
   return data_;
 }
 
} // namespace binary_search_tree