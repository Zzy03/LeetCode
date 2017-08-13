class Solution2 {  
public:  
  vector<int> twoSum(vector<int> &numbers, int target) {  
    vector<int> vecres;  
    unordered_map<int, int> mapidx;  
    for (int i = 0; i < numbers.size(); ++i)  
    {  
      if (mapidx.count(target - numbers[i]))  
      {  
        vecres.push_back(mapidx[target - numbers[i]]);  
        vecres.push_back(i + 1);  
        break;  
      }  
      else  
        mapidx[numbers[i]] = i + 1;  
    }  
    return vecres;  
  }  
};  