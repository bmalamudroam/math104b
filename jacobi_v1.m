
function [x,iter] = jacobi_v1(N)
h = 1/N;

for j = 1:N-1
    y(1,j) = j*h;
end
b = zeros(1,N-1);
for j = 1:N-1
    b(j) = 2*pi^2*h^2*sin(y(j)*pi);
end
A = zeros(N-1,N-1);
A(1,1:2) = [2 + pi^2*h^2, -1];
A(N-1, N-2:N-1) = [-1, 2+pi^2*h^2];
for j = 2:N-2
        A(j,(j-1):(j+1)) = [-1, 2+pi^2*h^2, -1];
end
   
x = transpose(zeros(size(b)));
n = length(b);
tol = .1*h;
iter = 0;
while (max(abs(A*x-transpose(b))) > tol)
    for j=1:n
        y(j) = (b(j) - A(j,:)*(x) + A(j,j)*x(j))/(A(j,j));
    end
    iter=iter+1;
    for j=1:n
        x(j) = y(j);
    end
end

end




