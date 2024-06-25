n = 3; i = n; j = 1;
A = (n-1) * ones(n) - eye(n);
while true
if i ==0
break;
end
if i == j A(i, j) = A(i, j) - i;
else
A(i, j) = i + j;
end
i = i - 1;
j = n - i;end
A