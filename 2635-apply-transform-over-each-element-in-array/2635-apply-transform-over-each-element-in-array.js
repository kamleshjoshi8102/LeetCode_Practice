/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const arrr = [];
    for(var i=0;i<arr.length;i++)
        {
            arrr[i] = fn(arr[i],i);
        }
    return arrr
};