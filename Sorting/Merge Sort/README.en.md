## Merge Sort

It's an implementation of divide-and-conquer technique.

### Approach

Step 1: Divide the array in two parts along the midway `mid = left + (right - left)/2`.

Step 2: Sort the 2 subarrays that we divided in step 1. Subarrays can be further sort by recursively doing Step 1 and Step 3 .

Step 3: Merge the two sorted arrays back into a single array.

Note : Array of size 1 is considered sorted.

### Pseudo Code

```
function mergesort(array,left,right):
    if left >= right  :
        return
    else :
        mid = left + (right - left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
```

### Reccurrence Relation

```
T(n) = 2T(n/2) + O(n)
```

### Performance

<table style="width:100%">
  <tr>
    <td>Worst Case Time Complexity</td>
    <td>O( nlogn )</td>
  </tr>
  <tr>
    <td>Best Case Time Complexity </td>
    <td>O( nlogn )</td>

  </tr>
  <tr>
    <td>Average Case Time Complexity </td>
    <td>O( nlogn )</td>

  </tr>
  <tr>
    <td>Space Complexity </td>
    <td>O(n) auxiliary and </br>O(logn) runtime stack space</td>

  </tr>
</table>
</br>

### Further Reading

refer to [AbdulBari lecture on Merge Sort](https://www.youtube.com/watch?v=mB5HXBb_HY8&ab_channel=AbdulBari)
