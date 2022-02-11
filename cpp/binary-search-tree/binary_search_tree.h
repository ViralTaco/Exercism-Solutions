#ifndef VT_BINARY_SEARCH_TREE_H
#define VT_BINARY_SEARCH_TREE_H "1.0.0"

#include <memory>
namespace binary_search_tree {
template <class Type> class binary_tree {
public: // MARK: alias
  using Self = binary_tree<Type>;
  using Branch = std::unique_ptr<Self>;

private:
  Branch left_ = nullptr;
  Branch right_ = nullptr;
  Type data_;

public: // MARK: init
  explicit binary_tree(Type value) noexcept
    : data_{ value }
  {}
  
  // MARK: rule of five
  constexpr binary_tree() noexcept = default;
  constexpr binary_tree(Self const&) noexcept = default;
  constexpr binary_tree(Self&&) noexcept = default;
  constexpr binary_tree& operator =(Self const&) noexcept = default;

  virtual ~binary_tree<Type>() noexcept = default;
  
  // MARK: instance methods
  auto insert(const Type value) noexcept;
  auto right() const noexcept -> Branch;
  auto left()  const noexcept -> Branch;
  auto data()  noexcept -> Type&;
};
}

#endif
