let arr = [22, 55, 88, 77, 44, 11, 66, 989, 45, 78];
let targetValue = 989;
for (let i = 1; i <= arr.length; i++) {
  if (arr[i] == targetValue) {
    console.log("The targetValue is located at index number " + i);
  }
}
