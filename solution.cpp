#include "solution.h"

  void Solution::combination_get(int index, int target, 
      vector<int> &arr, vector<int>& ds, vector<vector<int>>& ans){

    if ( index >= arr.size() ){
      if ( target == 0 ){
        ans.push_back(ds);
      }
      return; 
    }

    /* Pick up the element if the element
    is less than or equal to the target */
    if ( arr[index] <= target){
      ds.push_back(arr[index]); 
      combination_get(index, target - arr[index], arr, ds, ans); 
      ds.pop_back();
    }
    combination_get(index + 1, target, arr, ds, ans); 
    return ; 
  }

  void Solution::combination(int target, vector<int> &vec){
    vector<int> ds;
    vector<vector<int>> ans; 

    combination_get(0, target, vec, ds, ans);  

    for ( auto li : ans){
      for ( auto in : li ){ 
      cout << in << ", ";
    }
      cout << "\n"; 
    }  

    return ; 
  }

  void Solution::min_combination(int target, vector<int> &vec){ 
    vector<int> ds;
    vector<vector<int>> ans; 

    combination_get(0, target, vec, ds, ans);

    int m = INT_MAX; \
    int index = 0 ; 
    for ( int i = 0 ; i < ans.size() ; i++){ 
      if ( m > ans[i].size()){ 
        m = ans[i].size(); 
      }

      if ( i == ans.size() - 1 ){ 
        index = i; 
      }
    }

    for ( int j = 0 ; j < ans[index].size(); j++){ 
      cout << ans[index][j] << " ";
    }

    cout << "\n"; 
  }

  int Solution::solution( int target, vector<int> &vec){
    vector<int> dp(target + 1 , 0); 

    /* we know that the number of solutions for target if == 0  is 0 */
    dp[0] = 1; 

    for ( auto coin : vec){ 
      for (int j = coin ; j <= target ; j++){
        dp[j] += dp[j - coin]; 
      }
    }
    cout << "Number of ways : " << dp[target] << "\n" ;
    return dp[target] ; 
  }
