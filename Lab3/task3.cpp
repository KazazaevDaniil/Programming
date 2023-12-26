#include "iostream"
#include "vector"

using namespace std;
vector <int> arr;
class MedianFinder {
public:
   void addNum(int nums){
       arr.push_back(nums);
       cout << "null" << '\n';

   };
   double findMedian(){
       if (size(arr) % 2 != 0){
           int middle1 = (size(arr)/2)+1;
           cout << middle1 << '\n';
       }
       else{
           double middle2 = (((double(size(arr)/2+1))) + double(size(arr)/2))/2;
           cout << double(middle2) << '\n';
       }
       return 0;
   };
};


int main(){
   int nums;
   MedianFinder medianFinder;
   medianFinder.addNum(1);
   medianFinder.addNum(2);
   medianFinder.findMedian();
   medianFinder.addNum(3);
   medianFinder.findMedian();
   return 0;
}
