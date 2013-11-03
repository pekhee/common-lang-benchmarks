var numberOfIterations = 10000000; // 10M
var sum = 0;
var startTime = Date.now();
for(var i = 0; i < numberOfIterations; i++) sum=sum+i;
var completionTime = Date.now();
console.log("JS:   Done");
console.log(sum);
console.log((completionTime - startTime) + "ms");
