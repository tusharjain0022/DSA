## Linear Search

Simplest searching algorithm.

### Approach

loop through all the elements in the array and check whether the required element is there or not in the input array.

### Pseudo Code

```
n = size of array
el=element to be searched
loop (i = 0 to i = n-1):
     if array[i]==el:
        print(Found at index : i)
```

### Performance

<table style="width:100%">
  <tr>
    <td>Worst Case Time Complexity</td>
    <td>O( n )</td>
  </tr>
  <tr>
    <td>Best Case Time Complexity ( improvised version )</td>
    <td>O( 1 )</td>

  </tr>
  <tr>
    <td>Worst Case Space Complexity </td>
    <td>O(1)</td>

  </tr>
</table>
</br>

### Improvised version

What if the array is sorted?
Try to optimize the linear searching itself for the sorted/ordered array/list.

Hint : if searching element < array[i] no need to loop further, just print("Element not found")

### Further Reading

refer to [GeeksForGeeks article on Linear Search](https://www.geeksforgeeks.org/linear-search/)
