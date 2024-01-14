#pragma once
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

class Solution{ 
  public: 

  void combination_get(int index, int target, 
    vector<int> &arr, vector<int>& ds, vector<vector<int>>& ans);

  void combination(int target, vector<int> &vec);

  void min_combination(int target, vector<int> &vec);

  int solution( int target, vector<int> &vec);
}; 