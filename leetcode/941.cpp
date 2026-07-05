// int high = INT_MIN;
//         int index = 0;
//         int si = 0;
//         int sd = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] > high){
//                 high = nums[i];
//                 index = i;
//             }
//         }
//         if(index == 0 or index == nums.size() - 1){
//             return false;
//         }
//         for(int i = 0; i < index; i++){
//             if(nums[i] < nums[i+1]){
//                 si++;
//             }
//         }
//         for(int i = index; i < nums.size() - 1; i++){
//             if(nums[i] > nums[i+1]){
//                 sd++;
//             }
//         }

//         return (si == index and sd == (int)nums.size() - index - 1);