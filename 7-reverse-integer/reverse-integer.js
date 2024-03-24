/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let signature_element ; 
    let num ; 
    if(x >= 0 ){
        signature_element = 1;
        num = x; 
    }
    else{
        signature_element = -1; 
         
        num = -(x); 
    }
    let nonZeroElement = 0 ; 
    const arr =[]; 
    while(num > 0 ){
        let a = num %10; 
        
        num = Math.trunc(num/10);  
        arr.push(a); 
    }   
   console.log([...arr])
    let res = 0 ; 
    let i = 0 ; 
    while(arr[i] == 0){
        i++; 
    }
    nonZeroElement = arr.length - i ; 
    let num2 = Math.pow(10 , nonZeroElement-1); 
    for(   ; i < arr.length ; i++){
        
            res += arr[i] * num2;
        num2= num2/10; 
        
    }
    if( (res*signature_element) > (Math.pow(2 , 31)-1) || (res*signature_element) < Math.pow(-2 , 31)  ) {
        return 0 ; 
    }
    return (res*signature_element); 






};