class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> result(m + n);

        int i = 0;
        int j = 0;
        int id = 0;

        while (i < m && j < n) {

            if (nums1[i] <= nums2[j]) {
                result[id] = nums1[i];
                id++;
                i++;
            }
            else {
                result[id] = nums2[j];
                id++;
                j++;
            }
        }

      
        while (i < m) {
            result[id] = nums1[i];
            id++;
            i++;
        }

        while (j < n) {
            result[id] = nums2[j];
            id++;
            j++;
        }

   
        for (int id = 0; id < m + n; id++) {
            nums1[id] = result[id];
        }
    }
};