% DCT2 naive implementation
function z = DCT2(origin)
    [M, N] = size(origin);
    M = round(M);
    N = round(N);
    res = zeros([M,N]);
    for u = 1:M
        for v = 1:N
            % Start calculating a new entry of res.
            sum = 0;
            coef = 2 * C(u-1) * C(v-1) / sqrt(M * N);
            for i = 0:M-1
                for j = 0:N-1
                    cosu = cos((2*i+1)*(u-1)*pi/6.0);
                    cosv = cos((2*j+1)*(v-1)*pi/6.0);
                    sum = sum + cosu * cosv * origin(i+1, j+1);
                end
            end
            sum = coef * sum;
            res(u, v) = sum;
        end
    end
    z = res;
end

function z = C(x)
    if x == 0
        z = sqrt(2)/2;
    else
        z = 1;
    end
end