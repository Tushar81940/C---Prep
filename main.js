let arr = [1,1,2,2,3,3,4];
let n = 7;

for(let i=0;i<n;i++){
   for(let j=0;j<i;j++){
        if(arr[i]==arr[j]){
           console.log(arr[i]+" ");
        }
   }
}

