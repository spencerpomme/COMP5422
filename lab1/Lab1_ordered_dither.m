img = imread('C:\Users\spencer\Pictures\Camera Roll\C1A-GJqVEAA7sRb', 'jpg');
imshow(img);
img = rgb2gray(img);
D = [0,8,2,10;12,4,16,6;3,11,1,9;15,7,13,5];
[rd, rc] = size(D);
range = linspace(0,255,rd * rc);

[row, col] = size(img);
disp(row);
disp(col);
res = zeros(row, col);
for x = 1:row
    for y = 1:col
        i = mod(x, 3)+1;
        j = mod(y, 3)+1;
        if sum(range > img(x,y)) > D(i,j)
            res(x,y) = 0;
        else
            res(x,y) = 255;
        end
    end
end
figure(2);
imshow(res);
        
