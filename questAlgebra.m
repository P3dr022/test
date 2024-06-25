 n = 3;i = n;j = i;
 A = (n-1)*ones(n) - eye(n);
 while true
   
   if i == 0
     
    break;
    
   endif
  if i == j
    A(i,j) = A(i,j) - i;
    
  else
    A(i,j) = i + j;
  endif
  
  endwhile