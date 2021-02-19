## Selection Sort

In-place sorting algorithm.

### Algorithm

Step 1: Find minimum element from unsorted part of array.

Step 2: swap this minimum value with the first element of unsorted part of this array.

Step 3: Repeat Step 1 for all elements.

### Pseudo Code

```
n= size of array
loop from i = 0 to i = n-1 :
    min_pos = i

    loop from (j = i + 1) to  j=size-1:
              if array[j] < array[min_pos]:
                  min_pos = j

    temp = array[i]
    array[i] = array[min_pos]
    array[min_pos] = temp
```

### Performance

<table style="width:100%">
  <tr>
    <td>Worst Case Time Complexity</td>
    <td>O( n<sup>2</sup> )</td>
  </tr>
  <tr>
    <td>Best Case Time Complexity </td>
    <td>O( n<sup>2</sup> )</td>

  </tr>
  <tr>
    <td>Average Case Time Complexity</td>
    <td>O( n<sup>2</sup> )</td>

  </tr>
  <tr>
    <td>Worst Case Space Complexity </td>
    <td>O(1) auxiliary</td>

  </tr>
</table>
</br>

### Task

Sort the array in Descending Order using Selection Sort.

### Further Reading

refer to [GeeksForGeeks article on Selection Sort](https://www.geeksforgeeks.org/selection-sort/)
