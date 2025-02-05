class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<n/2;i++){
            int t=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-1-i] = t;        }
        
    }
};
