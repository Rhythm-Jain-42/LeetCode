/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int start = 0;
        int end = n - 1;
        int peak = 0;
        while (start <= end) {
            if (start == end) {
                peak = start;
                break;
            }
            if (start + 1 == end) {
                if (mountainArr.get(start) < mountainArr.get(end)) {
                    peak = end;
                }
                else {
                    peak = start;
                }
                break;
            }
            int q1 = start + (end - start) / 3;
            int q2 = start + (end - start) / 3 * 2;
            int l = mountainArr.get(q1);
            int r = mountainArr.get(q2);
            if (r > l) {
                start = q1 + 1;
            }
            else if (l > r) {
                end = q2 - 1;
            }
            else {
                if (end - start == 2) {
                    int endNum = mountainArr.get(end);
                    if (l < endNum) {
                        start++;
                    }
                    else if (l == endNum) {
                        peak = start + 1;
                        break;
                    }
                    else {
                        end--;
                    }
                }
                else {
                    start = q1 + 1;
                    end = q2 - 1;
                }
            }
        }
        // fount the peak idx
        // use binary search to find 
        start = 0;
        end = peak;
        while (start <= end) {
            int mid = (start + end) / 2;
            int midVal = mountainArr.get(mid);
            if (midVal < target) {
                start = mid + 1;
            }
            else if (midVal > target) {
                end = mid - 1;
            }
            else {
                return mid;
            }
        }
        start = peak;
        end = n - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            int midVal = mountainArr.get(mid);
            if (midVal < target) {
                end = mid - 1;
            }
            else if (midVal > target) {
                start = mid + 1;
            }
            else {
                return mid;
            }
        }
        return -1;
    }
};
