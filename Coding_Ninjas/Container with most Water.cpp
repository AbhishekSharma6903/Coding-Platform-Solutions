int maxArea(vector<int>& height) {
       int n=height.size();
       int start=0;
       int end=n-1;
       int maxWater=0;
       while(start<end){
           int width=end-start;
           int h=min(height[start],height[end]);
           int water=width*h;
           maxWater=max(maxWater,water);
           if(height[start]>height[end]){
               end--;
           }
           else{
               start++;
           }
       }
       return maxWater;
   }
