A = imread('COMP_Blockchain_Lab', 'bmp');
% imshow(A);
disp(size(A));
RED_CHANNEL = A(:,:,1);
z = zeros(533, 800);
r = cat(3, RED_CHANNEL, z,z);
% GREEN_CHANNEL = A(:,:,2);
% BLUE_CHANNEL = A(:,:,3);
m = RED_CHANNEL(end-2:end, end-2:end);
disp(m);
dct2(m)