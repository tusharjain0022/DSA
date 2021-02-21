## Bubble Sort

Sometimes reffered as sinking algorithm , simplest sorting algorithm.

### Approach

Step 1: Starting with the first element(index = 0), compare the current element with the next element of the array.

Step 2: If the current element is greater than the next element of the array, swap them.

Step 3: If the current element is less than the next element, move to the next element. Repeat Step 1.

### Pseudo Code

```
n = size of array
loop (i = 0 to i = n-1):
    loop(j = 0 to j = n-2):
        if array[j] > array[j+1] :
            swap(array[j],array[j+1])
```

### Performance

<table style="width:100%">
  <tr>
    <td>Worst Case Time Complexity</td>
    <td>O( n<sup>2</sup> )</td>
  </tr>
  <tr>
    <td>Best Case Time Complexity ( improvised version )</td>
    <td>O( n )</td>

  </tr>
  <tr>
    <td>Average Case Time Complexity ( basic version )</td>
    <td>O( n<sup>2</sup> )</td>

  </tr>
  <tr>
    <td>Worst Case Space Complexity </td>
    <td>O(1) auxiliary</td>

  </tr>
</table>
</br>

### Improvised version

Hint : After every pass if there is no swapping taking place then there is no need of executing further loop.

### Further Reading

refer to [GeeksForGeeks article on Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/)
