// const nums = [6, 2, 1, 5, 10, 3, 9, 8, 7, 4, 11];
// const nums = [
//   5,
//   4,
//   1,
//   2,
//   6,
//   8,
//   3,
//   7,
// ];
const nums = [26, 22, 3, 2, 24, 8, 19, 5, 29, 17, 13, 14, 4, 21, 9, 6, 23, 30, 27, 25, 12, 18, 16, 20, 11, 1, 28, 15, 10, 7];

/**
 * 
 * @param {number[]} arr 
 * @param {number} start
 * @param {number} size
 */
// const mergeSort = (arr, start, size) => {
//   let size1, size2;
//   size1 = size % 2 === 0 ? size / 2 : (size+1)/2;
//   size2 = size - size1;

//   if (size > 1) {
//     mergeSort(arr, start, size1);
//     mergeSort(arr, start + size1, size2);
//   }

//   const sorted = Array(size);
//   let sortedIdx = 0;
//   let leftIdx = start;
//   const leftEnd = (start + size1)
//   let rightIdx = start + size1;
//   const rightEnd = (start + size1 + size2);

//   console.log({ leftIdx, rightIdx });

//   while (sortedIdx < size) {
//     if (rightIdx >= rightEnd) {
//       while (leftIdx < leftEnd) {
//         sorted[sortedIdx] = arr[leftIdx];
//         sortedIdx++;
//         leftIdx++;
//       }
//       break;
//     }
//     if (leftIdx >= leftEnd) {
//       while (rightIdx < rightEnd) {
//         sorted[sortedIdx] = arr[rightIdx];
//         sortedIdx++;
//         rightIdx++;
//       }
//       break;
//     }
//     if (arr[leftIdx] > arr[rightIdx]) {
//       sorted[sortedIdx] = arr[rightIdx];
//       sortedIdx++;
//       rightIdx++;
//     } else if (arr[leftIdx] < arr[rightIdx]) {
//       sorted[sortedIdx] = arr[leftIdx];
//       sortedIdx++;
//       leftIdx++;
//     }
//   }

//   console.log(sorted);
// }

/**
 * 
 * @param {number[]} arr 
 */
// const mergeSort2 = (arr) => {
//   let mid = Math.ceil(arr.length/2);
//   let arr1 = arr.slice(0, mid);
//   let arr2 = arr.slice(mid);

//   console.log({ arr1, arr2 });

//   if (mid > 1) {
//     arr1 = mergeSort2(arr1);
//     arr2 = mergeSort2(arr2);
//   }

//   let sorted = [];
//   let i = 0, j = 0;

//   while (sorted.length < arr.length) {
//     if (j >= arr2.length) {
//       sorted.push(...arr1.slice(i));
//       break;
//     } else if (i >= arr1.length) {
//       sorted.push(...arr2.slice(j));
//       break;
//     }

//     if (arr1[i] > arr2[j]) {
//       sorted.push(arr2[j++]);
//     } else if (arr1[i] < arr2[j]) {
//       sorted.push(arr1[i++]);
//     }
//   }

//   return sorted;
// }

/**
 * 
 * @param {number[]} arr 
 * @param {number} start
 * @param {number} size
 */
const mergeSort3 = (arr, start, size) => {
  let mid = Math.ceil(size / 2);

  if (mid > 1) {
    mergeSort3(arr, start, mid);
    mergeSort3(arr, start+mid, size-mid);
  }

  let sorted = Array(size);
  let i = start, j = start+mid, s = 0;
  let i_max = start+mid, j_max = start+size;

  while (s < size) {
    if (j >= j_max) {
      while (i < i_max) sorted[s++] = arr[i++];
      break;
    } else if (i >= i_max) {
      while (j < j_max) sorted[s++] = arr[j++];
      break;
    }

    if (arr[i] > arr[j]) {
      sorted[s++] = arr[j++];
    } else if (arr[i] < arr[j]) {
      sorted[s++] = arr[i++];
    }
  }

  for (let i = 0; i < size; i++) {
    arr[start+i] = sorted[i];
  }

  return sorted;
}

mergeSort3(nums, 0, nums.length)
console.log('Final: ', nums)
