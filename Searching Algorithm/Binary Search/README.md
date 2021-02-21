## Binary Search

Search a sorted array by repeatedly dividing the search interval in half.You can achieve this recursively or by iterative method.

### Approach

step 1: Compare search_element with the middle element.

Step2 : If search_element matches with middle element, we return the mid index.

Step 3: Else If search_element is greater than the mid element, then search_element can only lie in right half subarray after the mid element. So we set `end=mid+1`.

Step 4: Else (serahc_element is smaller) set `start=mid-1`.

Note : find mid position by `mid = start + (end-start)/2` to avoid integer overflow.

### Pseudo Code

```
function binarySearch(array,size,element):
    start = 0
    end=size-1
    while start <= end:
        mid = start + (end - start) / 2
        if array[mid] == element:
                return mid;
        else if array[mid] < element:
                start = mid + 1
        else
                end = mid - 1
    return -1
```

### Performance

<table style="width:100%">
  <tr>
    <td>Worst Case Time Complexity</td>
    <td>O( logn )</td>
  </tr>
  <tr>
    <td>Average Time Complexity</td>
    <td>O( logn )</td>

  </tr>
  <tr>
    <td>Best Case Time Complexity</td>
    <td>O( 1 )</td>

  </tr>
  <tr>
    <td>Space Complexity</td>
    <td>O(1)</td>

  </tr>
</table>
</br>

### Recurrence Relation

```
T(n) = T(n/2) + O(1)
```

using Divide and Conquer master Theorem we get

```
T(n) = O(logn)
```

### Further Reading

refer to [Errichto's lecture on Binary Search](https://www.youtube.com/watch?v=GU7DpgHINWQ&ab_channel=Errichto)
