#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>&nums,int start, int end, int target){

if(start>end){
    return -1;

}
else if(start==end){
    return(nums[start]==target? start:-1);
}
else{
    int mid=start+(end-start)/2;
    if(nums[mid]<target){
        return firstOccurance(nums,mid+1,end,target);
    }
    else if(nums[mid]<target){
        return firstOccurance(nums,start,mid-1,target);
    }
    else{
        //nums[mid]==target
        if(mid==0 || mid>=1 && nums[mid-1]<nums[mid]){
            return mid;
        }
        else{
            return firstOccurance(nums,start,mid-1,target);
        }
    }
}
}
// last occurance
int lastOccurance(vector<int>&nums,int start, int end, int target){
    if(start>end){
    return -1;

}
else if(start==end){
    return(nums[start]==target? start:-1);
}
else{
    int mid=start+(end-start)/2;
    if(nums[mid]<target){
        return lastOccurance(nums,mid+1,end,target);
    }
    else if(nums[mid]<target){
        return lastOccurance(nums,start,mid-1,target);
    }
    else{
        //nums[mid]==target
        if(mid==0 || mid>=1 && nums[mid+1]>nums[mid]){
            return mid;
        }
        else{
            return lastOccurance(nums,mid+1,end,target);
        }
    }
}


}

vector<int> firstAndLastOccurrence(vector<int>& nums,int target){
    int first=firstOccurance(nums,0,nums.size()-1, target);
    int last=lastOccurance(nums,0,nums.size()-1, target);
    return{first,last};

}
int main(){
    vector<int>nums(7);
    for(int i=0;i<7;i++){
        cin>>nums[i];
    }
    vector<int>ans=firstAndLastOccurrence(nums,4);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}