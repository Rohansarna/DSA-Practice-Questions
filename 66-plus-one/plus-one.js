/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
   
    let N = digits.length;
    let result = digits[N - 1] + 1;
    let reminder = Math.trunc(result / 10);
    digits[N - 1] = result % 10;
    let i = N - 2;
    while (reminder != 0 && i >= 0) {
        result = (digits[i] + reminder);
        reminder = Math.trunc( result / 10);
        digits[i] = result % 10;
        i--;
    }
    const insert = (arr, index, newItem) => [
        // part of the array before the specified index
        ...arr.slice(0, index),
        // inserted item
        newItem,
        // part of the array after the specified index
        ...arr.slice(index)
    ]
    let y = [];
    if (reminder != 0) { y = insert(digits, 0, reminder);
    return y ;  }
    return digits ;
};