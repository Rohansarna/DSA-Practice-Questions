/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x < 0 ){
        return 0; 
    }
    let = num = x ; 
    const arr = []; 
    const arr2= []; 
    while(num > 0 ){
        let a = num %10; 
        arr.push(a);
        arr2.push(a);  
        num = Math.trunc(num/10); 
    }
    
   arr.reverse();
    // console.log([...arr]);
    // console.log([...arr2]); 
    for(let i = 0 ; i< arr.length ; i++){
        if(arr[i] != arr2[i]){
            return 0; 
        }
    }
    return 1;

};