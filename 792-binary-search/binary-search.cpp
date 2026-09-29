class Solution {
public:
    int binarysearch(vector<int>& num, int tar,int st,int end){ 
        if(st<=end){
            int mid =  st + (end-st)/2;
            if(num[mid] == tar){
                return mid;
            }
            else if(num[mid]<=tar){
                return binarysearch(num,tar,mid+1,end);
            }else{
                return binarysearch(num,tar,st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& num, int tar) {  
        return binarysearch(num,tar,0,num.size()-1);     
    }
};