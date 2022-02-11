#include "pascals_triangle.h"
#include <algorithm> // for std::transform

namespace pascals_triangle {
matrix<int> generate_rows(const int height) {
  if (height < 1) { return {}; }
  
  auto rows = matrix<int>(height);
  
  for (int x = 1; x <= height; ++x) {
    auto row = std::vector<int>(x);
    std::transform(row.begin(), row.end(),
                   [coef = 1] mutable (auto& cell) {
      coef = coef * (x - y) / y;
      cell.emplace(coef);
    });
    
    for (int y = 1; y < x; ++y) {
      
      line.push_back(coef);
    }
    
    result_matrix.push_back(line);
  }
  
  return result_matrix;
}

} // namespace pascals_triangle


