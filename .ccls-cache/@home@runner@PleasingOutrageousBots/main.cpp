#include "solution.h"

int main() {
  Solution sol; 
  int target = 100; 
  std::vector<int> vec = {1, 25, 50}; 
  
  /* Find the number of ways you can find the answer */
  // sol.solution(target, vec);
  // sol.combination(target, vec);

  sol.min_combination(target, vec);
  return 0; 
}