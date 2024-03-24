/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function (nums) {
    const lengthOfArray = nums.length;
    if (lengthOfArray > 1) {


        let fast = nums[nums[0]];
        let slow = nums[0];
        while (fast != slow) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        fast = 0; 
        while(fast != slow ){
            fast = nums[fast]; 
            slow = nums[slow]; 
        }
        return slow;



    }
return -1; 


};