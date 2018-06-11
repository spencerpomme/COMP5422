B = imread('polyu_color','bmp');
imshow(B);
RED_CHANNEL = B(:,:,1);
GREEN_CHANNEL = B(:,:,2);
BLUE_CHANNEL = B(:,:,3);

z = zeros(256,256);
r = cat(3, RED_CHANNEL, z,z);
g = cat(3, z, GREEN_CHANNEL, z);
b = cat(3, z,z,BLUE_CHANNEL);

% figure, imshow(r), title('Red channel')
% figure, imshow(g), title('Green channel')
% figure, imshow(b), title('Blue channel');

% Reverse green and blue channel:
green_channel = zeros(256,256) + 255;
blue_channel = zeros(256,256) + 255;
% Change red channel:
RED_CHANNEL(RED_CHANNEL < 255) = 0;
red_channel = RED_CHANNEL;
% Modified channels:
% figure, imshow(blue_channel), title('Blue channel');
% figure, imshow(green_channel), title('Green channel');
% figure, imshow(red_channel), title('Red channel');
% Overlap channels:
new_B = cat(3, red_channel, green_channel, blue_channel);
figure, imshow(new_B);