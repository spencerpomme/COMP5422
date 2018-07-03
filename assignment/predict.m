function [dif, err] = predict(m, p)
% P4
% predictive compression
% m:= matrix
% p:= predictor type
[row, col] = size(m);
dif = zeros([row, col]);
dif(1,1) = m(1,1);
for i = 2:row
    dif(i,1) = m(i-1,1);
end
for j = 2:col
    dif(1,j) = m(1,j-1);
end
for i = 2:row
    for j = 2:col
        if p == 4
            dif(i,j) = m(i,j-1)+m(i-1,j)-m(i-1,j-1);
        elseif p == 5
            dif(i,j) = ceil(m(i,j-1)+(m(i-1,j)-m(i-1,j-1))/2);
        elseif p == 6
            dif(i,j) = ceil(m(i-1,j)+(m(i,j-1)-m(i-1,j-1))/2);
        elseif p == 7
            dif(i,j) = ceil((m(i,j-1)+m(i-1,j))/2);
        elseif p == 8
            dif(i,j) = median([m(i,j-1), m(i-1,j), m(i,j-1)+m(i-1,j)-m(i-1,j-1)]);
        else
            disp("Wrong input p!");
        end
    end
end
err = m - dif;
end

