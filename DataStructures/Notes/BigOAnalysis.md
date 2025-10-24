//Big O analysis//

O[f(n)] 
n=size of the array (non-negative)

f_2(n) = n^2 + (50)(51)
f_1(n) = 2(n^2)
f_1(n)>f_2(n) (when n>50)

EX: n^3 + n^2*log_2 (n) + 50

When a function has a fixed number of iterations big O is 1 (when iterations is independent of the size of the array) Answer=O(1). 

Ex:
for(k=1; k<=n/2; k++){
    for(j=1; j<=n*n; ++j){
        
        }
}
k=1 to k=n/2
j=1 to n^2
f(x) = (Inner iterations)(outer iterations)
Aswer =  (n/2)(n^2) = n^3/2

while(k>1){
    k=k/2;
}
n, n/2, n/4, n/8, n/
n/2^0, n/2^1, n/2^2, n/2^3, ...n/2^j
2^j=n
j=log_n
